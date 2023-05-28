// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationBudgetAllocatorParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBudgetAllocatorParameters() {}
// Cross Module References
	ANIMATIONBUDGETALLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters();
	UPackage* Z_Construct_UPackage__Script_AnimationBudgetAllocator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters;
class UScriptStruct* FAnimationBudgetAllocatorParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters, (UObject*)Z_Construct_UPackage__Script_AnimationBudgetAllocator(), TEXT("AnimationBudgetAllocatorParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.OuterSingleton;
}
template<> ANIMATIONBUDGETALLOCATOR_API UScriptStruct* StaticStruct<FAnimationBudgetAllocatorParameters>()
{
	return FAnimationBudgetAllocatorParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetInMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetInMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkUnitSmoothingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorkUnitSmoothingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysTickFalloffAggression_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlwaysTickFalloffAggression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationFalloffAggression_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationFalloffAggression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMaxRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationMaxRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInterpolatedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInterpolatedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTickMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTickMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialEstimatedWorkUnitTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialEstimatedWorkUnitTimeMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTickedOffsreenComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTickedOffsreenComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateChangeThrottleInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateChangeThrottleInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetFactorBeforeReducedWork_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetFactorBeforeReducedWork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetFactorBeforeReducedWorkEpsilon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetFactorBeforeReducedWorkEpsilon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetPressureSmoothingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetPressureSmoothingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReducedWorkThrottleMinInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReducedWorkThrottleMinInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReducedWorkThrottleMaxInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReducedWorkThrottleMaxInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetFactorBeforeAggressiveReducedWork_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetFactorBeforeAggressiveReducedWork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReducedWorkThrottleMaxPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReducedWorkThrottleMaxPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetPressureBeforeEmergencyReducedWork_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetPressureBeforeEmergencyReducedWork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCalculatedSignificanceMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCalculatedSignificanceMaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter block used to control the behavior of the budget allocator */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Parameter block used to control the behavior of the budget allocator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationBudgetAllocatorParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetInMs_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Values > 0.1.\n\x09 * The time in milliseconds that we allocate for skeletal mesh work to be performed.\n\x09 * When overbudget various other parameters come into play, such as AlwaysTickFalloffAggression and InterpolationFalloffAggression.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values > 0.1.\nThe time in milliseconds that we allocate for skeletal mesh work to be performed.\nWhen overbudget various other parameters come into play, such as AlwaysTickFalloffAggression and InterpolationFalloffAggression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetInMs = { "BudgetInMs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetInMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetInMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MinQuality_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Values [0.0, 1.0].\n\x09 * The minimum quality metric allowed. Quality is determined simply by NumComponentsTickingThisFrame / NumComponentsThatWeNeedToTick.\n\x09 * If this is anything other than 0.0 then we can potentially go over our time budget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values [0.0, 1.0].\nThe minimum quality metric allowed. Quality is determined simply by NumComponentsTickingThisFrame / NumComponentsThatWeNeedToTick.\nIf this is anything other than 0.0 then we can potentially go over our time budget." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MinQuality = { "MinQuality", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, MinQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MinQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MinQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickRate_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Values >= 1.\n\x09 * The maximum tick rate we allow. If this is set then we can potentially go over budget, but keep quality of individual meshes to a reasonable level. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values >= 1.\nThe maximum tick rate we allow. If this is set then we can potentially go over budget, but keep quality of individual meshes to a reasonable level." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickRate = { "MaxTickRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, MaxTickRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_WorkUnitSmoothingSpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Values > 0.1.\n\x09 * The speed at which the average work unit converges on the measured amount. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values > 0.1.\nThe speed at which the average work unit converges on the measured amount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_WorkUnitSmoothingSpeed = { "WorkUnitSmoothingSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, WorkUnitSmoothingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_WorkUnitSmoothingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_WorkUnitSmoothingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AlwaysTickFalloffAggression_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [0.1, 0.9].\n\x09 * Controls the rate at which 'always ticked' components falloff under load.\n\x09 * Higher values mean that we reduce the number of always ticking components by a larger amount when the allocated time budget is exceeded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [0.1, 0.9].\nControls the rate at which 'always ticked' components falloff under load.\nHigher values mean that we reduce the number of always ticking components by a larger amount when the allocated time budget is exceeded." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AlwaysTickFalloffAggression = { "AlwaysTickFalloffAggression", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, AlwaysTickFalloffAggression), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AlwaysTickFalloffAggression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AlwaysTickFalloffAggression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationFalloffAggression_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [0.1, 0.9].\n\x09 * Controls the rate at which interpolated components falloff under load.\n\x09 * Higher values mean that we reduce the number of interpolated components by a larger amount when the allocated time budget is exceeded.\n\x09 * Components are only interpolated when the time budget is exceeded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [0.1, 0.9].\nControls the rate at which interpolated components falloff under load.\nHigher values mean that we reduce the number of interpolated components by a larger amount when the allocated time budget is exceeded.\nComponents are only interpolated when the time budget is exceeded." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationFalloffAggression = { "InterpolationFalloffAggression", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, InterpolationFalloffAggression), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationFalloffAggression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationFalloffAggression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationMaxRate_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Values > 1.\n\x09 * Controls the rate at which ticks happen when interpolating. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values > 1.\nControls the rate at which ticks happen when interpolating." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationMaxRate = { "InterpolationMaxRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, InterpolationMaxRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationMaxRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationMaxRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxInterpolatedComponents_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Range >= 0.\n\x09 * Max number of components to interpolate before we start throttling. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range >= 0.\nMax number of components to interpolate before we start throttling." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxInterpolatedComponents = { "MaxInterpolatedComponents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, MaxInterpolatedComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxInterpolatedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxInterpolatedComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationTickMultiplier_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Range [0.1, 0.9].\n\x09 * Controls the expected value an amortized interpolated tick will take compared to a 'normal' tick. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [0.1, 0.9].\nControls the expected value an amortized interpolated tick will take compared to a 'normal' tick." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationTickMultiplier = { "InterpolationTickMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, InterpolationTickMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationTickMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationTickMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InitialEstimatedWorkUnitTimeMs_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Values > 0.0.\n\x09 * Controls the time in milliseconds we expect, on average, for a skeletal mesh component to execute.\n\x09 * The value only applies for the first tick of a component, after which we use the real time the tick takes. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values > 0.0.\nControls the time in milliseconds we expect, on average, for a skeletal mesh component to execute.\nThe value only applies for the first tick of a component, after which we use the real time the tick takes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InitialEstimatedWorkUnitTimeMs = { "InitialEstimatedWorkUnitTimeMs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, InitialEstimatedWorkUnitTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InitialEstimatedWorkUnitTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InitialEstimatedWorkUnitTimeMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickedOffsreenComponents_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Values >= 1\n\x09 * The maximum number of offscreen components we tick (most significant first)\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Values >= 1\nThe maximum number of offscreen components we tick (most significant first)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickedOffsreenComponents = { "MaxTickedOffsreenComponents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, MaxTickedOffsreenComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickedOffsreenComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickedOffsreenComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_StateChangeThrottleInFrames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [1, 128]\n\x09 * Prevents throttle values from changing too often due to system and load noise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [1, 128]\nPrevents throttle values from changing too often due to system and load noise." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_StateChangeThrottleInFrames = { "StateChangeThrottleInFrames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, StateChangeThrottleInFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_StateChangeThrottleInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_StateChangeThrottleInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWork_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range > 1\n\x09 * Reduced work will be delayed until budget pressure goes over this amount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 1\nReduced work will be delayed until budget pressure goes over this amount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWork = { "BudgetFactorBeforeReducedWork", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWork), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWork_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWork_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWorkEpsilon_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** \n\x09 * Range > 0.0.\n\x09 * Increased work will be delayed until budget pressure goes under BudgetFactorBeforeReducedWork minus this amount. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 0.0.\nIncreased work will be delayed until budget pressure goes under BudgetFactorBeforeReducedWork minus this amount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWorkEpsilon = { "BudgetFactorBeforeReducedWorkEpsilon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWorkEpsilon), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWorkEpsilon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWorkEpsilon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureSmoothingSpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range > 0.0.\n\x09 * How much to smooth the budget pressure value used to throttle reduced work.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 0.0.\nHow much to smooth the budget pressure value used to throttle reduced work." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureSmoothingSpeed = { "BudgetPressureSmoothingSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetPressureSmoothingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureSmoothingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureSmoothingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMinInFrames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [1, 255].\n\x09 * Prevents reduced work from changing too often due to system and load noise. Min value used when over budget pressure (i.e. aggressive reduction).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [1, 255].\nPrevents reduced work from changing too often due to system and load noise. Min value used when over budget pressure (i.e. aggressive reduction)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMinInFrames = { "ReducedWorkThrottleMinInFrames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMinInFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMinInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMinInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxInFrames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [1, 255].\n\x09 * Prevents reduced work from changing too often due to system and load noise. Max value used when under budget pressure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [1, 255].\nPrevents reduced work from changing too often due to system and load noise. Max value used when under budget pressure." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxInFrames = { "ReducedWorkThrottleMaxInFrames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxInFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeAggressiveReducedWork_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range > 1.\n\x09 * Reduced work will be applied more rapidly when budget pressure goes over this amount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 1.\nReduced work will be applied more rapidly when budget pressure goes over this amount." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeAggressiveReducedWork = { "BudgetFactorBeforeAggressiveReducedWork", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeAggressiveReducedWork), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeAggressiveReducedWork_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeAggressiveReducedWork_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxPerFrame_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range [1, 255].\n\x09 * Controls the max number of components that are switched to/from reduced work per tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range [1, 255].\nControls the max number of components that are switched to/from reduced work per tick." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxPerFrame = { "ReducedWorkThrottleMaxPerFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureBeforeEmergencyReducedWork_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range > 0.0.\n\x09 * Controls the budget pressure where emergency reduced work (applied to all components except those that are bAlwaysTick).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 0.0.\nControls the budget pressure where emergency reduced work (applied to all components except those that are bAlwaysTick)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureBeforeEmergencyReducedWork = { "BudgetPressureBeforeEmergencyReducedWork", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, BudgetPressureBeforeEmergencyReducedWork), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureBeforeEmergencyReducedWork_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureBeforeEmergencyReducedWork_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AutoCalculatedSignificanceMaxDistance_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09 * Range > 1.0.\n\x09 * Controls the distance at which auto-calculated significance for budgeted components bottoms out. Components\n\x09 * within the distance 1 -> Max will have significance mapped 1 -> 0, outside of MaxDistance significance will be zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBudgetAllocatorParameters.h" },
		{ "ToolTip", "Range > 1.0.\nControls the distance at which auto-calculated significance for budgeted components bottoms out. Components\nwithin the distance 1 -> Max will have significance mapped 1 -> 0, outside of MaxDistance significance will be zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AutoCalculatedSignificanceMaxDistance = { "AutoCalculatedSignificanceMaxDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationBudgetAllocatorParameters, AutoCalculatedSignificanceMaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AutoCalculatedSignificanceMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AutoCalculatedSignificanceMaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetInMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MinQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_WorkUnitSmoothingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AlwaysTickFalloffAggression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationFalloffAggression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationMaxRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxInterpolatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InterpolationTickMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_InitialEstimatedWorkUnitTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_MaxTickedOffsreenComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_StateChangeThrottleInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeReducedWorkEpsilon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureSmoothingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMinInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetFactorBeforeAggressiveReducedWork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_ReducedWorkThrottleMaxPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_BudgetPressureBeforeEmergencyReducedWork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewProp_AutoCalculatedSignificanceMaxDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBudgetAllocator,
		nullptr,
		&NewStructOps,
		"AnimationBudgetAllocatorParameters",
		sizeof(FAnimationBudgetAllocatorParameters),
		alignof(FAnimationBudgetAllocatorParameters),
		Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.InnerSingleton, Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h_Statics::ScriptStructInfo[] = {
		{ FAnimationBudgetAllocatorParameters::StaticStruct, Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters_Statics::NewStructOps, TEXT("AnimationBudgetAllocatorParameters"), &Z_Registration_Info_UScriptStruct_AnimationBudgetAllocatorParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationBudgetAllocatorParameters), 679448343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h_1479232885(TEXT("/Script/AnimationBudgetAllocator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_AnimationBudgetAllocatorParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
