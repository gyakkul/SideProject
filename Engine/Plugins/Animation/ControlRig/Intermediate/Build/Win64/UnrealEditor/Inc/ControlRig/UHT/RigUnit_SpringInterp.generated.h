// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Simulation/RigUnit_SpringInterp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SpringInterp_generated_h
#error "RigUnit_SpringInterp.generated.h already included, missing '#pragma once' in RigUnit_SpringInterp.h"
#endif
#define CONTROLRIG_RigUnit_SpringInterp_generated_h


#define FRigUnit_SpringInterp_Execute() \
	void FRigUnit_SpringInterp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Current, \
		const float Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		float& Result, \
		FFloatSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Current, \
		const float Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		float& Result, \
		FFloatSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Current = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Target = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Stiffness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Mass = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FFloatSpringState& SpringState = *(FFloatSpringState*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Current, \
			Target, \
			Stiffness, \
			CriticalDamping, \
			Mass, \
			Result, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterp>();


#define FRigUnit_SpringInterpVector_Execute() \
	void FRigUnit_SpringInterpVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Current, \
		const FVector& Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		FVector& Result, \
		FVectorSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Current, \
		const FVector& Target, \
		const float Stiffness, \
		const float CriticalDamping, \
		const float Mass, \
		FVector& Result, \
		FVectorSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Current = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Stiffness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Mass = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVectorSpringState& SpringState = *(FVectorSpringState*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Current, \
			Target, \
			Stiffness, \
			CriticalDamping, \
			Mass, \
			Result, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterpVector>();


#define FRigUnit_SpringInterpV2_Execute() \
	void FRigUnit_SpringInterpV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Force, \
		const bool bUseCurrentInput, \
		const float Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		float& Result, \
		float& Velocity, \
		float& SimulatedResult, \
		FFloatSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Target, \
		const float Strength, \
		const float CriticalDamping, \
		const float Force, \
		const bool bUseCurrentInput, \
		const float Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		float& Result, \
		float& Velocity, \
		float& SimulatedResult, \
		FFloatSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Target = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Force = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const float Current = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[8].GetData(false); \
		float& Velocity = *(float*)RigVMMemoryHandles[9].GetData(false); \
		float& SimulatedResult = *(float*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FFloatSpringState& SpringState = *(FFloatSpringState*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Force, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			Velocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterpV2>();


#define FRigUnit_SpringInterpVectorV2_Execute() \
	void FRigUnit_SpringInterpVectorV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Force, \
		const bool bUseCurrentInput, \
		const FVector& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FVector& Result, \
		FVector& Velocity, \
		FVector& SimulatedResult, \
		FVectorSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Force, \
		const bool bUseCurrentInput, \
		const FVector& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FVector& Result, \
		FVector& Velocity, \
		FVector& SimulatedResult, \
		FVectorSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Force = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& Current = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		FVector& Velocity = *(FVector*)RigVMMemoryHandles[9].GetData(false); \
		FVector& SimulatedResult = *(FVector*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVectorSpringState& SpringState = *(FVectorSpringState*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Force, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			Velocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterpVectorV2>();


#define FRigUnit_SpringInterpQuaternionV2_Execute() \
	void FRigUnit_SpringInterpQuaternionV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Torque, \
		const bool bUseCurrentInput, \
		const FQuat& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FQuat& Result, \
		FVector& AngularVelocity, \
		FQuat& SimulatedResult, \
		FQuaternionSpringState& SpringState \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Target, \
		const float Strength, \
		const float CriticalDamping, \
		const FVector& Torque, \
		const bool bUseCurrentInput, \
		const FQuat& Current, \
		const float TargetVelocityAmount, \
		const bool bInitializeFromTarget, \
		FQuat& Result, \
		FVector& AngularVelocity, \
		FQuat& SimulatedResult, \
		FQuaternionSpringState& SpringState \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Target = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float CriticalDamping = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Torque = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const bool bUseCurrentInput = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const FQuat& Current = *(FQuat*)RigVMMemoryHandles[5].GetData(false); \
		const float TargetVelocityAmount = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const bool bInitializeFromTarget = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[8].GetData(false); \
		FVector& AngularVelocity = *(FVector*)RigVMMemoryHandles[9].GetData(false); \
		FQuat& SimulatedResult = *(FQuat*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FQuaternionSpringState& SpringState = *(FQuaternionSpringState*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Strength, \
			CriticalDamping, \
			Torque, \
			bUseCurrentInput, \
			Current, \
			TargetVelocityAmount, \
			bInitializeFromTarget, \
			Result, \
			AngularVelocity, \
			SimulatedResult, \
			SpringState \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringInterpQuaternionV2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
