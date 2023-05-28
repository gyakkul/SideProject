// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DeltaFromPrevious_generated_h
#error "RigVMFunction_DeltaFromPrevious.generated.h already included, missing '#pragma once' in RigVMFunction_DeltaFromPrevious.h"
#endif
#define RIGVM_RigVMFunction_DeltaFromPrevious_generated_h


#define FRigVMFunction_DeltaFromPreviousFloat_Execute() \
	void FRigVMFunction_DeltaFromPreviousFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Delta = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& PreviousValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Cache = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DeltaFromPreviousFloat>();


#define FRigVMFunction_DeltaFromPreviousVector_Execute() \
	void FRigVMFunction_DeltaFromPreviousVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Delta = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& PreviousValue = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Cache = *(FVector*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DeltaFromPreviousVector>();


#define FRigVMFunction_DeltaFromPreviousQuat_Execute() \
	void FRigVMFunction_DeltaFromPreviousQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Delta = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& PreviousValue = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Cache = *(FQuat*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DeltaFromPreviousQuat>();


#define FRigVMFunction_DeltaFromPreviousTransform_Execute() \
	void FRigVMFunction_DeltaFromPreviousTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Delta = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& PreviousValue = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Cache = *(FTransform*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DeltaFromPreviousTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
