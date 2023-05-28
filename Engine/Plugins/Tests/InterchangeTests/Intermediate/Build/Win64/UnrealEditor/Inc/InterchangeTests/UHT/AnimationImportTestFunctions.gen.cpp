// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/AnimationImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationImportTestFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAnimationImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAnimationImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyLeaveTangentWeight)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyLeaveTangentWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyLeaveTangentWeight(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyLeaveTangentWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyLeaveTangent)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyLeaveTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyLeaveTangent(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyLeaveTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyArriveTangentWeight)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyArriveTangentWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyArriveTangentWeight(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyArriveTangentWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyArriveTangent)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyArriveTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyArriveTangent(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyArriveTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyValue)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyValue(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckCurveKeyTime)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedCurveKeyTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckCurveKeyTime(Z_Param_AnimSequence,Z_Param_CurveName,Z_Param_KeyIndex,Z_Param_ExpectedCurveKeyTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckAnimationFrameNumber)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckAnimationFrameNumber(Z_Param_AnimSequence,Z_Param_ExpectedFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckAnimationLength)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedAnimationLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckAnimationLength(Z_Param_AnimSequence,Z_Param_ExpectedAnimationLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationImportTestFunctions::execCheckImportedAnimSequenceCount)
	{
		P_GET_TARRAY_REF(UAnimSequence*,Z_Param_Out_AnimSequences);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedAnimSequences);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAnimationImportTestFunctions::CheckImportedAnimSequenceCount(Z_Param_Out_AnimSequences,Z_Param_ExpectedNumberOfImportedAnimSequences);
		P_NATIVE_END;
	}
	void UAnimationImportTestFunctions::StaticRegisterNativesUAnimationImportTestFunctions()
	{
		UClass* Class = UAnimationImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAnimationFrameNumber", &UAnimationImportTestFunctions::execCheckAnimationFrameNumber },
			{ "CheckAnimationLength", &UAnimationImportTestFunctions::execCheckAnimationLength },
			{ "CheckCurveKeyArriveTangent", &UAnimationImportTestFunctions::execCheckCurveKeyArriveTangent },
			{ "CheckCurveKeyArriveTangentWeight", &UAnimationImportTestFunctions::execCheckCurveKeyArriveTangentWeight },
			{ "CheckCurveKeyLeaveTangent", &UAnimationImportTestFunctions::execCheckCurveKeyLeaveTangent },
			{ "CheckCurveKeyLeaveTangentWeight", &UAnimationImportTestFunctions::execCheckCurveKeyLeaveTangentWeight },
			{ "CheckCurveKeyTime", &UAnimationImportTestFunctions::execCheckCurveKeyTime },
			{ "CheckCurveKeyValue", &UAnimationImportTestFunctions::execCheckCurveKeyValue },
			{ "CheckImportedAnimSequenceCount", &UAnimationImportTestFunctions::execCheckImportedAnimSequenceCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics
	{
		struct AnimationImportTestFunctions_eventCheckAnimationFrameNumber_Parms
		{
			UAnimSequence* AnimSequence;
			int32 ExpectedFrameNumber;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedFrameNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationFrameNumber_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_ExpectedFrameNumber = { "ExpectedFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationFrameNumber_Parms, ExpectedFrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_ExpectedFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the animation frame number is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the animation frame number is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckAnimationFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::AnimationImportTestFunctions_eventCheckAnimationFrameNumber_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics
	{
		struct AnimationImportTestFunctions_eventCheckAnimationLength_Parms
		{
			UAnimSequence* AnimSequence;
			float ExpectedAnimationLength;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedAnimationLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationLength_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_ExpectedAnimationLength = { "ExpectedAnimationLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationLength_Parms, ExpectedAnimationLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckAnimationLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_ExpectedAnimationLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the animation length (second) is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the animation length (second) is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckAnimationLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::AnimationImportTestFunctions_eventCheckAnimationLength_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyArriveTangent;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyArriveTangent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_ExpectedCurveKeyArriveTangent = { "ExpectedCurveKeyArriveTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms, ExpectedCurveKeyArriveTangent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_ExpectedCurveKeyArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key arrive tangent for the given curve name has the expected arrive tangent */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key arrive tangent for the given curve name has the expected arrive tangent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyArriveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::AnimationImportTestFunctions_eventCheckCurveKeyArriveTangent_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyArriveTangentWeight;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyArriveTangentWeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_ExpectedCurveKeyArriveTangentWeight = { "ExpectedCurveKeyArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms, ExpectedCurveKeyArriveTangentWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_ExpectedCurveKeyArriveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key arrive tangent weight for the given curve name has the expected arrive tangent weight */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key arrive tangent weight for the given curve name has the expected arrive tangent weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyArriveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::AnimationImportTestFunctions_eventCheckCurveKeyArriveTangentWeight_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyLeaveTangent;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyLeaveTangent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_ExpectedCurveKeyLeaveTangent = { "ExpectedCurveKeyLeaveTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms, ExpectedCurveKeyLeaveTangent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_ExpectedCurveKeyLeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key leave tangent for the given curve name has the expected leave tangent */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key leave tangent for the given curve name has the expected leave tangent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyLeaveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangent_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyLeaveTangentWeight;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyLeaveTangentWeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_ExpectedCurveKeyLeaveTangentWeight = { "ExpectedCurveKeyLeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms, ExpectedCurveKeyLeaveTangentWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_ExpectedCurveKeyLeaveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key leave tangent weight for the given curve name has the expected leave tangent weight */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key leave tangent weight for the given curve name has the expected leave tangent weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyLeaveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::AnimationImportTestFunctions_eventCheckCurveKeyLeaveTangentWeight_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyTime;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_ExpectedCurveKeyTime = { "ExpectedCurveKeyTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms, ExpectedCurveKeyTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_ExpectedCurveKeyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key time(sec) for the given curve name has the expected time(sec) */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key time(sec) for the given curve name has the expected time(sec)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::AnimationImportTestFunctions_eventCheckCurveKeyTime_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics
	{
		struct AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms
		{
			UAnimSequence* AnimSequence;
			FString CurveName;
			int32 KeyIndex;
			float ExpectedCurveKeyValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedCurveKeyValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms, KeyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_ExpectedCurveKeyValue = { "ExpectedCurveKeyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms, ExpectedCurveKeyValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_ExpectedCurveKeyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given curve key value for the given curve name has the expected value */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given curve key value for the given curve name has the expected value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckCurveKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::AnimationImportTestFunctions_eventCheckCurveKeyValue_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics
	{
		struct AnimationImportTestFunctions_eventCheckImportedAnimSequenceCount_Parms
		{
			TArray<UAnimSequence*> AnimSequences;
			int32 ExpectedNumberOfImportedAnimSequences;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequences;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedAnimSequences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences_Inner = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckImportedAnimSequenceCount_Parms, AnimSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_ExpectedNumberOfImportedAnimSequences = { "ExpectedNumberOfImportedAnimSequences", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckImportedAnimSequenceCount_Parms, ExpectedNumberOfImportedAnimSequences), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationImportTestFunctions_eventCheckImportedAnimSequenceCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_AnimSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_ExpectedNumberOfImportedAnimSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of anim sequences are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of anim sequences are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationImportTestFunctions, nullptr, "CheckImportedAnimSequenceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::AnimationImportTestFunctions_eventCheckImportedAnimSequenceCount_Parms), Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationImportTestFunctions);
	UClass* Z_Construct_UClass_UAnimationImportTestFunctions_NoRegister()
	{
		return UAnimationImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationFrameNumber, "CheckAnimationFrameNumber" }, // 4028281345
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckAnimationLength, "CheckAnimationLength" }, // 2739092124
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangent, "CheckCurveKeyArriveTangent" }, // 742530405
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyArriveTangentWeight, "CheckCurveKeyArriveTangentWeight" }, // 2812179811
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangent, "CheckCurveKeyLeaveTangent" }, // 959519926
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyLeaveTangentWeight, "CheckCurveKeyLeaveTangentWeight" }, // 3700215117
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyTime, "CheckCurveKeyTime" }, // 1401672497
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckCurveKeyValue, "CheckCurveKeyValue" }, // 2564053156
		{ &Z_Construct_UFunction_UAnimationImportTestFunctions_CheckImportedAnimSequenceCount, "CheckImportedAnimSequenceCount" }, // 2357443942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/AnimationImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AnimationImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationImportTestFunctions_Statics::ClassParams = {
		&UAnimationImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UAnimationImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationImportTestFunctions.OuterSingleton, Z_Construct_UClass_UAnimationImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UAnimationImportTestFunctions>()
	{
		return UAnimationImportTestFunctions::StaticClass();
	}
	UAnimationImportTestFunctions::UAnimationImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationImportTestFunctions);
	UAnimationImportTestFunctions::~UAnimationImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationImportTestFunctions, UAnimationImportTestFunctions::StaticClass, TEXT("UAnimationImportTestFunctions"), &Z_Registration_Info_UClass_UAnimationImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationImportTestFunctions), 950927105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_3023335193(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
