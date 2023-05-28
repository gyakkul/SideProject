// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/AnimNode_MotionMatching.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/MotionTrajectoryTypes.h"
#include "GameplayTagContainer.h"
#include "PoseSearch/PoseSearchLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatching() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionMatching();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingSettings();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MotionMatching>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_MotionMatching cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching;
class UScriptStruct* FAnimNode_MotionMatching::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_MotionMatching"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_MotionMatching>()
{
	return FAnimNode_MotionMatching::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Searchable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Searchable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTagsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnBecomingRelevant_MetaData[];
#endif
		static void NewProp_bResetOnBecomingRelevant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnBecomingRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceInterrupt_MetaData[];
#endif
		static void NewProp_bForceInterrupt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInterrupt;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[];
#endif
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawQuery_MetaData[];
#endif
		static void NewProp_bDebugDrawQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawMatch_MetaData[];
#endif
		static void NewProp_bDebugDrawMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MotionMatching>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotionMatching, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Searchable_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Collection of animations for motion matching\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "NativeConstTemplateArg", "" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Collection of animations for motion matching" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Searchable = { "Searchable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotionMatching, Searchable), Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Searchable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Searchable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_ActiveTagsContainer_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_ActiveTagsContainer = { "ActiveTagsContainer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotionMatching, ActiveTagsContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_ActiveTagsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_ActiveTagsContainer_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Motion trajectory samples for pose search queries\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Motion trajectory samples for pose search queries" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotionMatching, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData)) }; // 4181307663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Settings for the core motion matching algorithm evaluation\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for the core motion matching algorithm evaluation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MotionMatching, Settings), Z_Construct_UScriptStruct_FMotionMatchingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Settings_MetaData)) }; // 961974048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Reset the motion matching state if we have become relevant to the graph\n// after not being ticked on the previous frame(s)\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Reset the motion matching state if we have become relevant to the graph\nafter not being ticked on the previous frame(s)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bResetOnBecomingRelevant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant = { "bResetOnBecomingRelevant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if true the continuing pose will be invalidated\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "if true the continuing pose will be invalidated" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bForceInterrupt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt = { "bForceInterrupt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bDebugDrawQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery = { "bDebugDrawQuery", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bDebugDrawMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch = { "bDebugDrawMatch", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Searchable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_ActiveTagsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bForceInterrupt,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bDebugDrawMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_MotionMatching",
		sizeof(FAnimNode_MotionMatching),
		alignof(FAnimNode_MotionMatching),
		Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionMatching()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MotionMatching::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewStructOps, TEXT("AnimNode_MotionMatching"), &Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MotionMatching), 4149768074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_2549954777(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
