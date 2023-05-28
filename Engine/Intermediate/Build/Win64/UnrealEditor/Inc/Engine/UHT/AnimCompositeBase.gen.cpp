// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompositeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionExtractionStep;
class UScriptStruct* FRootMotionExtractionStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionExtractionStep, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionExtractionStep"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionExtractionStep>()
{
	return FRootMotionExtractionStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining a RootMotionExtractionStep.\n * When extracting RootMotion we can encounter looping animations (wrap around), or different animations.\n * We break those up into different steps, to help with RootMotion extraction, \n * as we can only extract a contiguous range per AnimSequence.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Struct defining a RootMotionExtractionStep.\nWhen extracting RootMotion we can encounter looping animations (wrap around), or different animations.\nWe break those up into different steps, to help with RootMotion extraction,\nas we can only extract a contiguous range per AnimSequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Comment", "/** AnimSequence ref */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "AnimSequence ref" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Comment", "/** Start position to extract root motion from. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start position to extract root motion from." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData[] = {
		{ "Comment", "/** End position to extract root motion to. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "End position to extract root motion to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, EndPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionExtractionStep",
		sizeof(FRootMotionExtractionStep),
		alignof(FRootMotionExtractionStep),
		Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep()
	{
		if (!Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSegment;
class UScriptStruct* FAnimSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSegment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSegment"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSegment>()
{
	return FAnimSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimReference;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedPlayLength;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopingCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopingCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** this is anim segment that defines what animation and how **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "this is anim segment that defines what animation and how *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Anim Reference to play - only allow AnimSequence or AnimComposite **/" },
		{ "DisplayName", "Animation Reference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Anim Reference to play - only allow AnimSequence or AnimComposite *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference = { "AnimReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, AnimReference), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength = { "CachedPlayLength", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, CachedPlayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Start Pos within this AnimCompositeBase */" },
		{ "DisplayName", "Starting Position" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start Pos within this AnimCompositeBase" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, StartPos), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Time to start playing AnimSequence at. */" },
		{ "DisplayName", "Start Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to start playing AnimSequence at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime = { "AnimStartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, AnimStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Time to end playing the AnimSequence at. */" },
		{ "DisplayName", "End Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to end playing the AnimSequence at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime = { "AnimEndTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, AnimEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Playback speed of this animation. If you'd like to reverse, set -1*/" },
		{ "DisplayName", "Play Rate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Playback speed of this animation. If you'd like to reverse, set -1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, AnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "DisplayName", "Loop Count" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount = { "LoopingCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSegment, LoopingCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSegment",
		sizeof(FAnimSegment),
		alignof(FAnimSegment),
		Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton, Z_Construct_UScriptStruct_FAnimSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimTrack;
class UScriptStruct* FAnimTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimTrack"));
	}
	return Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimTrack>()
{
	return FAnimTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSegments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is list of anim segments for this track \n * For now this is only one TArray, but in the future \n * we should define more transition/blending behaviors\n **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "This is list of anim segments for this track\nFor now this is only one TArray, but in the future\nwe should define more transition/blending behaviors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTrack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner = { "AnimSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(nullptr, 0) }; // 246920623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData[] = {
		{ "Category", "AnimTrack" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments = { "AnimSegments", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimTrack, AnimSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData)) }; // 246920623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimTrack",
		sizeof(FAnimTrack),
		alignof(FAnimTrack),
		Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton, Z_Construct_UScriptStruct_FAnimTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton;
	}
	void UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompositeBase);
	UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister()
	{
		return UAnimCompositeBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompositeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompositeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimCompositeBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompositeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompositeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams = {
		&UAnimCompositeBase::StaticClass,
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
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompositeBase()
	{
		if (!Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton, Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompositeBase>()
	{
		return UAnimCompositeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompositeBase);
	UAnimCompositeBase::~UAnimCompositeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ScriptStructInfo[] = {
		{ FRootMotionExtractionStep::StaticStruct, Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewStructOps, TEXT("RootMotionExtractionStep"), &Z_Registration_Info_UScriptStruct_RootMotionExtractionStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionExtractionStep), 3532304725U) },
		{ FAnimSegment::StaticStruct, Z_Construct_UScriptStruct_FAnimSegment_Statics::NewStructOps, TEXT("AnimSegment"), &Z_Registration_Info_UScriptStruct_AnimSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSegment), 246920623U) },
		{ FAnimTrack::StaticStruct, Z_Construct_UScriptStruct_FAnimTrack_Statics::NewStructOps, TEXT("AnimTrack"), &Z_Registration_Info_UScriptStruct_AnimTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimTrack), 2065631623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompositeBase, UAnimCompositeBase::StaticClass, TEXT("UAnimCompositeBase"), &Z_Registration_Info_UClass_UAnimCompositeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompositeBase), 3629818619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_1128443530(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
