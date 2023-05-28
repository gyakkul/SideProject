// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeState.h"
#include "GameplayTagContainer.h"
#include "PropertyBag.h"
#include "StateTreeEditorNode.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeState();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeState_NoRegister();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorNode();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateParameters();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransition();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransition;
class UScriptStruct* FStateTreeTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransition, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeTransition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransition.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeTransition>()
{
	return FStateTreeTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayTransition_MetaData[];
#endif
		static void NewProp_bDelayTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayRandomVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayRandomVariance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor representation of a transition in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Editor representation of a transition in StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** When to try trigger the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "When to try trigger the transition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, Trigger), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger_MetaData)) }; // 2056727933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_EventTag_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Tag of the State Tree event that triggers the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Tag of the State Tree event that triggers the transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_EventTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Transition target state. */" },
		{ "DisplayName", "Transition To" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Transition target state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, State), Z_Construct_UScriptStruct_FStateTreeStateLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_State_MetaData)) }; // 1170121165
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Transition priority when multiple transitions happen at the same time.\n\x09 * During transition handling, the transitions are visited from leaf to root.\n\x09 * The first visited transition, of highest priority, that leads to a state selection, will be activated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Transition priority when multiple transitions happen at the same time.\nDuring transition handling, the transitions are visited from leaf to root.\nThe first visited transition, of highest priority, that leads to a state selection, will be activated." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority_MetaData)) }; // 1197241257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Delay the triggering of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Delay the triggering of the transition." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition_SetBit(void* Obj)
	{
		((FStateTreeTransition*)Obj)->bDelayTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition = { "bDelayTransition", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeTransition), &Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayDuration_MetaData[] = {
		{ "Category", "Transition" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Transition delay duration in seconds. */" },
		{ "EditCondition", "bDelayTransition" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Transition delay duration in seconds." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayDuration = { "DelayDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, DelayDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayRandomVariance_MetaData[] = {
		{ "Category", "Transition" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Transition delay random variance in seconds. */" },
		{ "EditCondition", "bDelayTransition" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Transition delay random variance in seconds." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayRandomVariance = { "DelayRandomVariance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, DelayRandomVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayRandomVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayRandomVariance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(nullptr, 0) }; // 2428380729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeConditionBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeConditionBase" },
		{ "Category", "Transition" },
		{ "Comment", "/** Conditions that must pass so that the transition can be triggered. */" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Conditions that must pass so that the transition can be triggered." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransition, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions_MetaData)) }; // 2428380729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_bDelayTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_DelayRandomVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewProp_Conditions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransition",
		sizeof(FStateTreeTransition),
		alignof(FStateTreeTransition),
		Z_Construct_UScriptStruct_FStateTreeTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateParameters;
class UScriptStruct* FStateTreeStateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateParameters, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeStateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateParameters.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeStateParameters>()
{
	return FStateTreeStateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedLayout_MetaData[];
#endif
		static void NewProp_bFixedLayout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateParameters, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_Parameters_MetaData)) }; // 3551882691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout_SetBit(void* Obj)
	{
		((FStateTreeStateParameters*)Obj)->bFixedLayout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout = { "bFixedLayout", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeStateParameters), &Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Parameters" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateParameters, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_bFixedLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateParameters",
		sizeof(FStateTreeStateParameters),
		alignof(FStateTreeStateParameters),
		Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateParameters.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateParameters.InnerSingleton;
	}
	void UStateTreeState::StaticRegisterNativesUStateTreeState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeState);
	UClass* Z_Construct_UClass_UStateTreeState_NoRegister()
	{
		return UStateTreeState::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedSubtree_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedSubtree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnterConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterConditions;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Evaluators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Evaluators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Evaluators;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleTask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleTask;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Editor representation of a state in StateTree\n */" },
		{ "IncludePath", "StateTreeState.h" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Editor representation of a state in StateTree" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ~StateTree Builder API\n" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "~StateTree Builder API" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Name), METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Type), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type_MetaData)) }; // 3904711999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_LinkedSubtree_MetaData[] = {
		{ "Category", "State" },
		{ "DirectStatesOnly", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "SubtreesOnly", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_LinkedSubtree = { "LinkedSubtree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, LinkedSubtree), Z_Construct_UScriptStruct_FStateTreeStateLink, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_LinkedSubtree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_LinkedSubtree_MetaData)) }; // 1170121165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Parameters), Z_Construct_UScriptStruct_FStateTreeStateParameters, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parameters_MetaData)) }; // 3112502225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_ID_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions_Inner = { "EnterConditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(nullptr, 0) }; // 2428380729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeConditionBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeConditionBase" },
		{ "Category", "Enter Conditions" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions = { "EnterConditions", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, EnterConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions_MetaData)) }; // 2428380729
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators_Inner = { "Evaluators", nullptr, (EPropertyFlags)0x0000008820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(nullptr, 0) }; // 2428380729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeEvaluatorBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeEvaluatorBase" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators = { "Evaluators", nullptr, (EPropertyFlags)0x0010008820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Evaluators_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators_MetaData)) }; // 2428380729
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(nullptr, 0) }; // 2428380729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeTaskBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeTaskBase" },
		{ "Category", "Tasks" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks_MetaData)) }; // 2428380729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_SingleTask_MetaData[] = {
		{ "BaseClass", "/Script/StateTreeModule.StateTreeTaskBlueprintBase" },
		{ "BaseStruct", "/Script/StateTreeModule.StateTreeTaskBase" },
		{ "Category", "Task" },
		{ "Comment", "// Single item used when schema calls for single task per state.\n" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
		{ "ToolTip", "Single item used when schema calls for single task per state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_SingleTask = { "SingleTask", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, SingleTask), Z_Construct_UScriptStruct_FStateTreeEditorNode, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_SingleTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_SingleTask_MetaData)) }; // 2428380729
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeTransition, METADATA_PARAMS(nullptr, 0) }; // 2614057509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions_MetaData[] = {
		{ "Category", "Transitions" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions_MetaData)) }; // 2614057509
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStateTreeState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	void Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UStateTreeState*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStateTreeState), &Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parent_MetaData[] = {
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/StateTreeState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeState, Parent), Z_Construct_UClass_UStateTreeState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_LinkedSubtree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_EnterConditions,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Evaluators,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Tasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_SingleTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_bExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeState_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeState_Statics::ClassParams = {
		&UStateTreeState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeState()
	{
		if (!Z_Registration_Info_UClass_UStateTreeState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeState.OuterSingleton, Z_Construct_UClass_UStateTreeState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeState.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeState>()
	{
		return UStateTreeState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeState);
	UStateTreeState::~UStateTreeState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeTransition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransition_Statics::NewStructOps, TEXT("StateTreeTransition"), &Z_Registration_Info_UScriptStruct_StateTreeTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransition), 2614057509U) },
		{ FStateTreeStateParameters::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateParameters_Statics::NewStructOps, TEXT("StateTreeStateParameters"), &Z_Registration_Info_UScriptStruct_StateTreeStateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateParameters), 3112502225U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeState, UStateTreeState::StaticClass, TEXT("UStateTreeState"), &Z_Registration_Info_UClass_UStateTreeState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeState), 2560773629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_2523878117(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
