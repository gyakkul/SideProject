// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Vector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Vector_generated_h
#error "RigUnit_Vector.generated.h already included, missing '#pragma once' in RigUnit_Vector.h"
#endif
#define CONTROLRIG_RigUnit_Vector_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryVectorOp>();


#define FRigUnit_Multiply_VectorVector_Execute() \
	void FRigUnit_Multiply_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Multiply_VectorVector>();


#define FRigUnit_Add_VectorVector_Execute() \
	void FRigUnit_Add_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Add_VectorVector>();


#define FRigUnit_Subtract_VectorVector_Execute() \
	void FRigUnit_Subtract_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Subtract_VectorVector>();


#define FRigUnit_Divide_VectorVector_Execute() \
	void FRigUnit_Divide_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Divide_VectorVector>();


#define FRigUnit_Distance_VectorVector_Execute() \
	void FRigUnit_Distance_VectorVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Distance_VectorVector>();


#define FRigUnit_MathVectorBezierFourPoint_Execute() \
	void FRigUnit_MathVectorBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float T, \
		FVector& Result, \
		FVector& Tangent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float T, \
		FVector& Result, \
		FVector& Tangent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Tangent = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			T, \
			Result, \
			Tangent \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathVectorBezierFourPoint>();


#define FRigUnit_MathVectorMakeBezierFourPoint_Execute() \
	void FRigUnit_MathVectorMakeBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FRigVMFourPointBezier& Bezier \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FRigVMFourPointBezier& Bezier \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathVectorMakeBezierFourPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
