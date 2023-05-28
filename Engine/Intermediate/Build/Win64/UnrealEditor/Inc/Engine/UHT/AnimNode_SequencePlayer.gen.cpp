// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SequencePlayerBase>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_SequencePlayerBase cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase;
class UScriptStruct* FAnimNode_SequencePlayerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayerBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayerBase>()
{
	return FAnimNode_SequencePlayerBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node. Not instantiated directly, use FAnimNode_SequencePlayer or FAnimNode_SequencePlayer_Standalone\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node. Not instantiated directly, use FAnimNode_SequencePlayer or FAnimNode_SequencePlayer_Standalone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayerBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState_MetaData[] = {
		{ "Comment", "// Corresponding state for PlayRateScaleBiasClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Corresponding state for PlayRateScaleBiasClampConstants" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState = { "PlayRateScaleBiasClampState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayerBase, PlayRateScaleBiasClampState), Z_Construct_UScriptStruct_FInputScaleBiasClampState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState_MetaData)) }; // 3156838055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewProp_PlayRateScaleBiasClampState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_SequencePlayerBase",
		sizeof(FAnimNode_SequencePlayerBase),
		alignof(FAnimNode_SequencePlayerBase),
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_SequencePlayer>() == std::is_polymorphic<FAnimNode_SequencePlayerBase>(), "USTRUCT FAnimNode_SequencePlayer cannot be polymorphic unless super FAnimNode_SequencePlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer;
class UScriptStruct* FAnimNode_SequencePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayer>()
{
	return FAnimNode_SequencePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics
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
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateBasis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampConstants_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampConstants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[];
#endif
		static void NewProp_bLoopAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromMatchingPose_MetaData[];
#endif
		static void NewProp_bStartFromMatchingPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromMatchingPose;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node that can be used with constant folding\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node that can be used with constant folding" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to play\n" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\n// For example a Basis of 100 means that the PlayRate input will be divided by 100.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\nFor example a Basis of 100 means that the PlayRate input will be divided by 100." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis = { "PlayRateBasis", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateBasis), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional scaling, offsetting and clamping of PlayRate input.\n// Performed after PlayRateBasis.\n" },
		{ "DisplayName", "PlayRateScaleBiasClamp" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Additional scaling, offsetting and clamping of PlayRate input.\nPerformed after PlayRateBasis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants = { "PlayRateScaleBiasClampConstants", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateScaleBiasClampConstants), Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData)) }; // 1771317247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp = { "PlayRateScaleBiasClamp", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateScaleBiasClamp_DEPRECATED), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData)) }; // 1479025939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer*)Obj)->bLoopAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_MetaData[] = {
		{ "Category", "PoseMatching" },
		{ "Comment", "// Use pose matching to choose the start position. Requires experimental PoseSearch plugin.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Use pose matching to choose the start position. Requires experimental PoseSearch plugin." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer*)Obj)->bStartFromMatchingPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose = { "bStartFromMatchingPose", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClampConstants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bStartFromMatchingPose,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,
		&NewStructOps,
		"AnimNode_SequencePlayer",
		sizeof(FAnimNode_SequencePlayer),
		alignof(FAnimNode_SequencePlayer),
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_SequencePlayer_Standalone>() == std::is_polymorphic<FAnimNode_SequencePlayerBase>(), "USTRUCT FAnimNode_SequencePlayer_Standalone cannot be polymorphic unless super FAnimNode_SequencePlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone;
class UScriptStruct* FAnimNode_SequencePlayer_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayer_Standalone>()
{
	return FAnimNode_SequencePlayer_Standalone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateBasis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClampConstants_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClampConstants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[];
#endif
		static void NewProp_bLoopAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromMatchingPose_MetaData[];
#endif
		static void NewProp_bStartFromMatchingPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromMatchingPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Sequence player node that can be used standalone (without constant folding)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node that can be used standalone (without constant folding)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer_Standalone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer_Standalone*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to play\n" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\n// For example a Basis of 100 means that the PlayRate input will be divided by 100.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\nFor example a Basis of 100 means that the PlayRate input will be divided by 100." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis = { "PlayRateBasis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRateBasis), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional scaling, offsetting and clamping of PlayRate input.\n// Performed after PlayRateBasis.\n" },
		{ "DisplayName", "PlayRateScaleBiasClamp" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Additional scaling, offsetting and clamping of PlayRate input.\nPerformed after PlayRateBasis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants = { "PlayRateScaleBiasClampConstants", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, PlayRateScaleBiasClampConstants), Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants_MetaData)) }; // 1771317247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position between 0 and the length of the sequence to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer_Standalone, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer_Standalone*)Obj)->bLoopAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_MetaData[] = {
		{ "Category", "PoseMatching" },
		{ "Comment", "// Use pose matching to choose the start position. Requires experimental PoseSearch plugin.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Use pose matching to choose the start position. Requires experimental PoseSearch plugin." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer_Standalone*)Obj)->bStartFromMatchingPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose = { "bStartFromMatchingPose", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SequencePlayer_Standalone), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bIgnoreForRelevancyTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_PlayRateScaleBiasClampConstants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bStartFromMatchingPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase,
		&NewStructOps,
		"AnimNode_SequencePlayer_Standalone",
		sizeof(FAnimNode_SequencePlayer_Standalone),
		alignof(FAnimNode_SequencePlayer_Standalone),
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SequencePlayerBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewStructOps, TEXT("AnimNode_SequencePlayerBase"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayerBase), 966689641U) },
		{ FAnimNode_SequencePlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewStructOps, TEXT("AnimNode_SequencePlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayer), 393494414U) },
		{ FAnimNode_SequencePlayer_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewStructOps, TEXT("AnimNode_SequencePlayer_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_SequencePlayer_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequencePlayer_Standalone), 3204782685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_1386758084(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
