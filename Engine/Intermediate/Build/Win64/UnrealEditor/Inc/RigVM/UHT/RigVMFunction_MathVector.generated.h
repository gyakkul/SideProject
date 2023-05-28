// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathVector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathVector_generated_h
#error "RigVMFunction_MathVector.generated.h already included, missing '#pragma once' in RigVMFunction_MathVector.h"
#endif
#define RIGVM_RigVMFunction_MathVector_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorBinaryAggregateOp>();


#define FRigVMFunction_MathVectorMake_Execute() \
	void FRigVMFunction_MathVectorMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float X = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Y = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Z = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			X, \
			Y, \
			Z, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMake>();


#define FRigVMFunction_MathVectorFromFloat_Execute() \
	void FRigVMFunction_MathVectorFromFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorFromFloat>();


#define FRigVMFunction_MathVectorFromDouble_Execute() \
	void FRigVMFunction_MathVectorFromDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFromDouble_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorFromDouble>();


#define FRigVMFunction_MathVectorAdd_Execute() \
	void FRigVMFunction_MathVectorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorAdd>();


#define FRigVMFunction_MathVectorSub_Execute() \
	void FRigVMFunction_MathVectorSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorSub>();


#define FRigVMFunction_MathVectorMul_Execute() \
	void FRigVMFunction_MathVectorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMul>();


#define FRigVMFunction_MathVectorScale_Execute() \
	void FRigVMFunction_MathVectorScale::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Factor, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorScale_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Factor, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Factor = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Factor, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorScale>();


#define FRigVMFunction_MathVectorDiv_Execute() \
	void FRigVMFunction_MathVectorDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorDiv>();


#define FRigVMFunction_MathVectorMod_Execute() \
	void FRigVMFunction_MathVectorMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMod>();


#define FRigVMFunction_MathVectorMin_Execute() \
	void FRigVMFunction_MathVectorMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMin>();


#define FRigVMFunction_MathVectorMax_Execute() \
	void FRigVMFunction_MathVectorMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMax>();


#define FRigVMFunction_MathVectorNegate_Execute() \
	void FRigVMFunction_MathVectorNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorNegate>();


#define FRigVMFunction_MathVectorAbs_Execute() \
	void FRigVMFunction_MathVectorAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorAbs>();


#define FRigVMFunction_MathVectorFloor_Execute() \
	void FRigVMFunction_MathVectorFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_304_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorFloor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorFloor>();


#define FRigVMFunction_MathVectorCeil_Execute() \
	void FRigVMFunction_MathVectorCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCeil_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorCeil>();


#define FRigVMFunction_MathVectorRound_Execute() \
	void FRigVMFunction_MathVectorRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRound_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorRound>();


#define FRigVMFunction_MathVectorSign_Execute() \
	void FRigVMFunction_MathVectorSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorSign>();


#define FRigVMFunction_MathVectorClamp_Execute() \
	void FRigVMFunction_MathVectorClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Minimum, \
		const FVector& Maximum, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_352_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Minimum, \
		const FVector& Maximum, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Minimum = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Maximum = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorClamp>();


#define FRigVMFunction_MathVectorLerp_Execute() \
	void FRigVMFunction_MathVectorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float T, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float T, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorLerp>();


#define FRigVMFunction_MathVectorRemap_Execute() \
	void FRigVMFunction_MathVectorRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& SourceMinimum, \
		const FVector& SourceMaximum, \
		const FVector& TargetMinimum, \
		const FVector& TargetMaximum, \
		const bool bClamp, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_413_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRemap_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& SourceMinimum, \
		const FVector& SourceMaximum, \
		const FVector& TargetMinimum, \
		const FVector& TargetMaximum, \
		const bool bClamp, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& SourceMinimum = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& SourceMaximum = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& TargetMinimum = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& TargetMaximum = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			bClamp, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorRemap>();


#define FRigVMFunction_MathVectorEquals_Execute() \
	void FRigVMFunction_MathVectorEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_454_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorEquals>();


#define FRigVMFunction_MathVectorNotEquals_Execute() \
	void FRigVMFunction_MathVectorNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_484_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorNotEquals>();


#define FRigVMFunction_MathVectorIsNearlyZero_Execute() \
	void FRigVMFunction_MathVectorIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_514_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyZero_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Tolerance = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorIsNearlyZero>();


#define FRigVMFunction_MathVectorIsNearlyEqual_Execute() \
	void FRigVMFunction_MathVectorIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_542_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorIsNearlyEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Tolerance = *(float*)RigVMMemoryHandles[2].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorIsNearlyEqual>();


#define FRigVMFunction_MathVectorSelectBool_Execute() \
	void FRigVMFunction_MathVectorSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FVector& IfTrue, \
		const FVector& IfFalse, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_573_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FVector& IfTrue, \
		const FVector& IfFalse, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& IfTrue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& IfFalse = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorSelectBool>();


#define FRigVMFunction_MathVectorDeg_Execute() \
	void FRigVMFunction_MathVectorDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_606_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDeg_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorDeg>();


#define FRigVMFunction_MathVectorRad_Execute() \
	void FRigVMFunction_MathVectorRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_618_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRad_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorRad>();


#define FRigVMFunction_MathVectorLengthSquared_Execute() \
	void FRigVMFunction_MathVectorLengthSquared::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_630_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLengthSquared_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorLengthSquared>();


#define FRigVMFunction_MathVectorLength_Execute() \
	void FRigVMFunction_MathVectorLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_654_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorLength>();


#define FRigVMFunction_MathVectorDistance_Execute() \
	void FRigVMFunction_MathVectorDistance::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_678_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDistance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorDistance>();


#define FRigVMFunction_MathVectorCross_Execute() \
	void FRigVMFunction_MathVectorCross::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_705_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCross_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorCross>();


#define FRigVMFunction_MathVectorDot_Execute() \
	void FRigVMFunction_MathVectorDot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_716_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorDot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorDot>();


#define FRigVMFunction_MathVectorUnit_Execute() \
	void FRigVMFunction_MathVectorUnit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_743_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorUnit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorUnit>();


#define FRigVMFunction_MathVectorSetLength_Execute() \
	void FRigVMFunction_MathVectorSetLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Length, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_755_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorSetLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Length, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Length = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Length, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorSetLength>();


#define FRigVMFunction_MathVectorClampLength_Execute() \
	void FRigVMFunction_MathVectorClampLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float MinimumLength, \
		const float MaximumLength, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_782_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float MinimumLength, \
		const float MaximumLength, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float MinimumLength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaximumLength = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			MinimumLength, \
			MaximumLength, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorClampLength>();


#define FRigVMFunction_MathVectorMirror_Execute() \
	void FRigVMFunction_MathVectorMirror::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Normal, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_814_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirror_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Normal, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Normal = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Normal, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMirror>();


#define FRigVMFunction_MathVectorAngle_Execute() \
	void FRigVMFunction_MathVectorAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_841_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorAngle>();


#define FRigVMFunction_MathVectorParallel_Execute() \
	void FRigVMFunction_MathVectorParallel::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_868_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorParallel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorParallel>();


#define FRigVMFunction_MathVectorOrthogonal_Execute() \
	void FRigVMFunction_MathVectorOrthogonal::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_895_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorOrthogonal_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorOrthogonal>();


#define FRigVMFunction_MathVectorBezierFourPoint_Execute() \
	void FRigVMFunction_MathVectorBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float T, \
		FVector& Result, \
		FVector& Tangent \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_923_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBezierFourPoint_Statics; \
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


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorBezierFourPoint>();


#define FRigVMFunction_MathVectorMakeBezierFourPoint_Execute() \
	void FRigVMFunction_MathVectorMakeBezierFourPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FRigVMFourPointBezier& Bezier \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_957_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeBezierFourPoint_Statics; \
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


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMakeBezierFourPoint>();


#define FRigVMFunction_MathVectorClampSpatially_Execute() \
	void FRigVMFunction_MathVectorClampSpatially::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_980_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampSpatially_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type = *(TEnumAsByte<ERigVMClampSpatialMode::Type>*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& Space = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[7].GetData(false); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[8].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Axis, \
			Type, \
			Minimum, \
			Maximum, \
			Space, \
			bDrawDebug, \
			DebugColor, \
			DebugThickness, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorClampSpatially>();


#define FRigVMFunction_MathIntersectPlane_Execute() \
	void FRigVMFunction_MathIntersectPlane::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& Direction, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1037_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntersectPlane_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& Direction, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Direction = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& PlanePoint = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& PlaneNormal = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		float& Distance = *(float*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Start, \
			Direction, \
			PlanePoint, \
			PlaneNormal, \
			Result, \
			Distance \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntersectPlane>();


#define FRigVMFunction_MathDistanceToPlane_Execute() \
	void FRigVMFunction_MathDistanceToPlane::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Point, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& ClosestPointOnPlane, \
		float& SignedDistance \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1074_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDistanceToPlane_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Point, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& ClosestPointOnPlane, \
		float& SignedDistance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Point = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& PlanePoint = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& PlaneNormal = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& ClosestPointOnPlane = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		float& SignedDistance = *(float*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Point, \
			PlanePoint, \
			PlaneNormal, \
			ClosestPointOnPlane, \
			SignedDistance \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDistanceToPlane>();


#define FRigVMFunction_MathVectorMakeRelative_Execute() \
	void FRigVMFunction_MathVectorMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Global, \
		const FVector& Parent, \
		FVector& Local \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeRelative_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Global, \
		const FVector& Parent, \
		FVector& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Global = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Parent = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Local = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMakeRelative>();


#define FRigVMFunction_MathVectorMakeAbsolute_Execute() \
	void FRigVMFunction_MathVectorMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Local, \
		const FVector& Parent, \
		FVector& Global \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMakeAbsolute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Local, \
		const FVector& Parent, \
		FVector& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Local = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Parent = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Global = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMakeAbsolute>();


#define FRigVMFunction_MathVectorMirrorTransform_Execute() \
	void FRigVMFunction_MathVectorMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorMirrorTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			MirrorAxis, \
			AxisToFlip, \
			CentralTransform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorMirrorTransform>();


#define FRigVMFunction_MathVectorArraySum_Execute() \
	void FRigVMFunction_MathVectorArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Sum \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArraySum_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Sum = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorArraySum>();


#define FRigVMFunction_MathVectorArrayAverage_Execute() \
	void FRigVMFunction_MathVectorArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Average \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h_1223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArrayAverage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FVector& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Average = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathVectorArrayAverage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
