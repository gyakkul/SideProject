// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveTo() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MoveTo::StaticRegisterNativesUBTTask_MoveTo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MoveTo);
	UClass* Z_Construct_UClass_UBTTask_MoveTo_NoRegister()
	{
		return UBTTask_MoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservedBlackboardValueTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObservedBlackboardValueTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bObserveBlackboardValue_MetaData[];
#endif
		static void NewProp_bObserveBlackboardValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bObserveBlackboardValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[];
#endif
		static void NewProp_bAllowStrafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[];
#endif
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackMovingGoal_MetaData[];
#endif
		static void NewProp_bTrackMovingGoal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackMovingGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalLocation_MetaData[];
#endif
		static void NewProp_bProjectGoalLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesAgentRadius_MetaData[];
#endif
		static void NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesAgentRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReachTestIncludesGoalRadius_MetaData[];
#endif
		static void NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReachTestIncludesGoalRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlap_MetaData[];
#endif
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnOverlapNeedsUpdate_MetaData[];
#endif
		static void NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlapNeedsUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Move To task node.\n * Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "Move To task node.\nMoves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** fixed distance added to threshold between AI and goal location in destination reach test */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "fixed distance added to threshold between AI and goal location in destination reach test" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ClampMin", "1" },
		{ "Comment", "/** if task is expected to react to changes to location represented by BB key \n\x09 *\x09this property can be used to tweak sensitivity of the mechanism. Value is \n\x09 *\x09recommended to be less than AcceptableRadius */" },
		{ "DisplayAfter", "bObserveBlackboardValue" },
		{ "EditCondition", "bObserveBlackboardValue" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if task is expected to react to changes to location represented by BB key\n    this property can be used to tweak sensitivity of the mechanism. Value is\n    recommended to be less than AcceptableRadius" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance = { "ObservedBlackboardValueTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_MoveTo, ObservedBlackboardValueTolerance), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** if move goal in BB changes the move will be redirected to new location */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if move goal in BB changes the move will be redirected to new location" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bObserveBlackboardValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue = { "bObserveBlackboardValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bAllowStrafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bAllowPartialPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, path to goal actor will update itself when actor moves */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, path to goal actor will update itself when actor moves" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bTrackMovingGoal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal = { "bTrackMovingGoal", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, goal location will be projected on navigation data (navmesh) before using */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, goal location will be projected on navigation data (navmesh) before using" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bProjectGoalLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation = { "bProjectGoalLocation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bReachTestIncludesAgentRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius = { "bReachTestIncludesAgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bReachTestIncludesGoalRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius = { "bReachTestIncludesGoalRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** DEPRECATED, please use combination of bReachTestIncludes*Radius instead */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
		{ "ToolTip", "DEPRECATED, please use combination of bReachTestIncludes*Radius instead" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bStopOnOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit(void* Obj)
	{
		((UBTTask_MoveTo*)Obj)->bStopOnOverlapNeedsUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate = { "bStopOnOverlapNeedsUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_MoveTo), &Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_AcceptableRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_ObservedBlackboardValueTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bObserveBlackboardValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowStrafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bAllowPartialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bTrackMovingGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bProjectGoalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesAgentRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bReachTestIncludesGoalRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo_Statics::NewProp_bStopOnOverlapNeedsUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveTo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams = {
		&UBTTask_MoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveTo()
	{
		if (!Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton, Z_Construct_UClass_UBTTask_MoveTo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_MoveTo.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_MoveTo>()
	{
		return UBTTask_MoveTo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveTo);
	UBTTask_MoveTo::~UBTTask_MoveTo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MoveTo, UBTTask_MoveTo::StaticClass, TEXT("UBTTask_MoveTo"), &Z_Registration_Info_UClass_UBTTask_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MoveTo), 1578757842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_3483132894(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
