// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeTypes.h"
#include "GameplayTagContainer.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex8();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeRunStatus;
	static UEnum* EStateTreeRunStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeRunStatus"));
		}
		return Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRunStatus>()
	{
		return EStateTreeRunStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators[] = {
		{ "EStateTreeRunStatus::Running", (int64)EStateTreeRunStatus::Running },
		{ "EStateTreeRunStatus::Failed", (int64)EStateTreeRunStatus::Failed },
		{ "EStateTreeRunStatus::Succeeded", (int64)EStateTreeRunStatus::Succeeded },
		{ "EStateTreeRunStatus::Unset", (int64)EStateTreeRunStatus::Unset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Status describing current run status of a State Tree. */" },
		{ "Failed.Comment", "/** Tree execution has stopped on failure. */" },
		{ "Failed.Name", "EStateTreeRunStatus::Failed" },
		{ "Failed.ToolTip", "Tree execution has stopped on failure." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Running.Comment", "/** Tree is still running. */" },
		{ "Running.Name", "EStateTreeRunStatus::Running" },
		{ "Running.ToolTip", "Tree is still running." },
		{ "Succeeded.Comment", "/** Tree execution has stopped on success. */" },
		{ "Succeeded.Name", "EStateTreeRunStatus::Succeeded" },
		{ "Succeeded.ToolTip", "Tree execution has stopped on success." },
		{ "ToolTip", "Status describing current run status of a State Tree." },
		{ "Unset.Comment", "/** Status not set. */" },
		{ "Unset.Name", "EStateTreeRunStatus::Unset" },
		{ "Unset.ToolTip", "Status not set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeRunStatus",
		"EStateTreeRunStatus",
		Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateChangeType;
	static UEnum* EStateTreeStateChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateChangeType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateChangeType>()
	{
		return EStateTreeStateChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators[] = {
		{ "EStateTreeStateChangeType::None", (int64)EStateTreeStateChangeType::None },
		{ "EStateTreeStateChangeType::Changed", (int64)EStateTreeStateChangeType::Changed },
		{ "EStateTreeStateChangeType::Sustained", (int64)EStateTreeStateChangeType::Sustained },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams[] = {
		{ "Changed.Comment", "/** The state became activated or deactivated. */" },
		{ "Changed.Name", "EStateTreeStateChangeType::Changed" },
		{ "Changed.ToolTip", "The state became activated or deactivated." },
		{ "Comment", "/** State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Comment", "/** Not an activation */" },
		{ "None.Name", "EStateTreeStateChangeType::None" },
		{ "None.ToolTip", "Not an activation" },
		{ "Sustained.Comment", "/** The state is parent of new active state and sustained previous active state. */" },
		{ "Sustained.Name", "EStateTreeStateChangeType::Sustained" },
		{ "Sustained.ToolTip", "The state is parent of new active state and sustained previous active state." },
		{ "ToolTip", "State change type. Passed to EnterState() and ExitState() to indicate how the state change affects the state and Evaluator or Task is on." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeStateChangeType",
		"EStateTreeStateChangeType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionType;
	static UEnum* EStateTreeTransitionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionType>()
	{
		return EStateTreeTransitionType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators[] = {
		{ "EStateTreeTransitionType::None", (int64)EStateTreeTransitionType::None },
		{ "EStateTreeTransitionType::Succeeded", (int64)EStateTreeTransitionType::Succeeded },
		{ "EStateTreeTransitionType::Failed", (int64)EStateTreeTransitionType::Failed },
		{ "EStateTreeTransitionType::GotoState", (int64)EStateTreeTransitionType::GotoState },
		{ "EStateTreeTransitionType::NextState", (int64)EStateTreeTransitionType::NextState },
		{ "EStateTreeTransitionType::NotSet", (int64)EStateTreeTransitionType::NotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions behavior. */" },
		{ "Failed.Comment", "/** Stop State Tree or sub-tree and mark execution failed. */" },
		{ "Failed.Name", "EStateTreeTransitionType::Failed" },
		{ "Failed.ToolTip", "Stop State Tree or sub-tree and mark execution failed." },
		{ "GotoState.Comment", "/** Transition to the specified state. */" },
		{ "GotoState.Name", "EStateTreeTransitionType::GotoState" },
		{ "GotoState.ToolTip", "Transition to the specified state." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NextState.Comment", "/** Transition to the next sibling state. */" },
		{ "NextState.Name", "EStateTreeTransitionType::NextState" },
		{ "NextState.ToolTip", "Transition to the next sibling state." },
		{ "None.Comment", "/** No transition will take place. */" },
		{ "None.Name", "EStateTreeTransitionType::None" },
		{ "None.ToolTip", "No transition will take place." },
		{ "NotSet.Name", "EStateTreeTransitionType::NotSet" },
		{ "Succeeded.Comment", "/** Stop State Tree or sub-tree and mark execution succeeded. */" },
		{ "Succeeded.Name", "EStateTreeTransitionType::Succeeded" },
		{ "Succeeded.ToolTip", "Stop State Tree or sub-tree and mark execution succeeded." },
		{ "ToolTip", "Transitions behavior." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionType",
		"EStateTreeTransitionType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeConditionOperand;
	static UEnum* EStateTreeConditionOperand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeConditionOperand"));
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionOperand.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionOperand>()
	{
		return EStateTreeConditionOperand_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators[] = {
		{ "EStateTreeConditionOperand::Copy", (int64)EStateTreeConditionOperand::Copy },
		{ "EStateTreeConditionOperand::And", (int64)EStateTreeConditionOperand::And },
		{ "EStateTreeConditionOperand::Or", (int64)EStateTreeConditionOperand::Or },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams[] = {
		{ "And.Comment", "/** Combine results with AND. */" },
		{ "And.Name", "EStateTreeConditionOperand::And" },
		{ "And.ToolTip", "Combine results with AND." },
		{ "Comment", "/** Operand between conditions */" },
		{ "Copy.Comment", "/** Copy result */" },
		{ "Copy.Hidden", "" },
		{ "Copy.Name", "EStateTreeConditionOperand::Copy" },
		{ "Copy.ToolTip", "Copy result" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Or.Comment", "/** Combine results with OR. */" },
		{ "Or.Name", "EStateTreeConditionOperand::Or" },
		{ "Or.ToolTip", "Combine results with OR." },
		{ "ToolTip", "Operand between conditions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeConditionOperand",
		"EStateTreeConditionOperand",
		Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeConditionOperand.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeStateType;
	static UEnum* EStateTreeStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeStateType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeStateType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateType>()
	{
		return EStateTreeStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators[] = {
		{ "EStateTreeStateType::State", (int64)EStateTreeStateType::State },
		{ "EStateTreeStateType::Group", (int64)EStateTreeStateType::Group },
		{ "EStateTreeStateType::Linked", (int64)EStateTreeStateType::Linked },
		{ "EStateTreeStateType::Subtree", (int64)EStateTreeStateType::Subtree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams[] = {
		{ "Group.Comment", "/** A State containing just sub states. */" },
		{ "Group.Name", "EStateTreeStateType::Group" },
		{ "Group.ToolTip", "A State containing just sub states." },
		{ "Linked.Comment", "/** A State that is linked to another state in the tree (the execution continues on the linked state). */" },
		{ "Linked.Name", "EStateTreeStateType::Linked" },
		{ "Linked.ToolTip", "A State that is linked to another state in the tree (the execution continues on the linked state)." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "State.Comment", "/** A State containing tasks and evaluators. */" },
		{ "State.Name", "EStateTreeStateType::State" },
		{ "State.ToolTip", "A State containing tasks and evaluators." },
		{ "Subtree.Comment", "/** A subtree that can be linked to. */" },
		{ "Subtree.Name", "EStateTreeStateType::Subtree" },
		{ "Subtree.ToolTip", "A subtree that can be linked to." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeStateType",
		"EStateTreeStateType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeStateType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeStateType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionTrigger;
	static UEnum* EStateTreeTransitionTrigger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionTrigger"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionTrigger>()
	{
		return EStateTreeTransitionTrigger_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators[] = {
		{ "EStateTreeTransitionTrigger::None", (int64)EStateTreeTransitionTrigger::None },
		{ "EStateTreeTransitionTrigger::OnStateCompleted", (int64)EStateTreeTransitionTrigger::OnStateCompleted },
		{ "EStateTreeTransitionTrigger::OnStateSucceeded", (int64)EStateTreeTransitionTrigger::OnStateSucceeded },
		{ "EStateTreeTransitionTrigger::OnStateFailed", (int64)EStateTreeTransitionTrigger::OnStateFailed },
		{ "EStateTreeTransitionTrigger::OnTick", (int64)EStateTreeTransitionTrigger::OnTick },
		{ "EStateTreeTransitionTrigger::OnEvent", (int64)EStateTreeTransitionTrigger::OnEvent },
		{ "EStateTreeTransitionTrigger::MAX", (int64)EStateTreeTransitionTrigger::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Transitions trigger. */" },
		{ "MAX.Name", "EStateTreeTransitionTrigger::MAX" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionTrigger::None" },
		{ "OnEvent.Comment", "/** Try trigger transition on specific State Tree event. */" },
		{ "OnEvent.Name", "EStateTreeTransitionTrigger::OnEvent" },
		{ "OnEvent.ToolTip", "Try trigger transition on specific State Tree event." },
		{ "OnStateCompleted.Comment", "/** Try trigger transition when a state succeeded or failed. */" },
		{ "OnStateCompleted.Name", "EStateTreeTransitionTrigger::OnStateCompleted" },
		{ "OnStateCompleted.ToolTip", "Try trigger transition when a state succeeded or failed." },
		{ "OnStateFailed.Comment", "/** Try trigger transition when a state failed. */" },
		{ "OnStateFailed.Name", "EStateTreeTransitionTrigger::OnStateFailed" },
		{ "OnStateFailed.ToolTip", "Try trigger transition when a state failed." },
		{ "OnStateSucceeded.Comment", "/** Try trigger transition when a state succeeded. */" },
		{ "OnStateSucceeded.Name", "EStateTreeTransitionTrigger::OnStateSucceeded" },
		{ "OnStateSucceeded.ToolTip", "Try trigger transition when a state succeeded." },
		{ "OnTick.Comment", "/** Try trigger transition each State Tree tick. */" },
		{ "OnTick.Name", "EStateTreeTransitionTrigger::OnTick" },
		{ "OnTick.ToolTip", "Try trigger transition each State Tree tick." },
		{ "ToolTip", "Transitions trigger." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionTrigger",
		"EStateTreeTransitionTrigger",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionTrigger.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTransitionPriority;
	static UEnum* EStateTreeTransitionPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTransitionPriority"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionPriority>()
	{
		return EStateTreeTransitionPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators[] = {
		{ "EStateTreeTransitionPriority::None", (int64)EStateTreeTransitionPriority::None },
		{ "EStateTreeTransitionPriority::Normal", (int64)EStateTreeTransitionPriority::Normal },
		{ "EStateTreeTransitionPriority::Medium", (int64)EStateTreeTransitionPriority::Medium },
		{ "EStateTreeTransitionPriority::High", (int64)EStateTreeTransitionPriority::High },
		{ "EStateTreeTransitionPriority::Critical", (int64)EStateTreeTransitionPriority::Critical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected. */" },
		{ "Critical.Comment", "/** Critical priority. */" },
		{ "Critical.Name", "EStateTreeTransitionPriority::Critical" },
		{ "Critical.ToolTip", "Critical priority." },
		{ "High.Comment", "/** High priority. */" },
		{ "High.Name", "EStateTreeTransitionPriority::High" },
		{ "High.ToolTip", "High priority." },
		{ "Medium.Comment", "/** Medium priority. */" },
		{ "Medium.Name", "EStateTreeTransitionPriority::Medium" },
		{ "Medium.ToolTip", "Medium priority." },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EStateTreeTransitionPriority::None" },
		{ "Normal.Comment", "/** Normal priority. */" },
		{ "Normal.Name", "EStateTreeTransitionPriority::Normal" },
		{ "Normal.ToolTip", "Normal priority." },
		{ "ToolTip", "Transition priority. When multiple transitions trigger at the same time, the first transition of highest priority is selected." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTransitionPriority",
		"EStateTreeTransitionPriority",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTransitionPriority.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateHandle;
class UScriptStruct* FStateTreeStateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateHandle>()
{
	return FStateTreeStateHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a StateTree state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle to a StateTree state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateHandle",
		sizeof(FStateTreeStateHandle),
		alignof(FStateTreeStateHandle),
		Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeIndex16;
class UScriptStruct* FStateTreeIndex16::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeIndex16"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeIndex16>()
{
	return FStateTreeIndex16::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeIndex16_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** uint16 index that can be invalid. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "uint16 index that can be invalid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIndex16>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeIndex16, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeIndex16",
		sizeof(FStateTreeIndex16),
		alignof(FStateTreeIndex16),
		Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeIndex8;
class UScriptStruct* FStateTreeIndex8::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeIndex8"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeIndex8>()
{
	return FStateTreeIndex8::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeIndex8_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** uint8 index that can be invalid. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "uint8 index that can be invalid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIndex8>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeIndex8, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeIndex8",
		sizeof(FStateTreeIndex8),
		alignof(FStateTreeIndex8),
		Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex8()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest;
class UScriptStruct* FStateTreeTransitionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionRequest, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionRequest>()
{
	return FStateTreeTransitionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transition request */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Source state of the transition. Filled in by the StateTree execution context. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Source state of the transition. Filled in by the StateTree execution context." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionRequest, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Target state of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Target state of the transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionRequest, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState_MetaData)) }; // 1539883614
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionRequest, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_MetaData)) }; // 1197241257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_SourceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_TargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionRequest",
		sizeof(FStateTreeTransitionRequest),
		alignof(FStateTreeTransitionRequest),
		Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeActiveStates;
class UScriptStruct* FStateTreeActiveStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeActiveStates, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeActiveStates"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeActiveStates>()
{
	return FStateTreeActiveStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_States;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStates_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes an array of active states in a State Tree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Describes an array of active states in a State Tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeActiveStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(States, FStateTreeActiveStates), nullptr, nullptr, STRUCT_OFFSET(FStateTreeActiveStates, States), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates = { "NumStates", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeActiveStates, NumStates), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewProp_NumStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeActiveStates",
		sizeof(FStateTreeActiveStates),
		alignof(FStateTreeActiveStates),
		Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeActiveStates()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeActiveStates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration;
class UScriptStruct* FStateTreeRandomTimeDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeRandomTimeDuration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeRandomTimeDuration>()
{
	return FStateTreeRandomTimeDuration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_RandomVariance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\n * The variance is symmetric (+-) around the specified duration.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.\nThe variance is symmetric (+-) around the specified duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeRandomTimeDuration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeRandomTimeDuration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance = { "RandomVariance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeRandomTimeDuration, RandomVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewProp_RandomVariance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeRandomTimeDuration",
		sizeof(FStateTreeRandomTimeDuration),
		alignof(FStateTreeRandomTimeDuration),
		Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTransitionResult;
class UScriptStruct* FStateTreeTransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionResult, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTransitionResult>()
{
	return FStateTreeTransitionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveStates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRunStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRunStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextActiveStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextActiveStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\n * and Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\n * in which case the children will be visited until a leaf state is found, which will be the next state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Describes a state tree transition. Source is the state where the transition started, Target describes the state where the transition pointed at,\nand Next describes the selected state. The reason Transition and Next are different is that Transition state can be a selector state,\nin which case the children will be visited until a leaf state is found, which will be the next state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTransitionResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Current active states, where the transition started. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Current active states, where the transition started." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates = { "CurrentActiveStates", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates_MetaData)) }; // 604314449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Current Run status. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Current Run status." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus = { "CurrentRunStatus", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_MetaData)) }; // 2388265834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition source state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition source state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState = { "SourceState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, SourceState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Transition target state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition target state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, TargetState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** States selected as result of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "States selected as result of the transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates = { "NextActiveStates", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, NextActiveStates), Z_Construct_UScriptStruct_FStateTreeActiveStates, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates_MetaData)) }; // 604314449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The current state being executed. On enter/exit callbacks this is the state of the task. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "The current state being executed. On enter/exit callbacks this is the state of the task." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, CurrentState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState_MetaData)) }; // 1539883614
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "If the change type is Sustained, then the CurrentState was reselected, or if Changed then the state was just activated." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, ChangeType), Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_MetaData)) }; // 4125703179
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Priority of the transition that caused the state change. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Priority of the transition that caused the state change." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTransitionResult, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_MetaData)) }; // 1197241257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentRunStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_SourceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_TargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_NextActiveStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_ChangeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeTransitionResult",
		sizeof(FStateTreeTransitionResult),
		alignof(FStateTreeTransitionResult),
		Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTransitionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTransition;
class UScriptStruct* FCompactStateTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTransition, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTransition"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTransition.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTransition>()
{
	return FCompactStateTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ConditionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionsNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree transition.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree transition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTransition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData[] = {
		{ "Comment", "/** Transition event tag, used when trigger type is event. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition event tag, used when trigger type is event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first condition to test */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first condition to test" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin = { "ConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, ConditionsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** Target state of the transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Target state of the transition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, State), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData[] = {
		{ "Comment", "/** Transition delay. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Transition delay." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, Delay), Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay_MetaData)) }; // 1597762965
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData[] = {
		{ "Comment", "/* Type of the transition trigger. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition trigger." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, Trigger), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_MetaData)) }; // 2056727933
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "/* Priority of the transition. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Priority of the transition." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_MetaData)) }; // 1197241257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of conditions to test. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of conditions to test." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum = { "ConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTransition, ConditionsNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewProp_ConditionsNum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTransition",
		sizeof(FCompactStateTransition),
		alignof(FCompactStateTransition),
		Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTransition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeState;
class UScriptStruct* FCompactStateTreeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeState"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeState>()
{
	return FCompactStateTreeState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTreeState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ChildrenBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ChildrenEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_EnterConditionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TransitionsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TasksBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDataViewIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnterConditionsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TasksNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTransitionTasks_MetaData[];
#endif
		static void NewProp_bHasTransitionTasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTransitionTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Runtime representation of a StateTree state.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Runtime representation of a StateTree state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the State */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the State" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData[] = {
		{ "Comment", "/** Linked state handle if the state type is linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Linked state handle if the state type is linked state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState = { "LinkedState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, LinkedState), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/** Parent state handle, invalid if root state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Parent state handle, invalid if root state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, Parent), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent_MetaData)) }; // 1539883614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData[] = {
		{ "Comment", "/** Index to first child state */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first child state" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin = { "ChildrenBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, ChildrenBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData[] = {
		{ "Comment", "/** Index one past the last child state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index one past the last child state." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd = { "ChildrenEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, ChildrenEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first state enter condition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first state enter condition" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin = { "EnterConditionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData[] = {
		{ "Comment", "/** Index to first transition */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first transition" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin = { "TransitionsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, TransitionsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData[] = {
		{ "Comment", "/** Index to first task */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to first task" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin = { "TasksBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, TasksBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData[] = {
		{ "Comment", "/** Index to state instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Index to state instance data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex = { "ParameterInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, ParameterInstanceIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData[] = {
		{ "Comment", "/** Data view index of the input parameters. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Data view index of the input parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex = { "ParameterDataViewIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, ParameterDataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData[] = {
		{ "Comment", "/** Number of enter conditions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of enter conditions" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum = { "EnterConditionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, EnterConditionsNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData[] = {
		{ "Comment", "/** Number of transitions */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of transitions" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum = { "TransitionsNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, TransitionsNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData[] = {
		{ "Comment", "/** Number of tasks */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Number of tasks" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum = { "TasksNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, TasksNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the sate */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the sate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeState, Type), Z_Construct_UEnum_StateTreeModule_EStateTreeStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_MetaData)) }; // 3904711999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData[] = {
		{ "Comment", "/** True if the state contains tasks that should be called during transition handling. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "True if the state contains tasks that should be called during transition handling." },
	};
#endif
	void Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit(void* Obj)
	{
		((FCompactStateTreeState*)Obj)->bHasTransitionTasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks = { "bHasTransitionTasks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCompactStateTreeState), &Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_LinkedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ChildrenEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_ParameterDataViewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_EnterConditionsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TransitionsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_TasksNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewProp_bHasTransitionTasks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTreeState",
		sizeof(FCompactStateTreeState),
		alignof(FCompactStateTreeState),
		Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTreeState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompactStateTreeParameters;
class UScriptStruct* FCompactStateTreeParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeParameters, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("CompactStateTreeParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FCompactStateTreeParameters>()
{
	return FCompactStateTreeParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBatch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsBatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompactStateTreeParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch = { "BindingsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeParameters, BindingsBatch), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompactStateTreeParameters, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters_MetaData)) }; // 3551882691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_BindingsBatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"CompactStateTreeParameters",
		sizeof(FCompactStateTreeParameters),
		alignof(FCompactStateTreeParameters),
		Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompactStateTreeParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement;
	static UEnum* EStateTreeExternalDataRequirement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeExternalDataRequirement"));
		}
		return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExternalDataRequirement>()
	{
		return EStateTreeExternalDataRequirement_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators[] = {
		{ "EStateTreeExternalDataRequirement::Required", (int64)EStateTreeExternalDataRequirement::Required },
		{ "EStateTreeExternalDataRequirement::Optional", (int64)EStateTreeExternalDataRequirement::Optional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Optional.Comment", "// StateTree cannot be executed if the data is not present.\n" },
		{ "Optional.Name", "EStateTreeExternalDataRequirement::Optional" },
		{ "Optional.ToolTip", "StateTree cannot be executed if the data is not present." },
		{ "Required.Name", "EStateTreeExternalDataRequirement::Required" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeExternalDataRequirement",
		"EStateTreeExternalDataRequirement",
		Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle;
class UScriptStruct* FStateTreeExternalDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataHandle>()
{
	return FStateTreeExternalDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataViewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Handle to access an external struct or object.\n * Note: Use the templated version below. \n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle to access an external struct or object.\nNote: Use the templated version below." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex = { "DataViewIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataHandle, DataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex_MetaData)) }; // 1228038794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewProp_DataViewIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExternalDataHandle",
		sizeof(FStateTreeExternalDataHandle),
		alignof(FStateTreeExternalDataHandle),
		Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyUsage;
	static UEnum* EStateTreePropertyUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyUsage"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyUsage.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyUsage>()
	{
		return EStateTreePropertyUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators[] = {
		{ "EStateTreePropertyUsage::Invalid", (int64)EStateTreePropertyUsage::Invalid },
		{ "EStateTreePropertyUsage::Context", (int64)EStateTreePropertyUsage::Context },
		{ "EStateTreePropertyUsage::Input", (int64)EStateTreePropertyUsage::Input },
		{ "EStateTreePropertyUsage::Parameter", (int64)EStateTreePropertyUsage::Parameter },
		{ "EStateTreePropertyUsage::Output", (int64)EStateTreePropertyUsage::Output },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams[] = {
		{ "Context.Name", "EStateTreePropertyUsage::Context" },
		{ "Input.Name", "EStateTreePropertyUsage::Input" },
		{ "Invalid.Name", "EStateTreePropertyUsage::Invalid" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "Output.Name", "EStateTreePropertyUsage::Output" },
		{ "Parameter.Name", "EStateTreePropertyUsage::Parameter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyUsage",
		"EStateTreePropertyUsage",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc;
class UScriptStruct* FStateTreeExternalDataDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExternalDataDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExternalDataDesc>()
{
	return FStateTreeExternalDataDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Requirement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requirement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Requirement;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes an external data. The data can point to a struct or object.\n * The code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Describes an external data. The data can point to a struct or object.\nThe code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExternalDataDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** Class or struct of the external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Class or struct of the external data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Name of the external data. Used only for bindable external data (enforced by the schema).\n\x09 * External data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\n\x09 * by their type since they are used for unique instance of a given type.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the external data. Used only for bindable external data (enforced by the schema).\nExternal data linked explicitly by the nodes (i.e. LinkExternalData) are identified only\nby their type since they are used for unique instance of a given type." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle/Index to the StateTreeExecutionContext data views array */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle/Index to the StateTreeExecutionContext data views array" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataDesc, Handle), Z_Construct_UScriptStruct_FStateTreeExternalDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle_MetaData)) }; // 3321831722
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData[] = {
		{ "Comment", "/** Describes if the data is required or not. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Describes if the data is required or not." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement = { "Requirement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataDesc, Requirement), Z_Construct_UEnum_StateTreeModule_EStateTreeExternalDataRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_MetaData)) }; // 2122085378
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier. Used only for bindable external data. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Unique identifier. Used only for bindable external data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeExternalDataDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_Requirement,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExternalDataDesc",
		sizeof(FStateTreeExternalDataDesc),
		alignof(FStateTreeExternalDataDesc),
		Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStructRef;
class UScriptStruct* FStateTreeStructRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStructRef"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStructRef.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStructRef>()
{
	return FStateTreeStructRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStructRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\n * It is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n *\n * The expected type of the reference should be set in \"BaseStruct\" meta tag.\n *\n * Example:\n *\n *\x09USTRUCT()\n *\x09struct FAwesomeTaskInstanceData\n *\x09{\n *\x09\x09GENERATED_BODY()\n *\n *\x09\x09UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n *\x09\x09""FStateTreeStructRef Data;\n *\x09};\n *\n *\n *\x09if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n *\x09{\n *\x09\x09...\n *\x09}\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "StateTree struct ref allows to get a reference/pointer to a specified type via property binding.\nIt is useful for referencing larger properties to avoid copies of the data, or to be able to write to a bounds property.\n\nThe expected type of the reference should be set in \"BaseStruct\" meta tag.\n\nExample:\n\n    USTRUCT()\n    struct FAwesomeTaskInstanceData\n    {\n            GENERATED_BODY()\n\n            UPROPERTY(VisibleAnywhere, Category = Input, meta = (BaseStruct = \"/Script/AwesomeModule.AwesomeData\"))\n            FStateTreeStructRef Data;\n    };\n\n\n    if (const FAwesomeData* Awesome = InstanceData.Data.GetPtr<FAwesomeData>())\n    {\n            ...\n    }" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStructRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStructRef",
		sizeof(FStateTreeStructRef),
		alignof(FStateTreeStructRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStructRef.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeExecutionState;
class UScriptStruct* FStateTreeExecutionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionState, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeExecutionState"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeExecutionState>()
{
	return FStateTreeExecutionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeExecutionState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeExecutionState",
		sizeof(FStateTreeExecutionState),
		alignof(FStateTreeExecutionState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExecutionState()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeExecutionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeStateLink;
class UScriptStruct* FStateTreeStateLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateLink, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeStateLink"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeStateLink.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeStateLink>()
{
	return FStateTreeStateLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeStateLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Link to another state in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Link to another state in StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeStateLink>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Name of the state at the time of linking, used for error reporting. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Name of the state at the time of linking, used for error reporting." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateLink, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** ID of the state linked to. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "ID of the state linked to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateLink, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData[] = {
		{ "Category", "Link" },
		{ "Comment", "/** Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time). */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateLink, LinkType), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_MetaData)) }; // 4223876200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateLink, Type_DEPRECATED), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_MetaData)) }; // 4223876200
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData[] = {
		{ "Comment", "/** Handle of the linked state. */" },
		{ "ModuleRelativePath", "Public/StateTreeTypes.h" },
		{ "ToolTip", "Handle of the linked state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle = { "StateHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeStateLink, StateHandle), Z_Construct_UScriptStruct_FStateTreeStateHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle_MetaData)) }; // 1539883614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_LinkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_Type,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewProp_StateHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeStateLink",
		sizeof(FStateTreeStateLink),
		alignof(FStateTreeStateLink),
		Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeStateLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo[] = {
		{ EStateTreeRunStatus_StaticEnum, TEXT("EStateTreeRunStatus"), &Z_Registration_Info_UEnum_EStateTreeRunStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2388265834U) },
		{ EStateTreeStateChangeType_StaticEnum, TEXT("EStateTreeStateChangeType"), &Z_Registration_Info_UEnum_EStateTreeStateChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4125703179U) },
		{ EStateTreeTransitionType_StaticEnum, TEXT("EStateTreeTransitionType"), &Z_Registration_Info_UEnum_EStateTreeTransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223876200U) },
		{ EStateTreeConditionOperand_StaticEnum, TEXT("EStateTreeConditionOperand"), &Z_Registration_Info_UEnum_EStateTreeConditionOperand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2673936265U) },
		{ EStateTreeStateType_StaticEnum, TEXT("EStateTreeStateType"), &Z_Registration_Info_UEnum_EStateTreeStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904711999U) },
		{ EStateTreeTransitionTrigger_StaticEnum, TEXT("EStateTreeTransitionTrigger"), &Z_Registration_Info_UEnum_EStateTreeTransitionTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2056727933U) },
		{ EStateTreeTransitionPriority_StaticEnum, TEXT("EStateTreeTransitionPriority"), &Z_Registration_Info_UEnum_EStateTreeTransitionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1197241257U) },
		{ EStateTreeExternalDataRequirement_StaticEnum, TEXT("EStateTreeExternalDataRequirement"), &Z_Registration_Info_UEnum_EStateTreeExternalDataRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2122085378U) },
		{ EStateTreePropertyUsage_StaticEnum, TEXT("EStateTreePropertyUsage"), &Z_Registration_Info_UEnum_EStateTreePropertyUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1503390111U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeStateHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics::NewStructOps, TEXT("StateTreeStateHandle"), &Z_Registration_Info_UScriptStruct_StateTreeStateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateHandle), 1539883614U) },
		{ FStateTreeIndex16::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewStructOps, TEXT("StateTreeIndex16"), &Z_Registration_Info_UScriptStruct_StateTreeIndex16, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIndex16), 1228038794U) },
		{ FStateTreeIndex8::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewStructOps, TEXT("StateTreeIndex8"), &Z_Registration_Info_UScriptStruct_StateTreeIndex8, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIndex8), 32052904U) },
		{ FStateTreeTransitionRequest::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps, TEXT("StateTreeTransitionRequest"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionRequest), 1507413356U) },
		{ FStateTreeActiveStates::StaticStruct, Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps, TEXT("StateTreeActiveStates"), &Z_Registration_Info_UScriptStruct_StateTreeActiveStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeActiveStates), 604314449U) },
		{ FStateTreeRandomTimeDuration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics::NewStructOps, TEXT("StateTreeRandomTimeDuration"), &Z_Registration_Info_UScriptStruct_StateTreeRandomTimeDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeRandomTimeDuration), 1597762965U) },
		{ FStateTreeTransitionResult::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps, TEXT("StateTreeTransitionResult"), &Z_Registration_Info_UScriptStruct_StateTreeTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTransitionResult), 3114879413U) },
		{ FCompactStateTransition::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTransition_Statics::NewStructOps, TEXT("CompactStateTransition"), &Z_Registration_Info_UScriptStruct_CompactStateTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTransition), 2349916782U) },
		{ FCompactStateTreeState::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeState_Statics::NewStructOps, TEXT("CompactStateTreeState"), &Z_Registration_Info_UScriptStruct_CompactStateTreeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeState), 346072044U) },
		{ FCompactStateTreeParameters::StaticStruct, Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics::NewStructOps, TEXT("CompactStateTreeParameters"), &Z_Registration_Info_UScriptStruct_CompactStateTreeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompactStateTreeParameters), 1249972773U) },
		{ FStateTreeExternalDataHandle::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps, TEXT("StateTreeExternalDataHandle"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataHandle), 3321831722U) },
		{ FStateTreeExternalDataDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps, TEXT("StateTreeExternalDataDesc"), &Z_Registration_Info_UScriptStruct_StateTreeExternalDataDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExternalDataDesc), 2405474714U) },
		{ FStateTreeStructRef::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStructRef_Statics::NewStructOps, TEXT("StateTreeStructRef"), &Z_Registration_Info_UScriptStruct_StateTreeStructRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStructRef), 385890286U) },
		{ FStateTreeExecutionState::StaticStruct, Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps, TEXT("StateTreeExecutionState"), &Z_Registration_Info_UScriptStruct_StateTreeExecutionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeExecutionState), 2069419396U) },
		{ FStateTreeStateLink::StaticStruct, Z_Construct_UScriptStruct_FStateTreeStateLink_Statics::NewStructOps, TEXT("StateTreeStateLink"), &Z_Registration_Info_UScriptStruct_StateTreeStateLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeStateLink), 1170121165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_2634008723(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
