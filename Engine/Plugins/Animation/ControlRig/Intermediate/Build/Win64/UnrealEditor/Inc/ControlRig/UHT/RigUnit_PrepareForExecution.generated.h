// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_PrepareForExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_PrepareForExecution_generated_h
#error "RigUnit_PrepareForExecution.generated.h already included, missing '#pragma once' in RigUnit_PrepareForExecution.h"
#endif
#define CONTROLRIG_RigUnit_PrepareForExecution_generated_h


#define FRigUnit_PrepareForExecution_Execute() \
	void FRigUnit_PrepareForExecution::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics; \
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


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PrepareForExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
