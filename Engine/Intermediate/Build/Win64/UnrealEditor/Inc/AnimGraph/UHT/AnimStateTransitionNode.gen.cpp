// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStateTransitionNode.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateTransitionNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateTransitionNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateTransitionNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateTransitionNode::StaticRegisterNativesUAnimStateTransitionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateTransitionNode);
	UClass* Z_Construct_UClass_UAnimStateTransitionNode_NoRegister()
	{
		return UAnimStateTransitionNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateTransitionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTransitionGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomTransitionGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossfadeMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CrossfadeMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomBlendCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData[];
#endif
		static void NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRuleBasedOnSequencePlayerInState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroupNameToRequireValidMarkersRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogicType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInterrupt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionInterrupt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bidirectional_MetaData[];
#endif
		static void NewProp_Bidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bidirectional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedRules_MetaData[];
#endif
		static void NewProp_bSharedRules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedCrossfade_MetaData[];
#endif
		static void NewProp_bSharedCrossfade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedCrossfade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedRulesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SharedRulesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedRulesGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedRulesGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SharedCrossfadeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedCrossfadeGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedCrossfadeIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SharedCrossfadeIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateTransitionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateTransitionNode.h" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "// The transition logic graph for this transition (returning a boolean)\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The transition logic graph for this transition (returning a boolean)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData[] = {
		{ "Comment", "// The animation graph for this transition if it uses custom blending (returning a pose)\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The animation graph for this transition if it uses custom blending (returning a pose)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph = { "CustomTransitionGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, CustomTransitionGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// The priority order of this transition. If multiple transitions out of a state go\n// true at the same time, the one with the smallest priority order will take precedent\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The priority order of this transition. If multiple transitions out of a state go\ntrue at the same time, the one with the smallest priority order will take precedent" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData[] = {
		{ "Category", "Transition" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The duration to cross-fade for\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The duration to cross-fade for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration = { "CrossfadeDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, CrossfadeDuration), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData[] = {
		{ "Comment", "// The type of blending to use in the crossfade\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The type of blending to use in the crossfade" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode = { "CrossfadeMode", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, CrossfadeMode_DEPRECATED), Z_Construct_UEnum_Engine_ETransitionBlendMode, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode_MetaData)) }; // 3464726625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_MetaData)) }; // 3066902676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// The blend profile to use to evaluate this transition per-bone\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The blend profile to use to evaluate this transition per-bone" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// Try setting the rule automatically based on most relevant player node's remaining time and the CrossfadeDuration of the transition, ignoring the internal time\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "Try setting the rule automatically based on most relevant player node's remaining time and the CrossfadeDuration of the transition, ignoring the internal time" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bAutomaticRuleBasedOnSequencePlayerInState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState = { "bAutomaticRuleBasedOnSequencePlayerInState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// If SyncGroupName is specified, Transition will only be taken if the SyncGroup has valid markers (other transition rules still apply in addition to that).\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "If SyncGroupName is specified, Transition will only be taken if the SyncGroup has valid markers (other transition rules still apply in addition to that)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule = { "SyncGroupNameToRequireValidMarkersRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SyncGroupNameToRequireValidMarkersRule), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "// What transition logic to use\n" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "What transition logic to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType = { "LogicType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, LogicType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType_MetaData)) }; // 712308243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart = { "TransitionStart", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionStart), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd = { "TransitionEnd", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionEnd), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt = { "TransitionInterrupt", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, TransitionInterrupt), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** This transition can go both directions */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "This transition can go both directions" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->Bidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional = { "Bidirectional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData[] = {
		{ "Comment", "/** The rules for this transition may be shared with other transition nodes */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The rules for this transition may be shared with other transition nodes" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bSharedRules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules = { "bSharedRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData[] = {
		{ "Comment", "/** The cross-fade settings of this node may be shared */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "The cross-fade settings of this node may be shared" },
	};
#endif
	void Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_SetBit(void* Obj)
	{
		((UAnimStateTransitionNode*)Obj)->bSharedCrossfade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade = { "bSharedCrossfade", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateTransitionNode), &Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData[] = {
		{ "Comment", "/** What we call this transition if we are shared ('Transition X to Y' can't be used since its used in multiple places) */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "What we call this transition if we are shared ('Transition X to Y' can't be used since its used in multiple places)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName = { "SharedRulesName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedRulesName), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData[] = {
		{ "Comment", "/** Shared rules guid useful when copying between different state machines */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "Shared rules guid useful when copying between different state machines" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid = { "SharedRulesGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedRulesGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData[] = {
		{ "Comment", "/** Color we draw in the editor as if we are shared */" },
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
		{ "ToolTip", "Color we draw in the editor as if we are shared" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor = { "SharedColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName = { "SharedCrossfadeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeName), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid = { "SharedCrossfadeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimStateTransitionNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx = { "SharedCrossfadeIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateTransitionNode, SharedCrossfadeIdx), METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BoundGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomTransitionGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_PriorityOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CrossfadeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_CustomBlendCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bAutomaticRuleBasedOnSequencePlayerInState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_LogicType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_TransitionInterrupt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_Bidirectional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_bSharedCrossfade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedRulesGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateTransitionNode_Statics::NewProp_SharedCrossfadeIdx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateTransitionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateTransitionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateTransitionNode_Statics::ClassParams = {
		&UAnimStateTransitionNode::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateTransitionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateTransitionNode()
	{
		if (!Z_Registration_Info_UClass_UAnimStateTransitionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateTransitionNode.OuterSingleton, Z_Construct_UClass_UAnimStateTransitionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateTransitionNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateTransitionNode>()
	{
		return UAnimStateTransitionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateTransitionNode);
	UAnimStateTransitionNode::~UAnimStateTransitionNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateTransitionNode)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateTransitionNode, UAnimStateTransitionNode::StaticClass, TEXT("UAnimStateTransitionNode"), &Z_Registration_Info_UClass_UAnimStateTransitionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateTransitionNode), 3696563777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_285040983(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
