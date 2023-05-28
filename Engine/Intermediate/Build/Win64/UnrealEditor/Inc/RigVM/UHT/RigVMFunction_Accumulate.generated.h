// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Accumulate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Accumulate_generated_h
#error "RigVMFunction_Accumulate.generated.h already included, missing '#pragma once' in RigVMFunction_Accumulate.h"
#endif
#define RIGVM_RigVMFunction_Accumulate_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateBase>();


#define FRigVMFunction_AccumulateFloatAdd_Execute() \
	void FRigVMFunction_AccumulateFloatAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Increment = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateFloatAdd>();


#define FRigVMFunction_AccumulateVectorAdd_Execute() \
	void FRigVMFunction_AccumulateVectorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Increment = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateVectorAdd>();


#define FRigVMFunction_AccumulateFloatMul_Execute() \
	void FRigVMFunction_AccumulateFloatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Multiplier = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateFloatMul>();


#define FRigVMFunction_AccumulateVectorMul_Execute() \
	void FRigVMFunction_AccumulateVectorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Multiplier = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateVectorMul>();


#define FRigVMFunction_AccumulateQuatMul_Execute() \
	void FRigVMFunction_AccumulateQuatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Multiplier = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateQuatMul>();


#define FRigVMFunction_AccumulateTransformMul_Execute() \
	void FRigVMFunction_AccumulateTransformMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Multiplier = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateTransformMul>();


#define FRigVMFunction_AccumulateFloatLerp_Execute() \
	void FRigVMFunction_AccumulateFloatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float TargetValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateFloatLerp>();


#define FRigVMFunction_AccumulateVectorLerp_Execute() \
	void FRigVMFunction_AccumulateVectorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& TargetValue = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateVectorLerp>();


#define FRigVMFunction_AccumulateQuatLerp_Execute() \
	void FRigVMFunction_AccumulateQuatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& TargetValue = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateQuatLerp>();


#define FRigVMFunction_AccumulateTransformLerp_Execute() \
	void FRigVMFunction_AccumulateTransformLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_388_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& TargetValue = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateTransformLerp>();


#define FRigVMFunction_AccumulateFloatRange_Execute() \
	void FRigVMFunction_AccumulateFloatRange::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_431_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& AccumulatedMinimum = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedMaximum = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateFloatRange>();


#define FRigVMFunction_AccumulateVectorRange_Execute() \
	void FRigVMFunction_AccumulateVectorRange::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
		bool& bIsInitialized \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_469_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& AccumulatedMinimum = *(FVector*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& AccumulatedMaximum = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AccumulateVectorRange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
