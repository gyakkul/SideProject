// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_FullbodyIK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FULLBODYIK_RigUnit_FullbodyIK_generated_h
#error "RigUnit_FullbodyIK.generated.h already included, missing '#pragma once' in RigUnit_FullbodyIK.h"
#endif
#define FULLBODYIK_RigUnit_FullbodyIK_generated_h

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBIKEndEffector_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FFBIKEndEffector>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FRigUnit_FullbodyIK_WorkData>();


#define FRigUnit_FullbodyIK_Execute() \
	void FRigUnit_FullbodyIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Root, \
		const TArrayView<const FFBIKEndEffector>& Effectors, \
		const TArrayView<const FFBIKConstraintOption>& Constraints, \
		const FSolverInput& SolverProperty, \
		const FMotionProcessInput& MotionProperty, \
		const bool bPropagateToChildren, \
		const FFBIKDebugOption& DebugOption, \
		FRigUnit_FullbodyIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Root, \
		const TArrayView<const FFBIKEndEffector>& Effectors, \
		const TArrayView<const FFBIKConstraintOption>& Constraints, \
		const FSolverInput& SolverProperty, \
		const FMotionProcessInput& MotionProperty, \
		const bool bPropagateToChildren, \
		const FFBIKDebugOption& DebugOption, \
		FRigUnit_FullbodyIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Root = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FFBIKEndEffector>& Effectors = *(TArray<FFBIKEndEffector>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FFBIKConstraintOption>& Constraints = *(TArray<FFBIKConstraintOption>*)RigVMMemoryHandles[2].GetData(false); \
		const FSolverInput& SolverProperty = *(FSolverInput*)RigVMMemoryHandles[3].GetData(false); \
		const FMotionProcessInput& MotionProperty = *(FMotionProcessInput*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		const FFBIKDebugOption& DebugOption = *(FFBIKDebugOption*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_FullbodyIK_WorkData& WorkData = *(FRigUnit_FullbodyIK_WorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			Effectors, \
			Constraints, \
			SolverProperty, \
			MotionProperty, \
			bPropagateToChildren, \
			DebugOption, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FRigUnit_FullbodyIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
