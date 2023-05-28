// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneSkeletalAnimationSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSection() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams;
class UScriptStruct* FMovieSceneSkeletalAnimationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimationParams>()
{
	return FMovieSceneSkeletalAnimationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[];
#endif
		static void NewProp_bSkipAnimNotifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCustomMode_MetaData[];
#endif
		static void NewProp_bForceCustomMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCustomMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwapRootBone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwapRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimSequence,/Script/Engine.AnimComposite,/Script/Engine.AnimStreamable" },
		{ "Category", "Animation" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the beginning of the animation clip for the first loop of play. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip for the first loop of play." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The slot name to use for the animation */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The slot name to use for the animation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The weight curve for this animation section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on will skip sending animation notifies */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on will skip sending animation notifies" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bSkipAnimNotifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers = { "bSkipAnimNotifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on animation sequence will always play when active even if the animation is controlled by a Blueprint or Anim Instance Class*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on animation sequence will always play when active even if the animation is controlled by a Blueprint or Anim Instance Class" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit(void* Obj)
	{
		((FMovieSceneSkeletalAnimationParams*)Obj)->bForceCustomMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode = { "bForceCustomMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on the root bone transform will be swapped to the specified root*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on the root bone transform will be swapped to the specified root" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone = { "SwapRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SwapRootBone), Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_MetaData)) }; // 2570974762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneSkeletalAnimationParams",
		sizeof(FMovieSceneSkeletalAnimationParams),
		alignof(FMovieSceneSkeletalAnimationParams),
		Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton;
	}
	void UMovieSceneSkeletalAnimationSection::StaticRegisterNativesUMovieSceneSkeletalAnimationSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationSection);
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister()
	{
		return UMovieSceneSkeletalAnimationSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchWithPrevious_MetaData[];
#endif
		static void NewProp_bMatchWithPrevious_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchWithPrevious;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchedBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchedBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchedLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchedRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchTranslation_MetaData[];
#endif
		static void NewProp_bMatchTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchIncludeZHeight_MetaData[];
#endif
		static void NewProp_bMatchIncludeZHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchIncludeZHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationYaw_MetaData[];
#endif
		static void NewProp_bMatchRotationYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationPitch_MetaData[];
#endif
		static void NewProp_bMatchRotationPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationRoll_MetaData[];
#endif
		static void NewProp_bMatchRotationRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationRoll;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSkeleton_MetaData[];
#endif
		static void NewProp_bShowSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSkeleton;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control skeletal animation\n */" },
		{ "IncludePath", "Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Movie scene section that control skeletal animation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Params), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params_MetaData)) }; // 2302877155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, AnimSequence_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Animation_DEPRECATED), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, PlayRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bReverse_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, SlotName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset applied before the matched offset*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset applied before the matched offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset = { "StartLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset applied after the matched offset*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset applied after the matched offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset = { "StartRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchWithPrevious = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious = { "bMatchWithPrevious", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName = { "MatchedBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedBoneName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset determined by matching*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset determined by matching" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset = { "MatchedLocationOffset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Rotation offset determined by matching*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Rotation offset determined by matching" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset = { "MatchedRotationOffset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation = { "bMatchTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchIncludeZHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight = { "bMatchIncludeZHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw = { "bMatchRotationYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch = { "bMatchRotationPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll = { "bMatchRotationRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to show the underlying skeleton for this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Whether to show the underlying skeleton for this section." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationSection*)Obj)->bShowSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton = { "bShowSkeleton", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSkeletalAnimationSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationSection>()
	{
		return UMovieSceneSkeletalAnimationSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSection);
	UMovieSceneSkeletalAnimationSection::~UMovieSceneSkeletalAnimationSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSkeletalAnimationParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimationParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimationParams), 2302877155U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationSection, UMovieSceneSkeletalAnimationSection::StaticClass, TEXT("UMovieSceneSkeletalAnimationSection"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationSection), 1993619732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_2175529470(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
