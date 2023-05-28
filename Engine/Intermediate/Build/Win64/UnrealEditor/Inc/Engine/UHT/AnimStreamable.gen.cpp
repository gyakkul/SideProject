// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimStreamable.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStreamable() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStreamable();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStreamable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimStreamable::StaticRegisterNativesUAnimStreamable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStreamable);
	UClass* Z_Construct_UClass_UAnimStreamable_NoRegister()
	{
		return UAnimStreamable::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStreamable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfKeys;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingFrameRate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawDataGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawAnimationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawAnimationData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackToSkeletonMapTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackToSkeletonMapTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackToSkeletonMapTable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationTrackNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationTrackNames;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneCompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneCompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveCompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveCompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[];
#endif
		static void NewProp_bEnableRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRootLock_MetaData[];
#endif
		static void NewProp_bForceRootLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRootLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNormalizedRootMotionScale_MetaData[];
#endif
		static void NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNormalizedRootMotionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStreamable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/AnimStreamable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumberOfKeys_MetaData[] = {
		{ "Comment", "/** The number of keys expected within the individual animation tracks. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "The number of keys expected within the individual animation tracks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumberOfKeys = { "NumberOfKeys", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, NumberOfKeys), METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumberOfKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumberOfKeys_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This defines how values between keys are calculated **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "This defines how values between keys are calculated *" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_MetaData)) }; // 3232896418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SamplingFrameRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SamplingFrameRate = { "SamplingFrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, SamplingFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SamplingFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SamplingFrameRate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "Comment", "// Sequence the streamable was created from (used for reflecting changes to the source in editor)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Sequence the streamable was created from (used for reflecting changes to the source in editor)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, SourceSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid = { "RawDataGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, RawDataGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, NumFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_Inner = { "RawAnimationData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(nullptr, 0) }; // 3121965685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Raw uncompressed keyframe data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Raw uncompressed keyframe data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData = { "RawAnimationData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, RawAnimationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_MetaData)) }; // 3121965685
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_Inner = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTrackToSkeletonMap, METADATA_PARAMS(nullptr, 0) }; // 117233569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\n\x09 * TrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\nTrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, TrackToSkeletonMapTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_MetaData)) }; // 117233569
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_Inner = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData[] = {
		{ "Comment", "/**\n\x09 * This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, AnimationTrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The bone compression settings used to compress bones in this sequence. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "The bone compression settings used to compress bones in this sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings = { "BoneCompressionSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, BoneCompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The curve compression settings used to compress curves in this sequence. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "The curve compression settings used to compress curves in this sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings = { "CurveCompressionSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, CurveCompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will allow extracting of root motion **/" },
		{ "DisplayName", "EnableRootMotion" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "If this is on, it will allow extracting of root motion *" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bEnableRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion = { "bEnableRootMotion", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion.**/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion.*" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStreamable, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock_MetaData)) }; // 2118872410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Force Root Bone Lock even if Root Motion is not enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "Force Root Bone Lock even if Root Motion is not enabled" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bForceRootLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock = { "bForceRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) **/" },
		{ "DisplayName", "Use Normalized Root Motion Scale" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStreamable.h" },
		{ "ToolTip", "If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) *" },
	};
#endif
	void Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj)
	{
		((UAnimStreamable*)Obj)->bUseNormalizedRootMotionScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale = { "bUseNormalizedRootMotionScale", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStreamable), &Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStreamable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumberOfKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RetargetSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SamplingFrameRate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_SourceSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawDataGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RawAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_TrackToSkeletonMapTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_AnimationTrackNames,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_BoneCompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_CurveCompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bEnableRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_RootMotionRootLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bForceRootLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStreamable_Statics::NewProp_bUseNormalizedRootMotionScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStreamable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStreamable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStreamable_Statics::ClassParams = {
		&UAnimStreamable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStreamable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStreamable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStreamable()
	{
		if (!Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton, Z_Construct_UClass_UAnimStreamable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStreamable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimStreamable>()
	{
		return UAnimStreamable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStreamable);
	UAnimStreamable::~UAnimStreamable() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStreamable)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStreamable, UAnimStreamable::StaticClass, TEXT("UAnimStreamable"), &Z_Registration_Info_UClass_UAnimStreamable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStreamable), 4028093219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_729405031(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
