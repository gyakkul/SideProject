// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationRecordingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationRecordingSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationRecordingSettings;
class UScriptStruct* FAnimationRecordingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationRecordingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationRecordingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationRecordingSettings>()
{
	return FAnimationRecordingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[];
#endif
		static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootAnimation_MetaData[];
#endif
		static void NewProp_bRemoveRootAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveAsset_MetaData[];
#endif
		static void NewProp_bAutoSaveAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordTransforms_MetaData[];
#endif
		static void NewProp_bRecordTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordMorphTargets_MetaData[];
#endif
		static void NewProp_bRecordMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordAttributeCurves_MetaData[];
#endif
		static void NewProp_bRecordAttributeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordAttributeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordMaterialCurves_MetaData[];
#endif
		static void NewProp_bRecordMaterialCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordMaterialCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransactRecording_MetaData[];
#endif
		static void NewProp_bTransactRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransactRecording;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludeAnimationNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAnimationNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeAnimationNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeAnimationNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeAnimationNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeAnimationNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings describing how to record an animation */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Settings describing how to record an animation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationRecordingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to record animation in world space, defaults to true */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether to record animation in world space, defaults to true" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRecordInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to remove the root bone transform from the animation */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether to remove the root bone transform from the animation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRemoveRootAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation = { "bRemoveRootAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to auto-save asset when recording is completed. Defaults to false */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether to auto-save asset when recording is completed. Defaults to false" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bAutoSaveAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset = { "bAutoSaveAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_SampleFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sample rate of the recorded animation */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Sample rate of the recorded animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_SampleFrameRate = { "SampleFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, SampleFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_SampleFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_SampleFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Maximum length of the animation recorded (in seconds). If zero the animation will keep on recording until stopped. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Maximum length of the animation recorded (in seconds). If zero the animation will keep on recording until stopped." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This defines how values between keys are calculated for transforms.**/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "This defines how values between keys are calculated for transforms.*" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation_MetaData)) }; // 3232896418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_InterpMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interpolation mode for the recorded keys. */" },
		{ "DisplayName", "Interpolation Mode" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Interpolation mode for the recorded keys." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_InterpMode_MetaData)) }; // 931686469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_TangentMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tangent mode for the recorded keys. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Tangent mode for the recorded keys." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_TangentMode_MetaData)) }; // 161970341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to record transforms */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether or not to record transforms" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRecordTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms = { "bRecordTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to record morph targets */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether or not to record morph targets" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRecordMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets = { "bRecordMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to record parameter curves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether or not to record parameter curves" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRecordAttributeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves = { "bRecordAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to record material curves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether or not to record material curves" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bRecordMaterialCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves = { "bRecordMaterialCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to transact recording changes */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Whether or not to transact recording changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_SetBit(void* Obj)
	{
		((FAnimationRecordingSettings*)Obj)->bTransactRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording = { "bTransactRecording", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationRecordingSettings), &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames_Inner = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Include only the animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Include only the animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, IncludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames_Inner = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Exclude all animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
		{ "ToolTip", "Exclude all animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, ExcludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_SampleFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_InterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_TangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_IncludeAnimationNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_ExcludeAnimationNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationRecordingSettings",
		sizeof(FAnimationRecordingSettings),
		alignof(FAnimationRecordingSettings),
		Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationRecordingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h_Statics::ScriptStructInfo[] = {
		{ FAnimationRecordingSettings::StaticStruct, Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewStructOps, TEXT("AnimationRecordingSettings"), &Z_Registration_Info_UScriptStruct_AnimationRecordingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationRecordingSettings), 776846529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h_1868027580(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
