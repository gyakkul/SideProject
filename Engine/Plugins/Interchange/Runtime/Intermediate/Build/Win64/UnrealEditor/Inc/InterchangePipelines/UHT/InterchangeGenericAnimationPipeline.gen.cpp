// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericAnimationPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAnimationPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeAnimationRange;
	static UEnum* EInterchangeAnimationRange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeAnimationRange"));
		}
		return Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeAnimationRange>()
	{
		return EInterchangeAnimationRange_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enumerators[] = {
		{ "EInterchangeAnimationRange::Timeline", (int64)EInterchangeAnimationRange::Timeline },
		{ "EInterchangeAnimationRange::Animated", (int64)EInterchangeAnimationRange::Animated },
		{ "EInterchangeAnimationRange::SetRange", (int64)EInterchangeAnimationRange::SetRange },
		{ "EInterchangeAnimationRange::MAX", (int64)EInterchangeAnimationRange::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enum_MetaDataParams[] = {
		{ "Animated.Comment", "/** This option imports the range of frames that have animation. */" },
		{ "Animated.DisplayName", "Animated Time" },
		{ "Animated.Name", "EInterchangeAnimationRange::Animated" },
		{ "Animated.ToolTip", "This option imports the range of frames that have animation." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Animation length type when importing */" },
		{ "MAX.Name", "EInterchangeAnimationRange::MAX" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SetRange.Comment", "/** This option imports the range of frames specified by \"FrameImportRange\". */" },
		{ "SetRange.DisplayName", "Set Range" },
		{ "SetRange.Name", "EInterchangeAnimationRange::SetRange" },
		{ "SetRange.ToolTip", "This option imports the range of frames specified by \"FrameImportRange\"." },
		{ "Timeline.Comment", "/** This option imports the range of frames based on timeline definition in the source. */" },
		{ "Timeline.DisplayName", "Source Timeline" },
		{ "Timeline.Name", "EInterchangeAnimationRange::Timeline" },
		{ "Timeline.ToolTip", "This option imports the range of frames based on timeline definition in the source." },
		{ "ToolTip", "Animation length type when importing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeAnimationRange",
		"EInterchangeAnimationRange",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton;
	}
	void UInterchangeGenericAnimationPipeline::StaticRegisterNativesUInterchangeGenericAnimationPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericAnimationPipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister()
	{
		return UInterchangeGenericAnimationPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAnimations_MetaData[];
#endif
		static void NewProp_bImportAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportBoneTracks_MetaData[];
#endif
		static void NewProp_bImportBoneTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportBoneTracks;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameImportRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameImportRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse30HzToBakeBoneAnimation_MetaData[];
#endif
		static void NewProp_bUse30HzToBakeBoneAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse30HzToBakeBoneAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomBoneAnimationSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomBoneAnimationSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToClosestFrameBoundary_MetaData[];
#endif
		static void NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToClosestFrameBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportCustomAttribute_MetaData[];
#endif
		static void NewProp_bImportCustomAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCustomAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[];
#endif
		static void NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMaterialDriveParameterOnCustomAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialCurveSuffixes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveCurveRedundantKeys_MetaData[];
#endif
		static void NewProp_bRemoveCurveRedundantKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveCurveRedundantKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotImportCurveWithZero_MetaData[];
#endif
		static void NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotImportCurveWithZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData[];
#endif
		static void NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingNonCurveCustomAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingCustomAttributeCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingCustomAttributeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingMorphTargetCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingMorphTargetCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAnimationName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericAnimationPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Comment", "//Common SkeletalMeshes And Animations Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Common SkeletalMeshes And Animations Properties Settings Pointer" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enable, import all animation assets find in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enable, import all animation assets find in the sources." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bImportAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations = { "bImportAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Import bone transform tracks. If false, this will discard any bone transform tracks.*/" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Import bone transform tracks. If false, this will discard any bone transform tracks." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bImportBoneTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks = { "bImportBoneTracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Which animation range to import. The one defined at Exported, at Animated time or define a range manually */" },
		{ "DisplayName", "Animation Length" },
		{ "EditCondition", "bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Which animation range to import. The one defined at Exported, at Animated time or define a range manually" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange = { "AnimationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, AnimationRange), Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_MetaData)) }; // 312849193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Frame range used when Set Range is used in Animation Length */" },
		{ "EditCondition", "bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Frame range used when Set Range is used in Animation Length" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange = { "FrameImportRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, FrameImportRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "EditCondition", "bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enabled, samples all animation curves to 30 FPS" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bUse30HzToBakeBoneAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation = { "bUse30HzToBakeBoneAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMax", "48000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bImportBoneTracks && !bUse30HzToBakeBoneAnimation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Sample fbx animation data at the specified sample rate, 0 find automaticaly the best sample rate" },
		{ "UIMax", "60" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate = { "CustomBoneAnimationSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, CustomBoneAnimationSampleRate), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, snaps the animation to the closest frame boundary using the import sampling rate */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enabled, snaps the animation to the closest frame boundary using the import sampling rate" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bSnapToClosestFrameBoundary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary = { "bSnapToClosestFrameBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If true, import node attributes as either Animation Curves or Animation Attributes */" },
		{ "DisplayName", "Import Attributes as Curves or Animation Attributes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If true, import node attributes as either Animation Curves or Animation Attributes" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bImportCustomAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute = { "bImportCustomAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Set Material Curve Type for all custom attributes that exists */" },
		{ "DisplayName", "Set Material Curve Type" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Set Material Curve Type for all custom attributes that exists" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bSetMaterialDriveParameterOnCustomAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute = { "bSetMaterialDriveParameterOnCustomAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_Inner = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Set Material Curve Type for the custom attribute with the following suffixes. This doesn't matter if Set Material Curve Type is true  */" },
		{ "DisplayName", "Material Curve Suffixes" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Set Material Curve Type for the custom attribute with the following suffixes. This doesn't matter if Set Material Curve Type is true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, MaterialCurveSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** When importing custom attribute as curve, remove redundant keys */" },
		{ "DisplayName", "Remove Redundant Keys" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "When importing custom attribute as curve, remove redundant keys" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bRemoveCurveRedundantKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys = { "bRemoveCurveRedundantKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** When importing custom attribute or morphtarget as curve, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate */" },
		{ "DisplayName", "Do not import curves with only 0 values" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "When importing custom attribute or morphtarget as curve, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bDoNotImportCurveWithZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero = { "bDoNotImportCurveWithZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If true, all previous node attributes imported as Animation Attributes will be deleted when doing a re-import. */" },
		{ "DisplayName", "Delete existing Animation Attributes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If true, all previous node attributes imported as Animation Attributes will be deleted when doing a re-import." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingNonCurveCustomAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes = { "bDeleteExistingNonCurveCustomAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If true, all previous node attributes imported as Animation Curves will be deleted when doing a re-import. */" },
		{ "DisplayName", "Delete existing Animation Curves" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If true, all previous node attributes imported as Animation Curves will be deleted when doing a re-import." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingCustomAttributeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves = { "bDeleteExistingCustomAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If true, all previous morph target curves will be deleted when doing a re-import */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If true, all previous morph target curves will be deleted when doing a re-import" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj)
	{
		((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingMorphTargetCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves = { "bDeleteExistingMorphTargetCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName_MetaData[] = {
		{ "Comment", "/** Name of source animation that was imported, used to reimport correct animation from the translated source */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Name of source animation that was imported, used to reimport correct animation from the translated source" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName = { "SourceAnimationName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, SourceAnimationName), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericAnimationPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::ClassParams = {
		&UInterchangeGenericAnimationPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers),
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericAnimationPipeline>()
	{
		return UInterchangeGenericAnimationPipeline::StaticClass();
	}
	UInterchangeGenericAnimationPipeline::UInterchangeGenericAnimationPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericAnimationPipeline);
	UInterchangeGenericAnimationPipeline::~UInterchangeGenericAnimationPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::EnumInfo[] = {
		{ EInterchangeAnimationRange_StaticEnum, TEXT("EInterchangeAnimationRange"), &Z_Registration_Info_UEnum_EInterchangeAnimationRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 312849193U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericAnimationPipeline, UInterchangeGenericAnimationPipeline::StaticClass, TEXT("UInterchangeGenericAnimationPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericAnimationPipeline), 92124669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_2017450973(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
