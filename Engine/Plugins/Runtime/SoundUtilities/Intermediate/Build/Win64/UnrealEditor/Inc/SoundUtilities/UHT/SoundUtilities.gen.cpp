// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundUtilities() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary();
	SOUNDUTILITIES_API UClass* Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoundUtilities();
// End Cross Module References
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetQFromBandwidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBandwidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(Z_Param_InBandwidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetBandwidthFromQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(Z_Param_InQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetFrequencyMultiplierFromSemitones)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitchSemitones);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(Z_Param_InPitchSemitones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetLinearFrequencyClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InDomain);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(Z_Param_InValue,Z_Param_Out_InDomain,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetLogFrequencyClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InDomain);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(Z_Param_InValue,Z_Param_Out_InDomain,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execConvertDecibelsToLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDecibels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(Z_Param_InDecibels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execConvertLinearToDecibels)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLinear);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(Z_Param_InLinear,Z_Param_InFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetGainFromMidiVelocity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(Z_Param_InVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetPitchScaleFromMIDIPitch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BaseMidiNote);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetMidiNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(Z_Param_BaseMidiNote,Z_Param_TargetMidiNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetMIDIPitchFromFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetFrequencyFromMIDIPitch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MidiNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(Z_Param_MidiNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundUtilitiesBPFunctionLibrary::execGetBeatTempo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BeatsPerMinute);
		P_GET_PROPERTY(FIntProperty,Z_Param_BeatMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_DivisionsOfWholeNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USoundUtilitiesBPFunctionLibrary::GetBeatTempo(Z_Param_BeatsPerMinute,Z_Param_BeatMultiplier,Z_Param_DivisionsOfWholeNote);
		P_NATIVE_END;
	}
	void USoundUtilitiesBPFunctionLibrary::StaticRegisterNativesUSoundUtilitiesBPFunctionLibrary()
	{
		UClass* Class = USoundUtilitiesBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertDecibelsToLinear", &USoundUtilitiesBPFunctionLibrary::execConvertDecibelsToLinear },
			{ "ConvertLinearToDecibels", &USoundUtilitiesBPFunctionLibrary::execConvertLinearToDecibels },
			{ "GetBandwidthFromQ", &USoundUtilitiesBPFunctionLibrary::execGetBandwidthFromQ },
			{ "GetBeatTempo", &USoundUtilitiesBPFunctionLibrary::execGetBeatTempo },
			{ "GetFrequencyFromMIDIPitch", &USoundUtilitiesBPFunctionLibrary::execGetFrequencyFromMIDIPitch },
			{ "GetFrequencyMultiplierFromSemitones", &USoundUtilitiesBPFunctionLibrary::execGetFrequencyMultiplierFromSemitones },
			{ "GetGainFromMidiVelocity", &USoundUtilitiesBPFunctionLibrary::execGetGainFromMidiVelocity },
			{ "GetLinearFrequencyClamped", &USoundUtilitiesBPFunctionLibrary::execGetLinearFrequencyClamped },
			{ "GetLogFrequencyClamped", &USoundUtilitiesBPFunctionLibrary::execGetLogFrequencyClamped },
			{ "GetMIDIPitchFromFrequency", &USoundUtilitiesBPFunctionLibrary::execGetMIDIPitchFromFrequency },
			{ "GetPitchScaleFromMIDIPitch", &USoundUtilitiesBPFunctionLibrary::execGetPitchScaleFromMIDIPitch },
			{ "GetQFromBandwidth", &USoundUtilitiesBPFunctionLibrary::execGetQFromBandwidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventConvertDecibelsToLinear_Parms
		{
			float InDecibels;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDecibels_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecibels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels = { "InDecibels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventConvertDecibelsToLinear_Parms, InDecibels), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventConvertDecibelsToLinear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Converts decibel to linear scale \n\x09 * @param InDecibels\x09The decibels to convert to a linear gain scalar\n\x09 * @return\x09\x09\x09\x09The resulting linear gain\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Converts decibel to linear scale\n@param InDecibels    The decibels to convert to a linear gain scalar\n@return                              The resulting linear gain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "ConvertDecibelsToLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::SoundUtilitiesBPFunctionLibrary_eventConvertDecibelsToLinear_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventConvertLinearToDecibels_Parms
		{
			float InLinear;
			float InFloor;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLinear_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFloor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear = { "InLinear", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventConvertLinearToDecibels_Parms, InLinear), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor = { "InFloor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventConvertLinearToDecibels_Parms, InFloor), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventConvertLinearToDecibels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Converts linear scale volume to decibels \n\x09 * @param InLinear\x09\x09\x09\x09\x09The linear scalar value to convert to decibels\n\x09 * @param InFloor\x09\x09\x09\x09\x09The floor value to check against\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The decibel value of the inputted linear scale\n\x09*/" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Converts linear scale volume to decibels\n@param InLinear                                      The linear scalar value to convert to decibels\n@param InFloor                                       The floor value to check against\n@return                                                      The decibel value of the inputted linear scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "ConvertLinearToDecibels", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::SoundUtilitiesBPFunctionLibrary_eventConvertLinearToDecibels_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetBandwidthFromQ_Parms
		{
			float InQ;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InQ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_InQ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_InQ = { "InQ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBandwidthFromQ_Parms, InQ), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_InQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_InQ_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBandwidthFromQ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_InQ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Helper function to get bandwidth from Q \n\x09 * @param InQ\x09The Q value to convert to bandwidth\n\x09 * @return\x09\x09The bandwidth value that corresponds to the given Q value\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Helper function to get bandwidth from Q\n@param InQ   The Q value to convert to bandwidth\n@return              The bandwidth value that corresponds to the given Q value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetBandwidthFromQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::SoundUtilitiesBPFunctionLibrary_eventGetBandwidthFromQ_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms
		{
			float BeatsPerMinute;
			int32 BeatMultiplier;
			int32 DivisionsOfWholeNote;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatsPerMinute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeatMultiplier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DivisionsOfWholeNote;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_BeatsPerMinute = { "BeatsPerMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms, BeatsPerMinute), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_BeatMultiplier = { "BeatMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms, BeatMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_DivisionsOfWholeNote = { "DivisionsOfWholeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms, DivisionsOfWholeNote), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_BeatsPerMinute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_BeatMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_DivisionsOfWholeNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** Calculates a beat time in seconds from the given BPM, beat multiplier and divisions of a whole note. */" },
		{ "CPP_Default_BeatMultiplier", "1" },
		{ "CPP_Default_BeatsPerMinute", "120.000000" },
		{ "CPP_Default_DivisionsOfWholeNote", "4" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Calculates a beat time in seconds from the given BPM, beat multiplier and divisions of a whole note." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetBeatTempo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::SoundUtilitiesBPFunctionLibrary_eventGetBeatTempo_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetFrequencyFromMIDIPitch_Parms
		{
			int32 MidiNote;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiNote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MidiNote;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_MidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_MidiNote = { "MidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetFrequencyFromMIDIPitch_Parms, MidiNote), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_MidiNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_MidiNote_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetFrequencyFromMIDIPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_MidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Calculates Frequency values based on MIDI Pitch input\n\x09 * @param MidiNote\x09The MIDI note to calculate the frequency of\n\x09 * @return\x09\x09\x09The frequency in Hz that corresponds to the MIDI input\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Calculates Frequency values based on MIDI Pitch input\n@param MidiNote      The MIDI note to calculate the frequency of\n@return                      The frequency in Hz that corresponds to the MIDI input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetFrequencyFromMIDIPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::SoundUtilitiesBPFunctionLibrary_eventGetFrequencyFromMIDIPitch_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetFrequencyMultiplierFromSemitones_Parms
		{
			float InPitchSemitones;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPitchSemitones_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPitchSemitones;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_InPitchSemitones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_InPitchSemitones = { "InPitchSemitones", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetFrequencyMultiplierFromSemitones_Parms, InPitchSemitones), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_InPitchSemitones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_InPitchSemitones_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetFrequencyMultiplierFromSemitones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_InPitchSemitones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/**  \n\x09* Returns the frequency multiplier to scale a base frequency given the input semitones \n\x09* @param InPitchSemitones\x09The amount of semitones to alter a frequency by\n\x09* @return\x09\x09\x09\x09\x09The frequency multiplier that corresponds to the given change in semitones\n\x09*/" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Returns the frequency multiplier to scale a base frequency given the input semitones\n@param InPitchSemitones       The amount of semitones to alter a frequency by\n@return                                       The frequency multiplier that corresponds to the given change in semitones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetFrequencyMultiplierFromSemitones", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::SoundUtilitiesBPFunctionLibrary_eventGetFrequencyMultiplierFromSemitones_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetGainFromMidiVelocity_Parms
		{
			int32 InVelocity;
			float ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetGainFromMidiVelocity_Parms, InVelocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetGainFromMidiVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::NewProp_InVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Given a velocity value [0,127], return the linear gain \n\x09 * @param InVelocity\x09The MIDI velocity value to calculate the gain of\n\x09 * @return\x09\x09\x09\x09The gain corresponding to the MIDI value\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Given a velocity value [0,127], return the linear gain\n@param InVelocity    The MIDI velocity value to calculate the gain of\n@return                              The gain corresponding to the MIDI value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetGainFromMidiVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::SoundUtilitiesBPFunctionLibrary_eventGetGainFromMidiVelocity_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms
		{
			float InValue;
			FVector2D InDomain;
			FVector2D InRange;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain = { "InDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms, InDomain), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/**\n\x09 * Returns the linear frequency of the input value. Maps log domain and range values to linear output (good for linear \n\x09 * slider representation/visualization of log frequency). Reverse of GetLogFrequencyClamped. \n\x09 * @param InValue\x09\x09\x09\x09\x09The logarithmic value to convert to linear frequency\n\x09 * @param InDomain\x09\x09\x09\x09\x09The domain to use when converting between linear and logarithmic scales\n\x09 * @param InRange\x09\x09\x09\x09\x09The range to use when converting between linear and logarithmic scales\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The linear frequency of the given logarithmic input\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Returns the linear frequency of the input value. Maps log domain and range values to linear output (good for linear\nslider representation/visualization of log frequency). Reverse of GetLogFrequencyClamped.\n@param InValue                                       The logarithmic value to convert to linear frequency\n@param InDomain                                      The domain to use when converting between linear and logarithmic scales\n@param InRange                                       The range to use when converting between linear and logarithmic scales\n@return                                                      The linear frequency of the given logarithmic input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetLinearFrequencyClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::SoundUtilitiesBPFunctionLibrary_eventGetLinearFrequencyClamped_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms
		{
			float InValue;
			FVector2D InDomain;
			FVector2D InRange;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain = { "InDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms, InDomain), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency) \n\x09 * @param InValue\x09\x09\x09\x09\x09The linear value to convert to logarithmic frequency\n\x09 * @param InDomain\x09\x09\x09\x09\x09The domain to use when converting between linear and logarithmic scales\n\x09 * @param InRange\x09\x09\x09\x09\x09The range to use when converting between linear and logarithmic scales\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The log frequency of the given input\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)\n@param InValue                                       The linear value to convert to logarithmic frequency\n@param InDomain                                      The domain to use when converting between linear and logarithmic scales\n@param InRange                                       The range to use when converting between linear and logarithmic scales\n@return                                                      The log frequency of the given input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetLogFrequencyClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::SoundUtilitiesBPFunctionLibrary_eventGetLogFrequencyClamped_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetMIDIPitchFromFrequency_Parms
		{
			float Frequency;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_Frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetMIDIPitchFromFrequency_Parms, Frequency), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetMIDIPitchFromFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Calculates MIDI Pitch values based on frequency input\n\x09 * @param Frequency\x09\x09The frequency in Hz to convert into MIDI\n\x09 * @return\x09\x09\x09\x09The MIDI note closest to the inputted frequency\n\x09 */" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Calculates MIDI Pitch values based on frequency input\n@param Frequency             The frequency in Hz to convert into MIDI\n@return                              The MIDI note closest to the inputted frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetMIDIPitchFromFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::SoundUtilitiesBPFunctionLibrary_eventGetMIDIPitchFromFrequency_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetPitchScaleFromMIDIPitch_Parms
		{
			int32 BaseMidiNote;
			int32 TargetMidiNote;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMidiNote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseMidiNote;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMidiNote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMidiNote;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_BaseMidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_BaseMidiNote = { "BaseMidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetPitchScaleFromMIDIPitch_Parms, BaseMidiNote), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_BaseMidiNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_BaseMidiNote_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_TargetMidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_TargetMidiNote = { "TargetMidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetPitchScaleFromMIDIPitch_Parms, TargetMidiNote), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_TargetMidiNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_TargetMidiNote_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetPitchScaleFromMIDIPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_BaseMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_TargetMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/** \n\x09 * Calculates Pitch Scalar based on starting frequency and desired MIDI Pitch output \n\x09 * @param BaseMidiNote\x09\x09The MIDI note corresponding to the starting frequency\n\x09 * @param TargetMidiNote\x09The MIDI note corresponding to the desired final frequency\n\x09 * @return\x09\x09\x09\x09\x09The amount to scale the pitch of the base note by, in order\n\x09 *\x09\x09\x09\x09\x09\x09\x09""for its pitch to match the target MIDI note\n\x09*/" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Calculates Pitch Scalar based on starting frequency and desired MIDI Pitch output\n@param BaseMidiNote          The MIDI note corresponding to the starting frequency\n@param TargetMidiNote        The MIDI note corresponding to the desired final frequency\n@return                                      The amount to scale the pitch of the base note by, in order\n                                                     for its pitch to match the target MIDI note" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetPitchScaleFromMIDIPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::SoundUtilitiesBPFunctionLibrary_eventGetPitchScaleFromMIDIPitch_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics
	{
		struct SoundUtilitiesBPFunctionLibrary_eventGetQFromBandwidth_Parms
		{
			float InBandwidth;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBandwidth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_InBandwidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_InBandwidth = { "InBandwidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetQFromBandwidth_Parms, InBandwidth), METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_InBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_InBandwidth_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundUtilitiesBPFunctionLibrary_eventGetQFromBandwidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_InBandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "SoundUtilitiesBPLibrary" },
		{ "Comment", "/**\n\x09 * Helper function to get Q from bandwidth\n\x09 * @param InBandwidth\x09The bandwidth value to convert to Q\n\x09 * @return\x09\x09\x09\x09The Q value that corresponds to the given bandwidth value\n\x09 */" },
		{ "DisplayName", "Get Q From Bandwidth" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Helper function to get Q from bandwidth\n@param InBandwidth   The bandwidth value to convert to Q\n@return                              The Q value that corresponds to the given bandwidth value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, nullptr, "GetQFromBandwidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::SoundUtilitiesBPFunctionLibrary_eventGetQFromBandwidth_Parms), Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundUtilitiesBPFunctionLibrary);
	UClass* Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_NoRegister()
	{
		return USoundUtilitiesBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear, "ConvertDecibelsToLinear" }, // 1032394957
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels, "ConvertLinearToDecibels" }, // 3625848029
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ, "GetBandwidthFromQ" }, // 1503304858
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetBeatTempo, "GetBeatTempo" }, // 2478246595
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch, "GetFrequencyFromMIDIPitch" }, // 93280164
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones, "GetFrequencyMultiplierFromSemitones" }, // 1661832850
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity, "GetGainFromMidiVelocity" }, // 3735960648
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped, "GetLinearFrequencyClamped" }, // 4159117969
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped, "GetLogFrequencyClamped" }, // 1891397184
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency, "GetMIDIPitchFromFrequency" }, // 616478217
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch, "GetPitchScaleFromMIDIPitch" }, // 662242570
		{ &Z_Construct_UFunction_USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth, "GetQFromBandwidth" }, // 1055261267
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Sound Utilities Blueprint Function Library\n*  A library of Sound related functions for use in Blueprints\n*/" },
		{ "IncludePath", "SoundUtilities.h" },
		{ "ModuleRelativePath", "Public/SoundUtilities.h" },
		{ "ToolTip", "Sound Utilities Blueprint Function Library\nA library of Sound related functions for use in Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundUtilitiesBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::ClassParams = {
		&USoundUtilitiesBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USoundUtilitiesBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundUtilitiesBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundUtilitiesBPFunctionLibrary.OuterSingleton;
	}
	template<> SOUNDUTILITIES_API UClass* StaticClass<USoundUtilitiesBPFunctionLibrary>()
	{
		return USoundUtilitiesBPFunctionLibrary::StaticClass();
	}
	USoundUtilitiesBPFunctionLibrary::USoundUtilitiesBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundUtilitiesBPFunctionLibrary);
	USoundUtilitiesBPFunctionLibrary::~USoundUtilitiesBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary, USoundUtilitiesBPFunctionLibrary::StaticClass, TEXT("USoundUtilitiesBPFunctionLibrary"), &Z_Registration_Info_UClass_USoundUtilitiesBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundUtilitiesBPFunctionLibrary), 2420736326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_1517347404(TEXT("/Script/SoundUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
