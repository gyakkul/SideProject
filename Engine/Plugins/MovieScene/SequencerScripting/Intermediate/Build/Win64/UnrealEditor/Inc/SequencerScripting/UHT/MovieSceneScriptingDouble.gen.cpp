// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/KeysAndChannels/MovieSceneScriptingDouble.h"
#include "SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingDouble() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetLeaveTangentWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaveTangentWeight(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetLeaveTangentWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeaveTangentWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetArriveTangentWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArriveTangentWeight(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetArriveTangentWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArriveTangentWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTangentWeightMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentWeightMode(ERichCurveTangentWeightMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTangentWeightMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveTangentWeightMode>*)Z_Param__Result=P_THIS->GetTangentWeightMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetLeaveTangent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaveTangent(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetLeaveTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeaveTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetArriveTangent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArriveTangent(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetArriveTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArriveTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTangentMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentMode(ERichCurveTangentMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTangentMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveTangentMode>*)Z_Param__Result=P_THIS->GetTangentMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetInterpolationMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationMode(ERichCurveInterpMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetInterpolationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveInterpMode>*)Z_Param__Result=P_THIS->GetInterpolationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetValue)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTime)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTime)
	{
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingDoubleKey::StaticRegisterNativesUMovieSceneScriptingDoubleKey()
	{
		UClass* Class = UMovieSceneScriptingDoubleKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArriveTangent", &UMovieSceneScriptingDoubleKey::execGetArriveTangent },
			{ "GetArriveTangentWeight", &UMovieSceneScriptingDoubleKey::execGetArriveTangentWeight },
			{ "GetInterpolationMode", &UMovieSceneScriptingDoubleKey::execGetInterpolationMode },
			{ "GetLeaveTangent", &UMovieSceneScriptingDoubleKey::execGetLeaveTangent },
			{ "GetLeaveTangentWeight", &UMovieSceneScriptingDoubleKey::execGetLeaveTangentWeight },
			{ "GetTangentMode", &UMovieSceneScriptingDoubleKey::execGetTangentMode },
			{ "GetTangentWeightMode", &UMovieSceneScriptingDoubleKey::execGetTangentWeightMode },
			{ "GetTime", &UMovieSceneScriptingDoubleKey::execGetTime },
			{ "GetValue", &UMovieSceneScriptingDoubleKey::execGetValue },
			{ "SetArriveTangent", &UMovieSceneScriptingDoubleKey::execSetArriveTangent },
			{ "SetArriveTangentWeight", &UMovieSceneScriptingDoubleKey::execSetArriveTangentWeight },
			{ "SetInterpolationMode", &UMovieSceneScriptingDoubleKey::execSetInterpolationMode },
			{ "SetLeaveTangent", &UMovieSceneScriptingDoubleKey::execSetLeaveTangent },
			{ "SetLeaveTangentWeight", &UMovieSceneScriptingDoubleKey::execSetLeaveTangentWeight },
			{ "SetTangentMode", &UMovieSceneScriptingDoubleKey::execSetTangentMode },
			{ "SetTangentWeightMode", &UMovieSceneScriptingDoubleKey::execSetTangentWeightMode },
			{ "SetTime", &UMovieSceneScriptingDoubleKey::execSetTime },
			{ "SetValue", &UMovieSceneScriptingDoubleKey::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n\x09* @return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n@return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetArriveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetArriveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms
		{
			TEnumAsByte<ERichCurveInterpMode> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(nullptr, 0) }; // 931686469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the interpolation mode for this key from the owning channel.\n\x09* @return\x09Interpolation mode this key uses to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the interpolation mode for this key from the owning channel.\n@return       Interpolation mode this key uses to interpolate between this key and the next." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n\x09* @return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n@return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetLeaveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetLeaveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms
		{
			TEnumAsByte<ERichCurveTangentMode> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(nullptr, 0) }; // 161970341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the tangent mode for this key from the owning channel.\n\x09* @return\x09Tangent mode that this key is using specifying which tangent values are respected when evaluating.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the tangent mode for this key from the owning channel.\n@return       Tangent mode that this key is using specifying which tangent values are respected when evaluating." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTangentMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms
		{
			TEnumAsByte<ERichCurveTangentWeightMode> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(nullptr, 0) }; // 3709203772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n\x09* @return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n@return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTangentWeightMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneScriptingDoubleKey_eventGetTime_Parms
		{
			ESequenceTimeUnit TimeUnit;
			FFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::MovieSceneScriptingDoubleKey_eventGetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventGetValue_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The double value this key represents.\n\x09*/" },
		{ "DisplayName", "Get Value (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The double value this key represents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::MovieSceneScriptingDoubleKey_eventGetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms
		{
			float InNewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetArriveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms
		{
			float InNewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @param InNewValue\x09Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@param InNewValue     Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetArriveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms
		{
			TEnumAsByte<ERichCurveInterpMode> InNewValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(nullptr, 0) }; // 931686469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the interpolation mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Interpolation mode this key should use to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the interpolation mode for this key, reflecting it in the owning channel.\n@param InNewValue     Interpolation mode this key should use to interpolate between this key and the next." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms
		{
			float InNewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetLeaveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms
		{
			float InNewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @param InNewValue\x09Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@param InNewValue     Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetLeaveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms
		{
			TEnumAsByte<ERichCurveTangentMode> InNewValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(nullptr, 0) }; // 161970341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the tangent mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the tangent mode for this key, reflecting it in the owning channel.\n@param InNewValue     Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTangentMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms
		{
			TEnumAsByte<ERichCurveTangentWeightMode> InNewValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(nullptr, 0) }; // 3709203772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n\x09* @param InNewValue\x09Specifies which tangent weights should be respected when evaluating the key. \n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n@param InNewValue     Specifies which tangent weights should be respected when evaluating the key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTangentWeightMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetTime_Parms
		{
			FFrameNumber NewFrameNumber;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFrameNumber;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::MovieSceneScriptingDoubleKey_eventSetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics
	{
		struct MovieSceneScriptingDoubleKey_eventSetValue_Parms
		{
			double InNewValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetValue_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new double value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new double value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::MovieSceneScriptingDoubleKey_eventSetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister()
	{
		return UMovieSceneScriptingDoubleKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent, "GetArriveTangent" }, // 2894972029
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight, "GetArriveTangentWeight" }, // 3585677429
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode, "GetInterpolationMode" }, // 872968301
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent, "GetLeaveTangent" }, // 66803662
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight, "GetLeaveTangentWeight" }, // 1500165574
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode, "GetTangentMode" }, // 42775049
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode, "GetTangentWeightMode" }, // 2835908906
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime, "GetTime" }, // 3278737138
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue, "GetValue" }, // 1641157503
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent, "SetArriveTangent" }, // 2830305662
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight, "SetArriveTangentWeight" }, // 1716289847
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode, "SetInterpolationMode" }, // 2045912884
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent, "SetLeaveTangent" }, // 2328862211
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight, "SetLeaveTangentWeight" }, // 1104625366
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode, "SetTangentMode" }, // 2267096052
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode, "SetTangentWeightMode" }, // 392059454
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime, "SetTime" }, // 2715096311
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue, "SetValue" }, // 3457935492
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer double type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Exposes a Sequencer double type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::ClassParams = {
		&UMovieSceneScriptingDoubleKey::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleKey>()
	{
		return UMovieSceneScriptingDoubleKey::StaticClass();
	}
	UMovieSceneScriptingDoubleKey::UMovieSceneScriptingDoubleKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleKey);
	UMovieSceneScriptingDoubleKey::~UMovieSceneScriptingDoubleKey() {}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execHasDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execRemoveDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetDefault)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefault(Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetPostInfinityExtrapolation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetPostInfinityExtrapolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPostInfinityExtrapolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetPreInfinityExtrapolation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetPreInfinityExtrapolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPreInfinityExtrapolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execComputeEffectiveRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=P_THIS->ComputeEffectiveRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execEvaluateKeys)
	{
		P_GET_STRUCT(FSequencerScriptingRange,Z_Param_Range);
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<double>*)Z_Param__Result=P_THIS->EvaluateKeys(Z_Param_Range,Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetNumKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execRemoveKey)
	{
		P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execAddKey)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_ENUM(EMovieSceneKeyInterpolation,Z_Param_InInterpolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneScriptingDoubleKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit),EMovieSceneKeyInterpolation(Z_Param_InInterpolation));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingDoubleChannel::StaticRegisterNativesUMovieSceneScriptingDoubleChannel()
	{
		UClass* Class = UMovieSceneScriptingDoubleChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKey", &UMovieSceneScriptingDoubleChannel::execAddKey },
			{ "ComputeEffectiveRange", &UMovieSceneScriptingDoubleChannel::execComputeEffectiveRange },
			{ "EvaluateKeys", &UMovieSceneScriptingDoubleChannel::execEvaluateKeys },
			{ "GetDefault", &UMovieSceneScriptingDoubleChannel::execGetDefault },
			{ "GetKeys", &UMovieSceneScriptingDoubleChannel::execGetKeys },
			{ "GetNumKeys", &UMovieSceneScriptingDoubleChannel::execGetNumKeys },
			{ "GetPostInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execGetPostInfinityExtrapolation },
			{ "GetPreInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execGetPreInfinityExtrapolation },
			{ "HasDefault", &UMovieSceneScriptingDoubleChannel::execHasDefault },
			{ "RemoveDefault", &UMovieSceneScriptingDoubleChannel::execRemoveDefault },
			{ "RemoveKey", &UMovieSceneScriptingDoubleChannel::execRemoveKey },
			{ "SetDefault", &UMovieSceneScriptingDoubleChannel::execSetDefault },
			{ "SetPostInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execSetPostInfinityExtrapolation },
			{ "SetPreInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execSetPreInfinityExtrapolation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventAddKey_Parms
		{
			FFrameNumber InTime;
			double NewValue;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
			EMovieSceneKeyInterpolation InInterpolation;
			UMovieSceneScriptingDoubleKey* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation = { "InInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, InInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(nullptr, 0) }; // 1916605723
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_InInterpolation", "Auto" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "AddKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::MovieSceneScriptingDoubleChannel_eventAddKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms
		{
			FSequencerScriptingRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Compute the effective range of this channel, for example, the extents of its key times\n\x09*\n\x09* @return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution\n\x09*/" },
		{ "DisplayName", "Compute Effective Range (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Compute the effective range of this channel, for example, the extents of its key times\n\n@return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "ComputeEffectiveRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms
		{
			FSequencerScriptingRange Range;
			FFrameRate FrameRate;
			TArray<double> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets baked keys in this channel.\n\x09* @return\x09""An array of double's contained by this channel.\n\x09*\x09\x09\x09Returns baked keys in the specified range.\n\x09*/" },
		{ "DisplayName", "Evaluate Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets baked keys in this channel.\n@return       An array of double's contained by this channel.\n                      Returns baked keys in the specified range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "EvaluateKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventGetDefault_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::MovieSceneScriptingDoubleChannel_eventGetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventGetKeys_Parms
		{
			TArray<UMovieSceneScriptingKey*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingDoubleKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingDoubleKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Returns number of keys in this channel.\n\x09*/" },
		{ "DisplayName", "Get Num Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Returns number of keys in this channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetNumKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms
		{
			TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetPostInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms
		{
			TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetPreInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventHasDefault_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingDoubleChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingDoubleChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "HasDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::MovieSceneScriptingDoubleChannel_eventHasDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "RemoveDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms
		{
			UMovieSceneScriptingKey* Key;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "RemoveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventSetDefault_Parms
		{
			double InDefaultValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetDefault_Parms, InDefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::NewProp_InDefaultValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::MovieSceneScriptingDoubleChannel_eventSetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms
		{
			TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating after this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating after this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetPostInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms
		{
			TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating before this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating before this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetPreInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleChannel);
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_NoRegister()
	{
		return UMovieSceneScriptingDoubleChannel::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey, "AddKey" }, // 339620966
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange, "ComputeEffectiveRange" }, // 1843264962
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys, "EvaluateKeys" }, // 1688647308
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault, "GetDefault" }, // 1363557819
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys, "GetKeys" }, // 1527444345
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys, "GetNumKeys" }, // 2236389125
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation, "GetPostInfinityExtrapolation" }, // 4283254753
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation, "GetPreInfinityExtrapolation" }, // 1428214888
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault, "HasDefault" }, // 3222838437
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault, "RemoveDefault" }, // 2212409673
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey, "RemoveKey" }, // 2655372377
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault, "SetDefault" }, // 3856532793
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation, "SetPostInfinityExtrapolation" }, // 3130180187
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation, "SetPreInfinityExtrapolation" }, // 199476036
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::ClassParams = {
		&UMovieSceneScriptingDoubleChannel::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleChannel>()
	{
		return UMovieSceneScriptingDoubleChannel::StaticClass();
	}
	UMovieSceneScriptingDoubleChannel::UMovieSceneScriptingDoubleChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleChannel);
	UMovieSceneScriptingDoubleChannel::~UMovieSceneScriptingDoubleChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleKey, UMovieSceneScriptingDoubleKey::StaticClass, TEXT("UMovieSceneScriptingDoubleKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleKey), 3946851940U) },
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, UMovieSceneScriptingDoubleChannel::StaticClass, TEXT("UMovieSceneScriptingDoubleChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleChannel), 3912257838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_2789893623(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
