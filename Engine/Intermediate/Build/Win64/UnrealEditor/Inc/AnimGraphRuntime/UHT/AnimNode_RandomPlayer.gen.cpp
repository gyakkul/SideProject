// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_RandomPlayer.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RandomPlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry;
class UScriptStruct* FRandomPlayerSequenceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RandomPlayerSequenceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRandomPlayerSequenceEntry>()
{
	return FRandomPlayerSequenceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The random player node holds a list of sequences and parameter ranges which will be played continuously\n  * In a random order. If shuffle mode is enabled then each entry will be played once before repeating any\n  */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "The random player node holds a list of sequences and parameter ranges which will be played continuously\nIn a random order. If shuffle mode is enabled then each entry will be played once before repeating any" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sequence to play when this entry is picked */" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Sequence to play when this entry is picked" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay = { "ChanceToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, ChanceToPlay), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum number of times this entry will loop before ending */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount = { "MinLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of times this entry will loop before ending */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount = { "MaxLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum playrate for this entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum playrate for this entry" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum playrate for this entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum playrate for this entry" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending properties used when this entry is blending in ontop of another entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Blending properties used when this entry is blending in ontop of another entry" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData)) }; // 3900153020
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RandomPlayerSequenceEntry",
		sizeof(FRandomPlayerSequenceEntry),
		alignof(FRandomPlayerSequenceEntry),
		Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_RandomPlayer>() == std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>(), "USTRUCT FAnimNode_RandomPlayer cannot be polymorphic unless super FAnimNode_AssetPlayerRelevancyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer;
class UScriptStruct* FAnimNode_RandomPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RandomPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RandomPlayer>()
{
	return FAnimNode_RandomPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[];
#endif
		static void NewProp_bShuffleMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, METADATA_PARAMS(nullptr, 0) }; // 4287705110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** List of sequences to randomly step through */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "List of sequences to randomly step through" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RandomPlayer, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData)) }; // 4287705110
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_RandomPlayer*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Last encountered blend weight for this node */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Last encountered blend weight for this node" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RandomPlayer, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\n\x09  * without visiting each sequence in turn (no repeats). Enabling this will ignore\n\x09  * ChanceToPlay for each entry\n\x09  */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\nwithout visiting each sequence in turn (no repeats). Enabling this will ignore\nChanceToPlay for each entry" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit(void* Obj)
	{
		((FAnimNode_RandomPlayer*)Obj)->bShuffleMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode = { "bShuffleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
		&NewStructOps,
		"AnimNode_RandomPlayer",
		sizeof(FAnimNode_RandomPlayer),
		alignof(FAnimNode_RandomPlayer),
		Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics::ScriptStructInfo[] = {
		{ FRandomPlayerSequenceEntry::StaticStruct, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewStructOps, TEXT("RandomPlayerSequenceEntry"), &Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomPlayerSequenceEntry), 4287705110U) },
		{ FAnimNode_RandomPlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewStructOps, TEXT("AnimNode_RandomPlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RandomPlayer), 732755884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_115499131(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
