// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/KeysAndChannels/MovieSceneScriptingFloat.h"
#include "SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingFloat() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetLeaveTangentWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaveTangentWeight(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetLeaveTangentWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeaveTangentWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetArriveTangentWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArriveTangentWeight(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetArriveTangentWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArriveTangentWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTangentWeightMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentWeightMode(ERichCurveTangentWeightMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTangentWeightMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveTangentWeightMode>*)Z_Param__Result=P_THIS->GetTangentWeightMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetLeaveTangent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaveTangent(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetLeaveTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeaveTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetArriveTangent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArriveTangent(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetArriveTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArriveTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTangentMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentMode(ERichCurveTangentMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTangentMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveTangentMode>*)Z_Param__Result=P_THIS->GetTangentMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetInterpolationMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationMode(ERichCurveInterpMode(Z_Param_InNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetInterpolationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveInterpMode>*)Z_Param__Result=P_THIS->GetInterpolationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTime)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTime)
	{
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingFloatKey::StaticRegisterNativesUMovieSceneScriptingFloatKey()
	{
		UClass* Class = UMovieSceneScriptingFloatKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArriveTangent", &UMovieSceneScriptingFloatKey::execGetArriveTangent },
			{ "GetArriveTangentWeight", &UMovieSceneScriptingFloatKey::execGetArriveTangentWeight },
			{ "GetInterpolationMode", &UMovieSceneScriptingFloatKey::execGetInterpolationMode },
			{ "GetLeaveTangent", &UMovieSceneScriptingFloatKey::execGetLeaveTangent },
			{ "GetLeaveTangentWeight", &UMovieSceneScriptingFloatKey::execGetLeaveTangentWeight },
			{ "GetTangentMode", &UMovieSceneScriptingFloatKey::execGetTangentMode },
			{ "GetTangentWeightMode", &UMovieSceneScriptingFloatKey::execGetTangentWeightMode },
			{ "GetTime", &UMovieSceneScriptingFloatKey::execGetTime },
			{ "GetValue", &UMovieSceneScriptingFloatKey::execGetValue },
			{ "SetArriveTangent", &UMovieSceneScriptingFloatKey::execSetArriveTangent },
			{ "SetArriveTangentWeight", &UMovieSceneScriptingFloatKey::execSetArriveTangentWeight },
			{ "SetInterpolationMode", &UMovieSceneScriptingFloatKey::execSetInterpolationMode },
			{ "SetLeaveTangent", &UMovieSceneScriptingFloatKey::execSetLeaveTangent },
			{ "SetLeaveTangentWeight", &UMovieSceneScriptingFloatKey::execSetLeaveTangentWeight },
			{ "SetTangentMode", &UMovieSceneScriptingFloatKey::execSetTangentMode },
			{ "SetTangentWeightMode", &UMovieSceneScriptingFloatKey::execSetTangentWeightMode },
			{ "SetTime", &UMovieSceneScriptingFloatKey::execSetTime },
			{ "SetValue", &UMovieSceneScriptingFloatKey::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n\x09* @return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n@return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetArriveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetArriveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(nullptr, 0) }; // 931686469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the interpolation mode for this key from the owning channel.\n\x09* @return\x09Interpolation mode this key uses to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the interpolation mode for this key from the owning channel.\n@return       Interpolation mode this key uses to interpolate between this key and the next." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n\x09* @return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n@return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetLeaveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetLeaveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetTangentMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTangentMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(nullptr, 0) }; // 161970341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the tangent mode for this key from the owning channel.\n\x09* @return\x09Tangent mode that this key is using specifying which tangent values are respected when evaluating.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the tangent mode for this key from the owning channel.\n@return       Tangent mode that this key is using specifying which tangent values are respected when evaluating." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTangentMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(nullptr, 0) }; // 3709203772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n\x09* @return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n@return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTangentWeightMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneScriptingFloatKey_eventGetTime_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::MovieSceneScriptingFloatKey_eventGetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics
	{
		struct MovieSceneScriptingFloatKey_eventGetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The float value this key represents.\n\x09*/" },
		{ "DisplayName", "Get Value (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The float value this key represents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::MovieSceneScriptingFloatKey_eventGetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetArriveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @param InNewValue\x09Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@param InNewValue     Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetArriveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(nullptr, 0) }; // 931686469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the interpolation mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Interpolation mode this key should use to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the interpolation mode for this key, reflecting it in the owning channel.\n@param InNewValue     Interpolation mode this key should use to interpolate between this key and the next." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetLeaveTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @param InNewValue\x09Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@param InNewValue     Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetLeaveTangentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetTangentMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTangentMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(nullptr, 0) }; // 161970341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the tangent mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the tangent mode for this key, reflecting it in the owning channel.\n@param InNewValue     Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTangentMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(nullptr, 0) }; // 3709203772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n\x09* @param InNewValue\x09Specifies which tangent weights should be respected when evaluating the key. \n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n@param InNewValue     Specifies which tangent weights should be respected when evaluating the key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTangentWeightMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetTime_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::MovieSceneScriptingFloatKey_eventSetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics
	{
		struct MovieSceneScriptingFloatKey_eventSetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetValue_Parms, InNewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new float value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new float value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::MovieSceneScriptingFloatKey_eventSetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingFloatKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister()
	{
		return UMovieSceneScriptingFloatKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent, "GetArriveTangent" }, // 3193761880
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight, "GetArriveTangentWeight" }, // 674307494
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode, "GetInterpolationMode" }, // 3061755072
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent, "GetLeaveTangent" }, // 1288528229
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight, "GetLeaveTangentWeight" }, // 1942481262
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode, "GetTangentMode" }, // 2550519044
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode, "GetTangentWeightMode" }, // 3882806553
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime, "GetTime" }, // 2940093448
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue, "GetValue" }, // 2843785107
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent, "SetArriveTangent" }, // 3681511323
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight, "SetArriveTangentWeight" }, // 1263899392
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode, "SetInterpolationMode" }, // 3194404121
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent, "SetLeaveTangent" }, // 3378887633
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight, "SetLeaveTangentWeight" }, // 925104197
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode, "SetTangentMode" }, // 2716424493
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode, "SetTangentWeightMode" }, // 812049292
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime, "SetTime" }, // 175458757
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue, "SetValue" }, // 410701271
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer float type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Exposes a Sequencer float type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingFloatKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::ClassParams = {
		&UMovieSceneScriptingFloatKey::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingFloatKey>()
	{
		return UMovieSceneScriptingFloatKey::StaticClass();
	}
	UMovieSceneScriptingFloatKey::UMovieSceneScriptingFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingFloatKey);
	UMovieSceneScriptingFloatKey::~UMovieSceneScriptingFloatKey() {}
	void UMovieSceneScriptingActualFloatKey::StaticRegisterNativesUMovieSceneScriptingActualFloatKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingActualFloatKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister()
	{
		return UMovieSceneScriptingActualFloatKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingActualFloatKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::ClassParams = {
		&UMovieSceneScriptingActualFloatKey::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingActualFloatKey>()
	{
		return UMovieSceneScriptingActualFloatKey::StaticClass();
	}
	UMovieSceneScriptingActualFloatKey::UMovieSceneScriptingActualFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingActualFloatKey);
	UMovieSceneScriptingActualFloatKey::~UMovieSceneScriptingActualFloatKey() {}
	void UMovieSceneScriptingDoubleAsFloatKey::StaticRegisterNativesUMovieSceneScriptingDoubleAsFloatKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleAsFloatKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister()
	{
		return UMovieSceneScriptingDoubleAsFloatKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleAsFloatKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::ClassParams = {
		&UMovieSceneScriptingDoubleAsFloatKey::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleAsFloatKey>()
	{
		return UMovieSceneScriptingDoubleAsFloatKey::StaticClass();
	}
	UMovieSceneScriptingDoubleAsFloatKey::UMovieSceneScriptingDoubleAsFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleAsFloatKey);
	UMovieSceneScriptingDoubleAsFloatKey::~UMovieSceneScriptingDoubleAsFloatKey() {}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execHasDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execRemoveDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetDefault)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefault(Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetPostInfinityExtrapolation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetPostInfinityExtrapolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPostInfinityExtrapolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetPreInfinityExtrapolation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetPreInfinityExtrapolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPreInfinityExtrapolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execComputeEffectiveRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=P_THIS->ComputeEffectiveRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execEvaluateKeys)
	{
		P_GET_STRUCT(FSequencerScriptingRange,Z_Param_Range);
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->EvaluateKeys(Z_Param_Range,Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetNumKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execRemoveKey)
	{
		P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execAddKey)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_ENUM(EMovieSceneKeyInterpolation,Z_Param_InInterpolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneScriptingFloatKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit),EMovieSceneKeyInterpolation(Z_Param_InInterpolation));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingFloatChannel::StaticRegisterNativesUMovieSceneScriptingFloatChannel()
	{
		UClass* Class = UMovieSceneScriptingFloatChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKey", &UMovieSceneScriptingFloatChannel::execAddKey },
			{ "ComputeEffectiveRange", &UMovieSceneScriptingFloatChannel::execComputeEffectiveRange },
			{ "EvaluateKeys", &UMovieSceneScriptingFloatChannel::execEvaluateKeys },
			{ "GetDefault", &UMovieSceneScriptingFloatChannel::execGetDefault },
			{ "GetKeys", &UMovieSceneScriptingFloatChannel::execGetKeys },
			{ "GetNumKeys", &UMovieSceneScriptingFloatChannel::execGetNumKeys },
			{ "GetPostInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execGetPostInfinityExtrapolation },
			{ "GetPreInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execGetPreInfinityExtrapolation },
			{ "HasDefault", &UMovieSceneScriptingFloatChannel::execHasDefault },
			{ "RemoveDefault", &UMovieSceneScriptingFloatChannel::execRemoveDefault },
			{ "RemoveKey", &UMovieSceneScriptingFloatChannel::execRemoveKey },
			{ "SetDefault", &UMovieSceneScriptingFloatChannel::execSetDefault },
			{ "SetPostInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execSetPostInfinityExtrapolation },
			{ "SetPreInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execSetPreInfinityExtrapolation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventAddKey_Parms
		{
			FFrameNumber InTime;
			float NewValue;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
			EMovieSceneKeyInterpolation InInterpolation;
			UMovieSceneScriptingFloatKey* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation = { "InInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, InInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(nullptr, 0) }; // 1916605723
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_InInterpolation", "Auto" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "AddKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::MovieSceneScriptingFloatChannel_eventAddKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Compute the effective range of this channel, for example, the extents of its key times\n\x09*\n\x09* @return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution\n\x09*/" },
		{ "DisplayName", "Compute Effective Range (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Compute the effective range of this channel, for example, the extents of its key times\n\n@return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "ComputeEffectiveRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms
		{
			FSequencerScriptingRange Range;
			FFrameRate FrameRate;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets baked keys in this channel.\n\x09* @return\x09""An array of float's contained by this channel.\n\x09*\x09\x09\x09Returns baked keys in the specified range.\n\x09*/" },
		{ "DisplayName", "Evaluate Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets baked keys in this channel.\n@return       An array of float's contained by this channel.\n                      Returns baked keys in the specified range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "EvaluateKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventGetDefault_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::MovieSceneScriptingFloatChannel_eventGetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventGetKeys_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingFloatKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingFloatKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::MovieSceneScriptingFloatChannel_eventGetKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Returns number of keys in this channel.\n\x09*/" },
		{ "DisplayName", "Get Num Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Returns number of keys in this channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetNumKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetPostInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetPreInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventHasDefault_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingFloatChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingFloatChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "HasDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::MovieSceneScriptingFloatChannel_eventHasDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "RemoveDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventRemoveKey_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "RemoveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::MovieSceneScriptingFloatChannel_eventRemoveKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventSetDefault_Parms
		{
			float InDefaultValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetDefault_Parms, InDefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::NewProp_InDefaultValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::MovieSceneScriptingFloatChannel_eventSetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating after this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating after this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetPostInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics
	{
		struct MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(nullptr, 0) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating before this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating before this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetPreInfinityExtrapolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingFloatChannel);
	UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister()
	{
		return UMovieSceneScriptingFloatChannel::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey, "AddKey" }, // 3456445450
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange, "ComputeEffectiveRange" }, // 1299482898
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys, "EvaluateKeys" }, // 2102551724
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault, "GetDefault" }, // 4102923533
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys, "GetKeys" }, // 3167737300
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys, "GetNumKeys" }, // 2107476993
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation, "GetPostInfinityExtrapolation" }, // 1264767876
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation, "GetPreInfinityExtrapolation" }, // 788887496
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault, "HasDefault" }, // 3968416036
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault, "RemoveDefault" }, // 2266365068
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey, "RemoveKey" }, // 809218232
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault, "SetDefault" }, // 1936744311
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation, "SetPostInfinityExtrapolation" }, // 3059871886
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation, "SetPreInfinityExtrapolation" }, // 744810768
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingFloatChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::ClassParams = {
		&UMovieSceneScriptingFloatChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingFloatChannel>()
	{
		return UMovieSceneScriptingFloatChannel::StaticClass();
	}
	UMovieSceneScriptingFloatChannel::UMovieSceneScriptingFloatChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingFloatChannel);
	UMovieSceneScriptingFloatChannel::~UMovieSceneScriptingFloatChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingFloatKey, UMovieSceneScriptingFloatKey::StaticClass, TEXT("UMovieSceneScriptingFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingFloatKey), 2091780883U) },
		{ Z_Construct_UClass_UMovieSceneScriptingActualFloatKey, UMovieSceneScriptingActualFloatKey::StaticClass, TEXT("UMovieSceneScriptingActualFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingActualFloatKey), 3600501457U) },
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey, UMovieSceneScriptingDoubleAsFloatKey::StaticClass, TEXT("UMovieSceneScriptingDoubleAsFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleAsFloatKey), 2983458152U) },
		{ Z_Construct_UClass_UMovieSceneScriptingFloatChannel, UMovieSceneScriptingFloatChannel::StaticClass, TEXT("UMovieSceneScriptingFloatChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingFloatChannel), 2839267507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_1340408150(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
