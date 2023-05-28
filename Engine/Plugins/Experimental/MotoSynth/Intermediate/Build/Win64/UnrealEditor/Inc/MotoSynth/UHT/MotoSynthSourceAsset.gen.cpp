// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MotoSynthSourceAsset.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotoSynthSourceAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthSource();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthSource_NoRegister();
	MOTOSYNTH_API UScriptStruct* Z_Construct_UScriptStruct_FGrainTableEntry();
	UPackage* Z_Construct_UPackage__Script_MotoSynth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrainTableEntry;
class UScriptStruct* FGrainTableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrainTableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrainTableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrainTableEntry, (UObject*)Z_Construct_UPackage__Script_MotoSynth(), TEXT("GrainTableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GrainTableEntry.OuterSingleton;
}
template<> MOTOSYNTH_API UScriptStruct* StaticStruct<FGrainTableEntry>()
{
	return FGrainTableEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrainTableEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisSampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnalysisSampleIndex;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrainTableEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrainTableEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrainTableEntry, SampleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_RPM_MetaData[] = {
		{ "Comment", "// The RPM of the grain when it starts\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "The RPM of the grain when it starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrainTableEntry, RPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_RPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_RPM_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_AnalysisSampleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_AnalysisSampleIndex = { "AnalysisSampleIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrainTableEntry, AnalysisSampleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_AnalysisSampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_AnalysisSampleIndex_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrainTableEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_RPM,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewProp_AnalysisSampleIndex,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrainTableEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
		nullptr,
		&NewStructOps,
		"GrainTableEntry",
		sizeof(FGrainTableEntry),
		alignof(FGrainTableEntry),
		Z_Construct_UScriptStruct_FGrainTableEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrainTableEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrainTableEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GrainTableEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrainTableEntry.InnerSingleton, Z_Construct_UScriptStruct_FGrainTableEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrainTableEntry.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMotoSynthSource::execStopToneMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopToneMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotoSynthSource::execPlayToneMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayToneMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotoSynthSource::execPerformGrainTableAnalysis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformGrainTableAnalysis();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMotoSynthSource::StaticRegisterNativesUMotoSynthSource()
	{
#if WITH_EDITOR
		UClass* Class = UMotoSynthSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PerformGrainTableAnalysis", &UMotoSynthSource::execPerformGrainTableAnalysis },
			{ "PlayToneMatch", &UMotoSynthSource::execPlayToneMatch },
			{ "StopToneMatch", &UMotoSynthSource::execStopToneMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Grain Table" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthSource, nullptr, "PerformGrainTableAnalysis", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Grain Table" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthSource, nullptr, "PlayToneMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Grain Table" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthSource, nullptr, "StopToneMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthSource_StopToneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthSource_StopToneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotoSynthSource);
	UClass* Z_Construct_UClass_UMotoSynthSource_NoRegister()
	{
		return UMotoSynthSource::StaticClass();
	}
	struct Z_Construct_UClass_UMotoSynthSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaveSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWaveSource;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertTo8Bit_MetaData[];
#endif
		static void NewProp_bConvertTo8Bit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertTo8Bit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownSampleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownSampleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RPMCurve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMSynthVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPMSynthVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFilteringForAnalysis_MetaData[];
#endif
		static void NewProp_bEnableFilteringForAnalysis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilteringForAnalysis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDynamicsProcessorForAnalysis_MetaData[];
#endif
		static void NewProp_bEnableDynamicsProcessorForAnalysis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDynamicsProcessorForAnalysis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorLookahead_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorLookahead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorInputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorInputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsKneeBandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsKneeBandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorAttackTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorAttackTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorReleaseTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicsProcessorReleaseTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalizationForAnalysis_MetaData[];
#endif
		static void NewProp_bEnableNormalizationForAnalysis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalizationForAnalysis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleShiftOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleShiftOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMCycleCalibrationSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RPMCycleCalibrationSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMFirstCycleSampleEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RPMFirstCycleSampleEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPMEstimationOctaveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RPMEstimationOctaveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAnalysisInputToFile_MetaData[];
#endif
		static void NewProp_bWriteAnalysisInputToFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAnalysisInputToFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisInputFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnalysisInputFilePath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceData;
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SourceDataPCM_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataPCM_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDataPCM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceSampleRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrainTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrainTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrainTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotoSynthSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotoSynthSource_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthSource_PerformGrainTableAnalysis, "PerformGrainTableAnalysis" }, // 4156022196
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthSource_PlayToneMatch, "PlayToneMatch" }, // 3129039312
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthSource_StopToneMatch, "StopToneMatch" }, // 510593532
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n UMotoSynthSource\n UAsset used to represent Imported MotoSynth Sources\n*/" },
		{ "IncludePath", "MotoSynthSourceAsset.h" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "UMotoSynthSource\nUAsset used to represent Imported MotoSynth Sources" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SoundWaveSource_MetaData[] = {
		{ "Category", "Grain Table | Analysis" },
		{ "Comment", "// The source to use for the moto synth source\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "The source to use for the moto synth source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SoundWaveSource = { "SoundWaveSource", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, SoundWaveSource), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SoundWaveSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SoundWaveSource_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit_MetaData[] = {
		{ "Category", "Memory" },
		{ "Comment", "// Whether or not to convert this moto synth source to 8 bit on load to use less memory\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Whether or not to convert this moto synth source to 8 bit on load to use less memory" },
	};
#endif
	void Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit_SetBit(void* Obj)
	{
		((UMotoSynthSource*)Obj)->bConvertTo8Bit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit = { "bConvertTo8Bit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotoSynthSource), &Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DownSampleFactor_MetaData[] = {
		{ "Category", "Memory" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount to scale down the sample rate of the source\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Amount to scale down the sample rate of the source" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DownSampleFactor = { "DownSampleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DownSampleFactor), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DownSampleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DownSampleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCurve_MetaData[] = {
		{ "Category", "Grain Table | Analysis" },
		{ "Comment", "// A curve to define the RPM contour from the min and max estimated RPM \n// Curve values are non-normalized and accurate to time\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "A curve to define the RPM contour from the min and max estimated RPM\nCurve values are non-normalized and accurate to time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCurve = { "RPMCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, RPMCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCurve_MetaData)) }; // 1477693291
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMSynthVolume_MetaData[] = {
		{ "Category", "Grain Table | Analysis" },
		{ "Comment", "// Sets the volume of the RPM curve synth for testing RPM curve to source\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Sets the volume of the RPM curve synth for testing RPM curve to source" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMSynthVolume = { "RPMSynthVolume", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, RPMSynthVolume), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMSynthVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMSynthVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis_MetaData[] = {
		{ "Category", "Grain Table | Filtering" },
		{ "Comment", "// Whether not to enable a low pass filter frequency before analyzing the audio file\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Whether not to enable a low pass filter frequency before analyzing the audio file" },
	};
#endif
	void Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis_SetBit(void* Obj)
	{
		((UMotoSynthSource*)Obj)->bEnableFilteringForAnalysis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis = { "bEnableFilteringForAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotoSynthSource), &Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "Grain Table | Filtering" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Frequency of a low pass filter to apply before running grain table analysis\n" },
		{ "EditCondition", "bEnableFiltering" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Frequency of a low pass filter to apply before running grain table analysis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_HighPassFilterFrequency_MetaData[] = {
		{ "Category", "Grain Table | Filtering" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Whether not to enable a low pass filter frequency before analyzing the audio file\n" },
		{ "EditCondition", "bEnableFiltering" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Whether not to enable a low pass filter frequency before analyzing the audio file" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_HighPassFilterFrequency = { "HighPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, HighPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_HighPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_HighPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "Comment", "// Whether not to enable a dynamics processor to the analysis step\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Whether not to enable a dynamics processor to the analysis step" },
	};
#endif
	void Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis_SetBit(void* Obj)
	{
		((UMotoSynthSource*)Obj)->bEnableDynamicsProcessorForAnalysis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis = { "bEnableDynamicsProcessorForAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotoSynthSource), &Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorLookahead_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorLookahead = { "DynamicsProcessorLookahead", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorLookahead), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorLookahead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorLookahead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorInputGainDb_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-20.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorInputGainDb = { "DynamicsProcessorInputGainDb", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorInputGainDb), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorInputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorInputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorRatio_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorRatio = { "DynamicsProcessorRatio", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorRatio), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsKneeBandwidth_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsKneeBandwidth = { "DynamicsKneeBandwidth", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsKneeBandwidth), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsKneeBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsKneeBandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorThreshold_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorThreshold = { "DynamicsProcessorThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorThreshold), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorAttackTimeMsec_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorAttackTimeMsec = { "DynamicsProcessorAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorAttackTimeMsec), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorAttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorAttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorReleaseTimeMsec_MetaData[] = {
		{ "Category", "Grain Table | Dynamics Processor" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableDynamicsProcessor" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorReleaseTimeMsec = { "DynamicsProcessorReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, DynamicsProcessorReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis_MetaData[] = {
		{ "Category", "Grain Table | Normalization" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	void Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis_SetBit(void* Obj)
	{
		((UMotoSynthSource*)Obj)->bEnableNormalizationForAnalysis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis = { "bEnableNormalizationForAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotoSynthSource), &Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SampleShiftOffset_MetaData[] = {
		{ "Category", "Grain Table | Grain Table Algorithm" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SampleShiftOffset = { "SampleShiftOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, SampleShiftOffset), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SampleShiftOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SampleShiftOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCycleCalibrationSample_MetaData[] = {
		{ "Category", "Grain Table | Grain Table Algorithm" },
		{ "Comment", "// A samples to use to calibrate when an engine cycle begins\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "A samples to use to calibrate when an engine cycle begins" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCycleCalibrationSample = { "RPMCycleCalibrationSample", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, RPMCycleCalibrationSample), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCycleCalibrationSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCycleCalibrationSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMFirstCycleSampleEnd_MetaData[] = {
		{ "Category", "Grain Table | Grain Table Algorithm" },
		{ "Comment", "// The end of the first cycle sample. Cut the source file to start exactly on the cycle start\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "The end of the first cycle sample. Cut the source file to start exactly on the cycle start" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMFirstCycleSampleEnd = { "RPMFirstCycleSampleEnd", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, RPMFirstCycleSampleEnd), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMFirstCycleSampleEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMFirstCycleSampleEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMEstimationOctaveOffset_MetaData[] = {
		{ "Category", "Grain Table | Grain Table Algorithm" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMEstimationOctaveOffset = { "RPMEstimationOctaveOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, RPMEstimationOctaveOffset), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMEstimationOctaveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMEstimationOctaveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile_MetaData[] = {
		{ "Category", "Grain Table | File Writing" },
		{ "Comment", "// Whether not to write the audio used for analysis to a wav file\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Whether not to write the audio used for analysis to a wav file" },
	};
#endif
	void Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile_SetBit(void* Obj)
	{
		((UMotoSynthSource*)Obj)->bWriteAnalysisInputToFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile = { "bWriteAnalysisInputToFile", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotoSynthSource), &Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_AnalysisInputFilePath_MetaData[] = {
		{ "Category", "Grain Table | File Writing" },
		{ "Comment", "// The path to write the audio analysis data (LPF and normalized asset)\n" },
		{ "EditCondition", "bWriteAnalysisInputToFile" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "The path to write the audio analysis data (LPF and normalized asset)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_AnalysisInputFilePath = { "AnalysisInputFilePath", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, AnalysisInputFilePath), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_AnalysisInputFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_AnalysisInputFilePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData_Inner = { "SourceData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "// Data containing PCM audio of the imported source asset (filled out by the factory)\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Data containing PCM audio of the imported source asset (filled out by the factory)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, SourceData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData_MetaData)) };
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM_Inner = { "SourceDataPCM", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM = { "SourceDataPCM", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, SourceDataPCM), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceSampleRate_MetaData[] = {
		{ "Comment", "// Sample rate of the imported sound wave and the serialized data of the granulator\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Sample rate of the imported sound wave and the serialized data of the granulator" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceSampleRate = { "SourceSampleRate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, SourceSampleRate), METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceSampleRate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable_Inner = { "GrainTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrainTableEntry, METADATA_PARAMS(nullptr, 0) }; // 1703563398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable_MetaData[] = {
		{ "Comment", "// Grain table containing information about how to granulate the source data buffer.\n" },
		{ "ModuleRelativePath", "Public/MotoSynthSourceAsset.h" },
		{ "ToolTip", "Grain table containing information about how to granulate the source data buffer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable = { "GrainTable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthSource, GrainTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable_MetaData)) }; // 1703563398
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotoSynthSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SoundWaveSource,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bConvertTo8Bit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DownSampleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMSynthVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableFilteringForAnalysis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_HighPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableDynamicsProcessorForAnalysis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorLookahead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorInputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsKneeBandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorAttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_DynamicsProcessorReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bEnableNormalizationForAnalysis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SampleShiftOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMCycleCalibrationSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMFirstCycleSampleEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_RPMEstimationOctaveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_bWriteAnalysisInputToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_AnalysisInputFilePath,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceDataPCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_SourceSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthSource_Statics::NewProp_GrainTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotoSynthSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotoSynthSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotoSynthSource_Statics::ClassParams = {
		&UMotoSynthSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMotoSynthSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotoSynthSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotoSynthSource()
	{
		if (!Z_Registration_Info_UClass_UMotoSynthSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotoSynthSource.OuterSingleton, Z_Construct_UClass_UMotoSynthSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotoSynthSource.OuterSingleton;
	}
	template<> MOTOSYNTH_API UClass* StaticClass<UMotoSynthSource>()
	{
		return UMotoSynthSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotoSynthSource);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ScriptStructInfo[] = {
		{ FGrainTableEntry::StaticStruct, Z_Construct_UScriptStruct_FGrainTableEntry_Statics::NewStructOps, TEXT("GrainTableEntry"), &Z_Registration_Info_UScriptStruct_GrainTableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrainTableEntry), 1703563398U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotoSynthSource, UMotoSynthSource::StaticClass, TEXT("UMotoSynthSource"), &Z_Registration_Info_UClass_UMotoSynthSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotoSynthSource), 2872389977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_2371863484(TEXT("/Script/MotoSynth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthSourceAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
