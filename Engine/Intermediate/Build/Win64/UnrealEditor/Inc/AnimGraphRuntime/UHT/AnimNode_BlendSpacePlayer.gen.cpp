// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpacePlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendSpacePlayerBase>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_BlendSpacePlayerBase cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase;
class UScriptStruct* FAnimNode_BlendSpacePlayerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpacePlayerBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpacePlayerBase>()
{
	return FAnimNode_BlendSpacePlayerBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousBlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Comment\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayerBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewProp_PreviousBlendSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewProp_PreviousBlendSpace = { "PreviousBlendSpace", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayerBase, PreviousBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewProp_PreviousBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewProp_PreviousBlendSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewProp_PreviousBlendSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_BlendSpacePlayerBase",
		sizeof(FAnimNode_BlendSpacePlayerBase),
		alignof(FAnimNode_BlendSpacePlayerBase),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendSpacePlayer>() == std::is_polymorphic<FAnimNode_BlendSpacePlayerBase>(), "USTRUCT FAnimNode_BlendSpacePlayer cannot be polymorphic unless super FAnimNode_BlendSpacePlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer;
class UScriptStruct* FAnimNode_BlendSpacePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpacePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpacePlayer>()
{
	return FAnimNode_BlendSpacePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[];
#endif
		static void NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayTimeWhenBlendSpaceChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Comment\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The X coordinate to sample in the blendspace\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The Y coordinate to sample in the blendspace\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "DefaultValue", "1.0" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "DefaultValue", "true" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether we should reset the current play time when the blend space changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether we should reset the current play time when the blend space changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer*)Obj)->bResetPlayTimeWhenBlendSpaceChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges = { "bResetPlayTimeWhenBlendSpaceChanges", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "DefaultValue", "0.f" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The blendspace asset to play\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The blendspace asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase,
		&NewStructOps,
		"AnimNode_BlendSpacePlayer",
		sizeof(FAnimNode_BlendSpacePlayer),
		alignof(FAnimNode_BlendSpacePlayer),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendSpacePlayer_Standalone>() == std::is_polymorphic<FAnimNode_BlendSpacePlayerBase>(), "USTRUCT FAnimNode_BlendSpacePlayer_Standalone cannot be polymorphic unless super FAnimNode_BlendSpacePlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone;
class UScriptStruct* FAnimNode_BlendSpacePlayer_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpacePlayer_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpacePlayer_Standalone>()
{
	return FAnimNode_BlendSpacePlayer_Standalone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[];
#endif
		static void NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayTimeWhenBlendSpaceChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Comment\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer_Standalone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer_Standalone*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The X coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The Y coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "DefaultValue", "1.0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "DefaultValue", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer_Standalone*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether we should reset the current play time when the blend space changes\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether we should reset the current play time when the blend space changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer_Standalone*)Obj)->bResetPlayTimeWhenBlendSpaceChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges = { "bResetPlayTimeWhenBlendSpaceChanges", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "DefaultValue", "0.f" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The blendspace asset to play\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The blendspace asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer_Standalone, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_BlendSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewProp_BlendSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase,
		&NewStructOps,
		"AnimNode_BlendSpacePlayer_Standalone",
		sizeof(FAnimNode_BlendSpacePlayer_Standalone),
		alignof(FAnimNode_BlendSpacePlayer_Standalone),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpacePlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpacePlayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendSpacePlayerBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase_Statics::NewStructOps, TEXT("AnimNode_BlendSpacePlayerBase"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpacePlayerBase), 2348263159U) },
		{ FAnimNode_BlendSpacePlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewStructOps, TEXT("AnimNode_BlendSpacePlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpacePlayer), 2250056714U) },
		{ FAnimNode_BlendSpacePlayer_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone_Statics::NewStructOps, TEXT("AnimNode_BlendSpacePlayer_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpacePlayer_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpacePlayer_Standalone), 2799139293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpacePlayer_h_275666701(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpacePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpacePlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
