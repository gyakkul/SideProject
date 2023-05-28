// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_AnimNextInterfaceEndExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceEndExecution_generated_h
#error "RigUnit_AnimNextInterfaceEndExecution.generated.h already included, missing '#pragma once' in RigUnit_AnimNextInterfaceEndExecution.h"
#endif
#define ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceEndExecution_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceEndExecution_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceEndExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceEndExecution>();


#define FRigUnit_AnimNextInterfaceEndExecution_Bool_Execute() \
	void FRigUnit_AnimNextInterfaceEndExecution_Bool::StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const bool Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceEndExecution_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceEndExecution_Bool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const bool Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Result = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceEndExecution Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceEndExecution_Bool>();


#define FRigUnit_AnimNextInterfaceEndExecution_Float_Execute() \
	void FRigUnit_AnimNextInterfaceEndExecution_Float::StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const float Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceEndExecution_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceEndExecution_Float_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const float Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Result = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceEndExecution Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceEndExecution_Float>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceEndExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
