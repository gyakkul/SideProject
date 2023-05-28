// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimDistanceMatchingLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "SequenceEvaluatorLibrary.h"
#include "SequencePlayerLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDistanceMatchingLibrary() {}
// Cross Module References
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimDistanceMatchingLibrary();
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceEvaluatorReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	UPackage* Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAnimDistanceMatchingLibrary::execSetPlayrateToMatchSpeed)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedToMatch);
		P_GET_STRUCT(FVector2D,Z_Param_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(Z_Param_Out_SequencePlayer,Z_Param_SpeedToMatch,Z_Param_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDistanceMatchingLibrary::execDistanceMatchToTarget)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_DistanceCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=UAnimDistanceMatchingLibrary::DistanceMatchToTarget(Z_Param_Out_SequenceEvaluator,Z_Param_DistanceToTarget,Z_Param_DistanceCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDistanceMatchingLibrary::execAdvanceTimeByDistanceMatching)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceTraveled);
		P_GET_PROPERTY(FNameProperty,Z_Param_DistanceCurveName);
		P_GET_STRUCT(FVector2D,Z_Param_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_DistanceTraveled,Z_Param_DistanceCurveName,Z_Param_PlayRateClamp);
		P_NATIVE_END;
	}
	void UAnimDistanceMatchingLibrary::StaticRegisterNativesUAnimDistanceMatchingLibrary()
	{
		UClass* Class = UAnimDistanceMatchingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceTimeByDistanceMatching", &UAnimDistanceMatchingLibrary::execAdvanceTimeByDistanceMatching },
			{ "DistanceMatchToTarget", &UAnimDistanceMatchingLibrary::execDistanceMatchToTarget },
			{ "SetPlayrateToMatchSpeed", &UAnimDistanceMatchingLibrary::execSetPlayrateToMatchSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics
	{
		struct AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			float DistanceTraveled;
			FName DistanceCurveName;
			FVector2D PlayRateClamp;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTraveled;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceCurveName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled = { "DistanceTraveled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, DistanceTraveled), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceCurveName = { "DistanceCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, DistanceCurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Distance Matching" },
		{ "Comment", "/**\n\x09 * Advance the sequence evaluator forward by distance traveled rather than time. A distance curve is required on the animation that\n\x09 * describes the distance traveled by the root bone in the animation. See UDistanceCurveModifier.\n\x09 * @param UpdateContext - The update context provided in the anim node function.\n\x09 * @param SequenceEvaluator - The sequence evaluator node to operate on.\n\x09 * @param DistanceTraveled - The distance traveled by the character since the last animation update.\n\x09 * @param DistanceCurveName - Name of the curve we want to match \n\x09 * @param PlayRateClamp - A clamp on the effective play rate of the animation after distance matching. Set to (0,0) for no clamping.\n\x09 */" },
		{ "CPP_Default_PlayRateClamp", "(X=0.750,Y=1.250)" },
		{ "ModuleRelativePath", "Public/AnimDistanceMatchingLibrary.h" },
		{ "ToolTip", "Advance the sequence evaluator forward by distance traveled rather than time. A distance curve is required on the animation that\ndescribes the distance traveled by the root bone in the animation. See UDistanceCurveModifier.\n@param UpdateContext - The update context provided in the anim node function.\n@param SequenceEvaluator - The sequence evaluator node to operate on.\n@param DistanceTraveled - The distance traveled by the character since the last animation update.\n@param DistanceCurveName - Name of the curve we want to match\n@param PlayRateClamp - A clamp on the effective play rate of the animation after distance matching. Set to (0,0) for no clamping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDistanceMatchingLibrary, nullptr, "AdvanceTimeByDistanceMatching", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::AnimDistanceMatchingLibrary_eventAdvanceTimeByDistanceMatching_Parms), Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics
	{
		struct AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			float DistanceToTarget;
			FName DistanceCurveName;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToTarget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DistanceCurveName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget = { "DistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms, DistanceToTarget), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceCurveName = { "DistanceCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms, DistanceCurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Distance Matching" },
		{ "Comment", "/**\n\x09 * Set the time of the sequence evaluator to the point in the animation where the distance curve matches the DistanceToTarget input.\n\x09 * A common use case is to achieve stops without foot sliding by, each frame, selecting the point in the animation that matches the distance the character has remaining until it stops.\n\x09 * Note that because this technique sets the time of the animation by distance remaining, it doesn't respect phase of any previous animation (e.g. from a jog cycle).\n\x09 * @param SequenceEvaluator - The sequence evaluator node to operate on.\n\x09 * @param DistanceToTarget - The distance remaining to a target (e.g. a stop or pivot point).\n\x09 * @param DistanceCurveName - Name of the curve we want to match \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimDistanceMatchingLibrary.h" },
		{ "ToolTip", "Set the time of the sequence evaluator to the point in the animation where the distance curve matches the DistanceToTarget input.\nA common use case is to achieve stops without foot sliding by, each frame, selecting the point in the animation that matches the distance the character has remaining until it stops.\nNote that because this technique sets the time of the animation by distance remaining, it doesn't respect phase of any previous animation (e.g. from a jog cycle).\n@param SequenceEvaluator - The sequence evaluator node to operate on.\n@param DistanceToTarget - The distance remaining to a target (e.g. a stop or pivot point).\n@param DistanceCurveName - Name of the curve we want to match" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDistanceMatchingLibrary, nullptr, "DistanceMatchToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::AnimDistanceMatchingLibrary_eventDistanceMatchToTarget_Parms), Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics
	{
		struct AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms
		{
			FSequencePlayerReference SequencePlayer;
			float SpeedToMatch;
			FVector2D PlayRateClamp;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToMatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SpeedToMatch = { "SpeedToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms, SpeedToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_SpeedToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Distance Matching" },
		{ "Comment", "/**\n\x09 * Set the play rate of the sequence player so that the speed of the animation matches in-game movement speed.\n\x09 * While distance matching is commonly used for transition animations, cycle animations (walk, jog, etc) typically just adjust their play rate to match\n\x09 * the in-game movement speed.\n\x09 * This function assumes that the animation has a constant speed.\n\x09 * @param SequencePlayer - The sequence player node to operate on.\n\x09 * @param SpeedToMatch - The in-game movement speed to match. This is usually the current speed of the movement component.\n\x09 * @param PlayRateClamp - A clamp on how much the animation's play rate can change to match the in-game movement speed. Set to (0,0) for no clamping.\n\x09 */" },
		{ "CPP_Default_PlayRateClamp", "(X=0.750,Y=1.250)" },
		{ "ModuleRelativePath", "Public/AnimDistanceMatchingLibrary.h" },
		{ "ToolTip", "Set the play rate of the sequence player so that the speed of the animation matches in-game movement speed.\nWhile distance matching is commonly used for transition animations, cycle animations (walk, jog, etc) typically just adjust their play rate to match\nthe in-game movement speed.\nThis function assumes that the animation has a constant speed.\n@param SequencePlayer - The sequence player node to operate on.\n@param SpeedToMatch - The in-game movement speed to match. This is usually the current speed of the movement component.\n@param PlayRateClamp - A clamp on how much the animation's play rate can change to match the in-game movement speed. Set to (0,0) for no clamping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDistanceMatchingLibrary, nullptr, "SetPlayrateToMatchSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::AnimDistanceMatchingLibrary_eventSetPlayrateToMatchSpeed_Parms), Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimDistanceMatchingLibrary);
	UClass* Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister()
	{
		return UAnimDistanceMatchingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching, "AdvanceTimeByDistanceMatching" }, // 2392343747
		{ &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget, "DistanceMatchToTarget" }, // 486448064
		{ &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed, "SetPlayrateToMatchSpeed" }, // 3626590971
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of techniques for driving animations by distance metrics rather than by time.\n * These techniques can be effective at compensating for differences between character movement and authored motion in the animations.\n * Distance Matching effectively changes the play rate of the animation to keep the feet from sliding. It's common to clamp the resulting\n * play rate to avoid animations playing too slow or too fast and to use techniques such as Stride Warping to make up the difference.\n */" },
		{ "IncludePath", "AnimDistanceMatchingLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimDistanceMatchingLibrary.h" },
		{ "ToolTip", "Library of techniques for driving animations by distance metrics rather than by time.\nThese techniques can be effective at compensating for differences between character movement and authored motion in the animations.\nDistance Matching effectively changes the play rate of the animation to keep the feet from sliding. It's common to clamp the resulting\nplay rate to avoid animations playing too slow or too fast and to use techniques such as Stride Warping to make up the difference." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimDistanceMatchingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::ClassParams = {
		&UAnimDistanceMatchingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimDistanceMatchingLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton, Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton;
	}
	template<> ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* StaticClass<UAnimDistanceMatchingLibrary>()
	{
		return UAnimDistanceMatchingLibrary::StaticClass();
	}
	UAnimDistanceMatchingLibrary::UAnimDistanceMatchingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDistanceMatchingLibrary);
	UAnimDistanceMatchingLibrary::~UAnimDistanceMatchingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimDistanceMatchingLibrary, UAnimDistanceMatchingLibrary::StaticClass, TEXT("UAnimDistanceMatchingLibrary"), &Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimDistanceMatchingLibrary), 2554153188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_2219559340(TEXT("/Script/AnimationLocomotionLibraryRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
