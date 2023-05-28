// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_ProfilingBracket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ProfilingBracket_generated_h
#error "RigUnit_ProfilingBracket.generated.h already included, missing '#pragma once' in RigUnit_ProfilingBracket.h"
#endif
#define CONTROLRIG_RigUnit_ProfilingBracket_generated_h


#define FRigUnit_StartProfilingTimer_Execute() \
	void FRigUnit_StartProfilingTimer::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>() \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StartProfilingTimer>();


#define FRigUnit_EndProfilingTimer_Execute() \
	void FRigUnit_EndProfilingTimer::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 NumberOfMeasurements, \
		const FString& Prefix, \
		float& AccumulatedTime, \
		int32& MeasurementsLeft, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 NumberOfMeasurements, \
		const FString& Prefix, \
		float& AccumulatedTime, \
		int32& MeasurementsLeft, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 NumberOfMeasurements = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Prefix = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		float& AccumulatedTime = *(float*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& MeasurementsLeft = *(int32*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			NumberOfMeasurements, \
			Prefix, \
			AccumulatedTime, \
			MeasurementsLeft, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_EndProfilingTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
