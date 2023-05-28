// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Timeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Timeline_generated_h
#error "RigVMFunction_Timeline.generated.h already included, missing '#pragma once' in RigVMFunction_Timeline.h"
#endif
#define RIGVM_RigVMFunction_Timeline_generated_h


#define FRigVMFunction_Timeline_Execute() \
	void FRigVMFunction_Timeline::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_Timeline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Time = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Speed, \
			Time, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_Timeline>();


#define FRigVMFunction_TimeLoop_Execute() \
	void FRigVMFunction_TimeLoop::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_TimeLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool Normalize = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Absolute = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Relative = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& FlipFlop = *(float*)RigVMMemoryHandles[5].GetData(false); \
		bool& Even = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		float& AccumulatedAbsolute = *(float*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedRelative = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& NumIterations = *(int32*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Speed, \
			Duration, \
			Normalize, \
			Absolute, \
			Relative, \
			FlipFlop, \
			Even, \
			AccumulatedAbsolute, \
			AccumulatedRelative, \
			NumIterations, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_TimeLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Timeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
