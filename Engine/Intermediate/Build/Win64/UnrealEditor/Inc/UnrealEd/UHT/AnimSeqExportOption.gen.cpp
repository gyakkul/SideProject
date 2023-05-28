// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/AnimSeqExportOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSeqExportOption() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSeqExportOption();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSeqExportOption_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimSeqExportOption::StaticRegisterNativesUAnimSeqExportOption()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSeqExportOption);
	UClass* Z_Construct_UClass_UAnimSeqExportOption_NoRegister()
	{
		return UAnimSeqExportOption::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSeqExportOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportTransforms_MetaData[];
#endif
		static void NewProp_bExportTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMorphTargets_MetaData[];
#endif
		static void NewProp_bExportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportAttributeCurves_MetaData[];
#endif
		static void NewProp_bExportAttributeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAttributeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialCurves_MetaData[];
#endif
		static void NewProp_bExportMaterialCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[];
#endif
		static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateAllSkeletalMeshComponents_MetaData[];
#endif
		static void NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateAllSkeletalMeshComponents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveInterpolation;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarmUpFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelayBeforeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransactRecording_MetaData[];
#endif
		static void NewProp_bTransactRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransactRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSeqExportOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/AnimSeqExportOption.h" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled, export the transforms from the animation */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If enabled, export the transforms from the animation" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bExportTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms = { "bExportTransforms", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled, export the morph targets from the animation */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If enabled, export the morph targets from the animation" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bExportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets = { "bExportMorphTargets", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled, export the attribute curves from the animation */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If enabled, export the attribute curves from the animation" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bExportAttributeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves = { "bExportAttributeCurves", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled, export the material curves from the animation */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If enabled, export the material curves from the animation" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bExportMaterialCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves = { "bExportMaterialCurves", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled we record in World Space otherwise we record from 0,0,0 */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If enabled we record in World Space otherwise we record from 0,0,0" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bRecordInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If true we evaluate all other skeletal mesh components under the same actor, this may be needed for example, to get physics to get baked*/" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "If true we evaluate all other skeletal mesh components under the same actor, this may be needed for example, to get physics to get baked" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bEvaluateAllSkeletalMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents = { "bEvaluateAllSkeletalMeshComponents", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** This defines how values between keys are calculated for transforms*/" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "This defines how values between keys are calculated for transforms" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation_MetaData)) }; // 3232896418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_CurveInterpolation_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** This defines how values between keys are calculated for curves*/" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "This defines how values between keys are calculated for curves" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_CurveInterpolation = { "CurveInterpolation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, CurveInterpolation), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_CurveInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_CurveInterpolation_MetaData)) }; // 931686469
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames_Inner = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Include only the animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "Include only the animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, IncludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames_Inner = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Exclude all animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "Exclude all animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, ExcludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_WarmUpFrames_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Number of Display Rate frames to evaluate before doing the export. It will evaluate after any Delay. This will use frames before the start frame. Use it if there is some post anim BP effects you want to run before export start time.*/" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "Number of Display Rate frames to evaluate before doing the export. It will evaluate after any Delay. This will use frames before the start frame. Use it if there is some post anim BP effects you want to run before export start time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_WarmUpFrames = { "WarmUpFrames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, WarmUpFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_WarmUpFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_WarmUpFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_DelayBeforeStart_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Number of Display Rate frames to delay at the same frame before doing the export. It will evalaute first, then any warm up, then the export. Use it if there is some post anim BP effects you want to ran repeatedly at the start.*/" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "Number of Display Rate frames to delay at the same frame before doing the export. It will evalaute first, then any warm up, then the export. Use it if there is some post anim BP effects you want to ran repeatedly at the start." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_DelayBeforeStart = { "DelayBeforeStart", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSeqExportOption, DelayBeforeStart), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_DelayBeforeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_DelayBeforeStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Whether or not to transact the animation sequence data recording */" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSeqExportOption.h" },
		{ "ToolTip", "Whether or not to transact the animation sequence data recording" },
	};
#endif
	void Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording_SetBit(void* Obj)
	{
		((UAnimSeqExportOption*)Obj)->bTransactRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording = { "bTransactRecording", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSeqExportOption), &Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSeqExportOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportAttributeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bExportMaterialCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bRecordInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bEvaluateAllSkeletalMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_CurveInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_IncludeAnimationNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_ExcludeAnimationNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_WarmUpFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_DelayBeforeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSeqExportOption_Statics::NewProp_bTransactRecording,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSeqExportOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSeqExportOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSeqExportOption_Statics::ClassParams = {
		&UAnimSeqExportOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSeqExportOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSeqExportOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSeqExportOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSeqExportOption()
	{
		if (!Z_Registration_Info_UClass_UAnimSeqExportOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSeqExportOption.OuterSingleton, Z_Construct_UClass_UAnimSeqExportOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSeqExportOption.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimSeqExportOption>()
	{
		return UAnimSeqExportOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSeqExportOption);
	UAnimSeqExportOption::~UAnimSeqExportOption() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSeqExportOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSeqExportOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSeqExportOption, UAnimSeqExportOption::StaticClass, TEXT("UAnimSeqExportOption"), &Z_Registration_Info_UClass_UAnimSeqExportOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSeqExportOption), 2152951626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSeqExportOption_h_1898695045(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSeqExportOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSeqExportOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
