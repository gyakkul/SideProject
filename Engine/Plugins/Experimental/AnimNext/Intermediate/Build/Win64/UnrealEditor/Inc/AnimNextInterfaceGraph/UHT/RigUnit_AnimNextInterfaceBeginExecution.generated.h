// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_AnimNextInterfaceBeginExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceBeginExecution_generated_h
#error "RigUnit_AnimNextInterfaceBeginExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextInterfaceBeginExecution.h"
#endif
#define ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceBeginExecution_generated_h


#define FRigUnit_AnimNextInterfaceBeginExecution_Execute() \
	void FRigUnit_AnimNextInterfaceBeginExecution::StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceBeginExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
