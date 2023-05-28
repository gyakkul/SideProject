// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry;
class UScriptStruct* FAnimationActiveTransitionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationActiveTransitionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationActiveTransitionEntry>()
{
	return FAnimationActiveTransitionEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about an active transition on the transition stack\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Information about an active transition on the transition stack" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Comment", "// Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationActiveTransitionEntry, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewProp_BlendProfile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationActiveTransitionEntry",
		sizeof(FAnimationActiveTransitionEntry),
		alignof(FAnimationActiveTransitionEntry),
		Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationPotentialTransition;
class UScriptStruct* FAnimationPotentialTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationPotentialTransition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationPotentialTransition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationPotentialTransition>()
{
	return FAnimationPotentialTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationPotentialTransition",
		sizeof(FAnimationPotentialTransition),
		alignof(FAnimationPotentialTransition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton, Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationPotentialTransition.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_StateMachine>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_StateMachine cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_StateMachine;
class UScriptStruct* FAnimNode_StateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_StateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_StateMachine>()
{
	return FAnimNode_StateMachine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndexInClass_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateMachineIndexInClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsRequests_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsRequests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipFirstUpdateTransition_MetaData[];
#endif
		static void NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstUpdateTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializeOnBecomingRelevant_MetaData[];
#endif
		static void NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeOnBecomingRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNotifyMetaData_MetaData[];
#endif
		static void NewProp_bCreateNotifyMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNotifyMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowConduitEntryStates_MetaData[];
#endif
		static void NewProp_bAllowConduitEntryStates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowConduitEntryStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// State machine node\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "State machine node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData[] = {
		{ "Comment", "// Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass = { "StateMachineIndexInClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, StateMachineIndexInClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame = { "MaxTransitionsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum number of transition requests that can be buffered at any time.\n// The oldest transition requests are dropped to accommodate for newly created requests.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "The maximum number of transition requests that can be buffered at any time.\nThe oldest transition requests are dropped to accommodate for newly created requests." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests = { "MaxTransitionsRequests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When the state machine becomes relevant, it is initialized into the Entry state.\n// It then tries to take any valid transitions to possibly end up in a different state on that same frame.\n// - if true, that new state starts full weight.\n// - if false, a blend is created between the entry state and that new state.\n// In either case all visited State notifications (Begin/End) will be triggered.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "When the state machine becomes relevant, it is initialized into the Entry state.\nIt then tries to take any valid transitions to possibly end up in a different state on that same frame.\n- if true, that new state starts full weight.\n- if false, a blend is created between the entry state and that new state.\nIn either case all visited State notifications (Begin/End) will be triggered." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bSkipFirstUpdateTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition = { "bSkipFirstUpdateTransition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Reinitialize the state machine if we have become relevant to the graph\n// after not being ticked on the previous frame(s)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Reinitialize the state machine if we have become relevant to the graph\nafter not being ticked on the previous frame(s)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bReinitializeOnBecomingRelevant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant = { "bReinitializeOnBecomingRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Tag Notifies with meta data such as the active state and mirroring state.  Producing this\n// data has a  slight performance cost.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Tag Notifies with meta data such as the active state and mirroring state.  Producing this\ndata has a  slight performance cost." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bCreateNotifyMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData = { "bCreateNotifyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Allows a conduit to be used as this state machine's entry state\n// If a valid entry state cannot be found at runtime then this will generate a reference pose!\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
		{ "ToolTip", "Allows a conduit to be used as this state machine's entry state\nIf a valid entry state cannot be found at runtime then this will generate a reference pose!" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_SetBit(void* Obj)
	{
		((FAnimNode_StateMachine*)Obj)->bAllowConduitEntryStates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates = { "bAllowConduitEntryStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_StateMachine), &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_StateMachineIndexInClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_MaxTransitionsRequests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bReinitializeOnBecomingRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_StateMachine",
		sizeof(FAnimNode_StateMachine),
		alignof(FAnimNode_StateMachine),
		Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_StateMachine.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics::ScriptStructInfo[] = {
		{ FAnimationActiveTransitionEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewStructOps, TEXT("AnimationActiveTransitionEntry"), &Z_Registration_Info_UScriptStruct_AnimationActiveTransitionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationActiveTransitionEntry), 1126957631U) },
		{ FAnimationPotentialTransition::StaticStruct, Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::NewStructOps, TEXT("AnimationPotentialTransition"), &Z_Registration_Info_UScriptStruct_AnimationPotentialTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationPotentialTransition), 2526637919U) },
		{ FAnimNode_StateMachine::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewStructOps, TEXT("AnimNode_StateMachine"), &Z_Registration_Info_UScriptStruct_AnimNode_StateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_StateMachine), 3550249820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_2842724876(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
