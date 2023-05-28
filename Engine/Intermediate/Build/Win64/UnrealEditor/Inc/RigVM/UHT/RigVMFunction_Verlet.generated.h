// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Verlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Verlet_generated_h
#error "RigVMFunction_Verlet.generated.h already included, missing '#pragma once' in RigVMFunction_Verlet.h"
#endif
#define RIGVM_RigVMFunction_Verlet_generated_h


#define FRigVMFunction_VerletIntegrateVector_Execute() \
	void FRigVMFunction_VerletIntegrateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FRigVMSimPoint& Point, \
		bool& bInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FRigVMSimPoint& Point, \
		bool& bInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Damp = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& Force = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Velocity = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		FVector& Acceleration = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMSimPoint& Point = *(FRigVMSimPoint*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			Damp, \
			Blend, \
			Force, \
			Position, \
			Velocity, \
			Acceleration, \
			Point, \
			bInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VerletIntegrateVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
