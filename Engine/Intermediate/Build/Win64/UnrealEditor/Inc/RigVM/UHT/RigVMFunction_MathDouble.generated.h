// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathDouble.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathDouble_generated_h
#error "RigVMFunction_MathDouble.generated.h already included, missing '#pragma once' in RigVMFunction_MathDouble.h"
#endif
#define RIGVM_RigVMFunction_MathDouble_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleConstant>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleBinaryAggregateOp>();


#define FRigVMFunction_MathDoubleMake_Execute() \
	void FRigVMFunction_MathDoubleMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleMake>();


#define FRigVMFunction_MathDoubleConstPi_Execute() \
	void FRigVMFunction_MathDoubleConstPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleConstPi>();


#define FRigVMFunction_MathDoubleConstHalfPi_Execute() \
	void FRigVMFunction_MathDoubleConstHalfPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstHalfPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleConstHalfPi>();


#define FRigVMFunction_MathDoubleConstTwoPi_Execute() \
	void FRigVMFunction_MathDoubleConstTwoPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstTwoPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleConstTwoPi>();


#define FRigVMFunction_MathDoubleConstE_Execute() \
	void FRigVMFunction_MathDoubleConstE::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstE_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleConstE>();


#define FRigVMFunction_MathDoubleAdd_Execute() \
	void FRigVMFunction_MathDoubleAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleAdd>();


#define FRigVMFunction_MathDoubleSub_Execute() \
	void FRigVMFunction_MathDoubleSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleSub>();


#define FRigVMFunction_MathDoubleMul_Execute() \
	void FRigVMFunction_MathDoubleMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleMul>();


#define FRigVMFunction_MathDoubleDiv_Execute() \
	void FRigVMFunction_MathDoubleDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleDiv>();


#define FRigVMFunction_MathDoubleMod_Execute() \
	void FRigVMFunction_MathDoubleMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleMod>();


#define FRigVMFunction_MathDoubleMin_Execute() \
	void FRigVMFunction_MathDoubleMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleMin>();


#define FRigVMFunction_MathDoubleMax_Execute() \
	void FRigVMFunction_MathDoubleMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleMax>();


#define FRigVMFunction_MathDoublePow_Execute() \
	void FRigVMFunction_MathDoublePow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoublePow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoublePow>();


#define FRigVMFunction_MathDoubleSqrt_Execute() \
	void FRigVMFunction_MathDoubleSqrt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSqrt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleSqrt>();


#define FRigVMFunction_MathDoubleNegate_Execute() \
	void FRigVMFunction_MathDoubleNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleNegate>();


#define FRigVMFunction_MathDoubleAbs_Execute() \
	void FRigVMFunction_MathDoubleAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleAbs>();


#define FRigVMFunction_MathDoubleFloor_Execute() \
	void FRigVMFunction_MathDoubleFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_315_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleFloor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleFloor>();


#define FRigVMFunction_MathDoubleCeil_Execute() \
	void FRigVMFunction_MathDoubleCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_342_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCeil_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleCeil>();


#define FRigVMFunction_MathDoubleRound_Execute() \
	void FRigVMFunction_MathDoubleRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_369_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRound_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleRound>();


#define FRigVMFunction_MathDoubleToInt_Execute() \
	void FRigVMFunction_MathDoubleToInt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_396_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleToInt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleToInt>();


#define FRigVMFunction_MathDoubleSign_Execute() \
	void FRigVMFunction_MathDoubleSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_420_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleSign>();


#define FRigVMFunction_MathDoubleClamp_Execute() \
	void FRigVMFunction_MathDoubleClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_432_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double Minimum = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleClamp>();


#define FRigVMFunction_MathDoubleLerp_Execute() \
	void FRigVMFunction_MathDoubleLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_461_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double T = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleLerp>();


#define FRigVMFunction_MathDoubleRemap_Execute() \
	void FRigVMFunction_MathDoubleRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_491_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRemap_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double SourceMinimum = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double SourceMaximum = *(double*)RigVMMemoryHandles[2].GetData(false); \
		const double TargetMinimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double TargetMaximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[6].GetData(false); \
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
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleRemap>();


#define FRigVMFunction_MathDoubleEquals_Execute() \
	void FRigVMFunction_MathDoubleEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleEquals>();


#define FRigVMFunction_MathDoubleNotEquals_Execute() \
	void FRigVMFunction_MathDoubleNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_561_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleNotEquals>();


#define FRigVMFunction_MathDoubleGreater_Execute() \
	void FRigVMFunction_MathDoubleGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_590_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreater_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleGreater>();


#define FRigVMFunction_MathDoubleLess_Execute() \
	void FRigVMFunction_MathDoubleLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_617_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleLess>();


#define FRigVMFunction_MathDoubleGreaterEqual_Execute() \
	void FRigVMFunction_MathDoubleGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_644_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreaterEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleGreaterEqual>();


#define FRigVMFunction_MathDoubleLessEqual_Execute() \
	void FRigVMFunction_MathDoubleLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_671_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLessEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleLessEqual>();


#define FRigVMFunction_MathDoubleIsNearlyZero_Execute() \
	void FRigVMFunction_MathDoubleIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_698_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyZero_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double Tolerance = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleIsNearlyZero>();


#define FRigVMFunction_MathDoubleIsNearlyEqual_Execute() \
	void FRigVMFunction_MathDoubleIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_725_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Tolerance = *(double*)RigVMMemoryHandles[2].GetData(false); \
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
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleIsNearlyEqual>();


#define FRigVMFunction_MathDoubleDeg_Execute() \
	void FRigVMFunction_MathDoubleDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_755_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDeg_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleDeg>();


#define FRigVMFunction_MathDoubleRad_Execute() \
	void FRigVMFunction_MathDoubleRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_767_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRad_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleRad>();


#define FRigVMFunction_MathDoubleSin_Execute() \
	void FRigVMFunction_MathDoubleSin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_779_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleSin>();


#define FRigVMFunction_MathDoubleCos_Execute() \
	void FRigVMFunction_MathDoubleCos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_791_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleCos>();


#define FRigVMFunction_MathDoubleTan_Execute() \
	void FRigVMFunction_MathDoubleTan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_803_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleTan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleTan>();


#define FRigVMFunction_MathDoubleAsin_Execute() \
	void FRigVMFunction_MathDoubleAsin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_815_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAsin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleAsin>();


#define FRigVMFunction_MathDoubleAcos_Execute() \
	void FRigVMFunction_MathDoubleAcos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_827_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAcos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleAcos>();


#define FRigVMFunction_MathDoubleAtan_Execute() \
	void FRigVMFunction_MathDoubleAtan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_839_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAtan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleAtan>();


#define FRigVMFunction_MathDoubleLawOfCosine_Execute() \
	void FRigVMFunction_MathDoubleLawOfCosine::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_851_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLawOfCosine_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double C = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& AlphaAngle = *(double*)RigVMMemoryHandles[3].GetData(false); \
		double& BetaAngle = *(double*)RigVMMemoryHandles[4].GetData(false); \
		double& GammaAngle = *(double*)RigVMMemoryHandles[5].GetData(false); \
		bool& bValid = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			C, \
			AlphaAngle, \
			BetaAngle, \
			GammaAngle, \
			bValid \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleLawOfCosine>();


#define FRigVMFunction_MathDoubleExponential_Execute() \
	void FRigVMFunction_MathDoubleExponential::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_890_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleExponential_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleExponential>();


#define FRigVMFunction_MathDoubleArraySum_Execute() \
	void FRigVMFunction_MathDoubleArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Sum \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_902_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArraySum_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<double>& Array = *(TArray<double>*)RigVMMemoryHandles[0].GetData(false); \
		double& Sum = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleArraySum>();


#define FRigVMFunction_MathDoubleArrayAverage_Execute() \
	void FRigVMFunction_MathDoubleArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Average \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_926_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<double>& Array = *(TArray<double>*)RigVMMemoryHandles[0].GetData(false); \
		double& Average = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathDoubleArrayAverage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
