// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_PerTrackCompression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_PerTrackCompression() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_PerTrackCompression::StaticRegisterNativesUAnimCompress_PerTrackCompression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_PerTrackCompression);
	UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister()
	{
		return UAnimCompress_PerTrackCompression::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZeroingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZeroingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiffBitwise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiffBitwise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiffBitwise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiffBitwise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiffBitwise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiffBitwise;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedRotationFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedRotationFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedRotationFormats;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedTranslationFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTranslationFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTranslationFormats;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedScaleFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedScaleFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedScaleFormats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResampleAnimation_MetaData[];
#endif
		static void NewProp_bResampleAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResampleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResampledFramerate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResampledFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinKeysForResampling_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinKeysForResampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveError_MetaData[];
#endif
		static void NewProp_bUseAdaptiveError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideForEndEffectors_MetaData[];
#endif
		static void NewProp_bUseOverrideForEndEffectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideForEndEffectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackHeightBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackHeightBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentingDivisor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParentingDivisor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentingDivisorExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParentingDivisorExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveError2_MetaData[];
#endif
		static void NewProp_bUseAdaptiveError2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveError2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationErrorSourceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationErrorSourceRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationErrorSourceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationErrorSourceRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleErrorSourceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleErrorSourceRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxErrorPerTrackRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxErrorPerTrackRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerturbationProbeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerturbationProbeSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress_RemoveLinearKeys,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimCompress Object Object" },
		{ "IncludePath", "Animation/AnimCompress_PerTrackCompression.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxZeroingThreshold_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Maximum threshold to use when replacing a component with zero. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Maximum threshold to use when replacing a component with zero. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxZeroingThreshold = { "MaxZeroingThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxZeroingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxZeroingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxZeroingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxPosDiffBitwise_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxPosDiffBitwise = { "MaxPosDiffBitwise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxPosDiffBitwise), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxPosDiffBitwise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxPosDiffBitwise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxAngleDiffBitwise_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxAngleDiffBitwise = { "MaxAngleDiffBitwise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxAngleDiffBitwise), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxAngleDiffBitwise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxAngleDiffBitwise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxScaleDiffBitwise_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxScaleDiffBitwise = { "MaxScaleDiffBitwise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxScaleDiffBitwise), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxScaleDiffBitwise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxScaleDiffBitwise_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats_Inner = { "AllowedRotationFormats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Which encoding formats is the per-track compressor allowed to try on rotation keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on rotation keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats = { "AllowedRotationFormats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedRotationFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats_MetaData)) }; // 2787951824
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats_Inner = { "AllowedTranslationFormats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Which encoding formats is the per-track compressor allowed to try on translation keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on translation keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats = { "AllowedTranslationFormats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedTranslationFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats_MetaData)) }; // 2787951824
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats_Inner = { "AllowedScaleFormats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats_MetaData[] = {
		{ "Category", "PerTrack" },
		{ "Comment", "/** Which encoding formats is the per-track compressor allowed to try on scale keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on scale keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats = { "AllowedScaleFormats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedScaleFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats_MetaData)) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_MetaData[] = {
		{ "Category", "Resampling" },
		{ "Comment", "/** If true, resample the animation to ResampleFramerate frames per second */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "If true, resample the animation to ResampleFramerate frames per second" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_SetBit(void* Obj)
	{
		((UAnimCompress_PerTrackCompression*)Obj)->bResampleAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation = { "bResampleAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_PerTrackCompression), &Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ResampledFramerate_MetaData[] = {
		{ "Category", "Resampling" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** When bResampleAnimation is true, this defines the desired framerate */" },
		{ "editcondition", "bResampleAnimation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "When bResampleAnimation is true, this defines the desired framerate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ResampledFramerate = { "ResampledFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ResampledFramerate), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ResampledFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ResampledFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MinKeysForResampling_MetaData[] = {
		{ "Category", "Resampling" },
		{ "Comment", "/** Animations with fewer keys than MinKeysForResampling will not be resampled. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Animations with fewer keys than MinKeysForResampling will not be resampled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MinKeysForResampling = { "MinKeysForResampling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MinKeysForResampling), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MinKeysForResampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MinKeysForResampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_MetaData[] = {
		{ "Category", "AdaptiveError" },
		{ "Comment", "/** If true, adjust the error thresholds based on the 'height' within the skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "If true, adjust the error thresholds based on the 'height' within the skeleton" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_SetBit(void* Obj)
	{
		((UAnimCompress_PerTrackCompression*)Obj)->bUseAdaptiveError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError = { "bUseAdaptiveError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_PerTrackCompression), &Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors_MetaData[] = {
		{ "Category", "AdaptiveError" },
		{ "Comment", "/** If true, uses MinEffectorDiff as the threhsold for end effectors */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "If true, uses MinEffectorDiff as the threhsold for end effectors" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors_SetBit(void* Obj)
	{
		((UAnimCompress_PerTrackCompression*)Obj)->bUseOverrideForEndEffectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors = { "bUseOverrideForEndEffectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_PerTrackCompression), &Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TrackHeightBias_MetaData[] = {
		{ "Category", "AdaptiveError" },
		{ "Comment", "/** A bias added to the track height before using it to calculate the adaptive error */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "A bias added to the track height before using it to calculate the adaptive error" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TrackHeightBias = { "TrackHeightBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, TrackHeightBias), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TrackHeightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TrackHeightBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisor_MetaData[] = {
		{ "Category", "AdaptiveError" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Reduces the error tolerance the further up the tree that a key occurs\n\x09 * EffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\n\x09 * Only has an effect bUseAdaptiveError is true\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Reduces the error tolerance the further up the tree that a key occurs\nEffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\nOnly has an effect bUseAdaptiveError is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisor = { "ParentingDivisor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ParentingDivisor), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisorExponent_MetaData[] = {
		{ "Category", "AdaptiveError" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09 * Reduces the error tolerance the further up the tree that a key occurs\n\x09 * EffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\n\x09 * Only has an effect bUseAdaptiveError is true\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "Reduces the error tolerance the further up the tree that a key occurs\nEffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\nOnly has an effect bUseAdaptiveError is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisorExponent = { "ParentingDivisorExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ParentingDivisorExponent), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisorExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisorExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_MetaData[] = {
		{ "Category", "AdaptiveError2" },
		{ "Comment", "/**\n\x09 * If true, the adaptive error system will determine how much error to allow for each track, based on the\n\x09 * error introduced in end effectors due to errors in the track.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "If true, the adaptive error system will determine how much error to allow for each track, based on the\nerror introduced in end effectors due to errors in the track." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_SetBit(void* Obj)
	{
		((UAnimCompress_PerTrackCompression*)Obj)->bUseAdaptiveError2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2 = { "bUseAdaptiveError2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_PerTrackCompression), &Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_RotationErrorSourceRatio_MetaData[] = {
		{ "Category", "AdaptiveError2" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * This ratio determines how much error in end effector rotation can come from a given track's rotation error or translation error.\n\x09 * If 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "This ratio determines how much error in end effector rotation can come from a given track's rotation error or translation error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_RotationErrorSourceRatio = { "RotationErrorSourceRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, RotationErrorSourceRatio), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_RotationErrorSourceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_RotationErrorSourceRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TranslationErrorSourceRatio_MetaData[] = {
		{ "Category", "AdaptiveError2" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * This ratio determines how much error in end effector translation can come from a given track's rotation error or translation error.\n\x09 * If 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "This ratio determines how much error in end effector translation can come from a given track's rotation error or translation error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TranslationErrorSourceRatio = { "TranslationErrorSourceRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, TranslationErrorSourceRatio), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TranslationErrorSourceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TranslationErrorSourceRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ScaleErrorSourceRatio_MetaData[] = {
		{ "Category", "AdaptiveError2" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * This ratio determines how much error in end effector scale can come from a given track's rotation error or scale error.\n\x09 * If 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from scale error.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "This ratio determines how much error in end effector scale can come from a given track's rotation error or scale error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from scale error." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ScaleErrorSourceRatio = { "ScaleErrorSourceRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ScaleErrorSourceRatio), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ScaleErrorSourceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ScaleErrorSourceRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxErrorPerTrackRatio_MetaData[] = {
		{ "Category", "AdaptiveError2" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * A fraction that determines how much of the total error budget can be introduced by any particular track\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "A fraction that determines how much of the total error budget can be introduced by any particular track" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxErrorPerTrackRatio = { "MaxErrorPerTrackRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxErrorPerTrackRatio), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxErrorPerTrackRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxErrorPerTrackRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_PerturbationProbeSize_MetaData[] = {
		{ "Comment", "/**\n\x09 * How big of a perturbation should be made when probing error propagation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
		{ "ToolTip", "How big of a perturbation should be made when probing error propagation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_PerturbationProbeSize = { "PerturbationProbeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, PerturbationProbeSize), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_PerturbationProbeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_PerturbationProbeSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxZeroingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxPosDiffBitwise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxAngleDiffBitwise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxScaleDiffBitwise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedRotationFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedTranslationFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_AllowedScaleFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bResampleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ResampledFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MinKeysForResampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseOverrideForEndEffectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TrackHeightBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ParentingDivisorExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_bUseAdaptiveError2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_RotationErrorSourceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_TranslationErrorSourceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_ScaleErrorSourceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_MaxErrorPerTrackRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::NewProp_PerturbationProbeSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_PerTrackCompression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::ClassParams = {
		&UAnimCompress_PerTrackCompression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton, Z_Construct_UClass_UAnimCompress_PerTrackCompression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_PerTrackCompression>()
	{
		return UAnimCompress_PerTrackCompression::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_PerTrackCompression);
	UAnimCompress_PerTrackCompression::~UAnimCompress_PerTrackCompression() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_PerTrackCompression, UAnimCompress_PerTrackCompression::StaticClass, TEXT("UAnimCompress_PerTrackCompression"), &Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_PerTrackCompression), 2417313936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_38647068(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_PerTrackCompression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
