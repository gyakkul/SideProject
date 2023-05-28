// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_SequenceExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SequenceExecution_generated_h
#error "RigUnit_SequenceExecution.generated.h already included, missing '#pragma once' in RigUnit_SequenceExecution.h"
#endif
#define CONTROLRIG_RigUnit_SequenceExecution_generated_h


#define FRigUnit_SequenceExecution_Execute() \
	void FRigUnit_SequenceExecution::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SequenceExecution>();


#define FRigUnit_SequenceAggregate_Execute() \
	void FRigUnit_SequenceAggregate::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SequenceAggregate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
