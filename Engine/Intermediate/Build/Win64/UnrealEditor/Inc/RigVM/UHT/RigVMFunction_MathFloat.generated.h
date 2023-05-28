// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathFloat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathFloat_generated_h
#error "RigVMFunction_MathFloat.generated.h already included, missing '#pragma once' in RigVMFunction_MathFloat.h"
#endif
#define RIGVM_RigVMFunction_MathFloat_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatConstant>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatBinaryAggregateOp>();


#define FRigVMFunction_MathFloatMake_Execute() \
	void FRigVMFunction_MathFloatMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatMake>();


#define FRigVMFunction_MathFloatConstPi_Execute() \
	void FRigVMFunction_MathFloatConstPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatConstPi>();


#define FRigVMFunction_MathFloatConstHalfPi_Execute() \
	void FRigVMFunction_MathFloatConstHalfPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstHalfPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatConstHalfPi>();


#define FRigVMFunction_MathFloatConstTwoPi_Execute() \
	void FRigVMFunction_MathFloatConstTwoPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstTwoPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatConstTwoPi>();


#define FRigVMFunction_MathFloatConstE_Execute() \
	void FRigVMFunction_MathFloatConstE::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstE_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatConstE>();


#define FRigVMFunction_MathFloatAdd_Execute() \
	void FRigVMFunction_MathFloatAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatAdd>();


#define FRigVMFunction_MathFloatSub_Execute() \
	void FRigVMFunction_MathFloatSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatSub>();


#define FRigVMFunction_MathFloatMul_Execute() \
	void FRigVMFunction_MathFloatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatMul>();


#define FRigVMFunction_MathFloatDiv_Execute() \
	void FRigVMFunction_MathFloatDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatDiv>();


#define FRigVMFunction_MathFloatMod_Execute() \
	void FRigVMFunction_MathFloatMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatMod>();


#define FRigVMFunction_MathFloatMin_Execute() \
	void FRigVMFunction_MathFloatMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatMin>();


#define FRigVMFunction_MathFloatMax_Execute() \
	void FRigVMFunction_MathFloatMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatMax>();


#define FRigVMFunction_MathFloatPow_Execute() \
	void FRigVMFunction_MathFloatPow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatPow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatPow>();


#define FRigVMFunction_MathFloatSqrt_Execute() \
	void FRigVMFunction_MathFloatSqrt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_278_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSqrt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatSqrt>();


#define FRigVMFunction_MathFloatNegate_Execute() \
	void FRigVMFunction_MathFloatNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatNegate>();


#define FRigVMFunction_MathFloatAbs_Execute() \
	void FRigVMFunction_MathFloatAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatAbs>();


#define FRigVMFunction_MathFloatFloor_Execute() \
	void FRigVMFunction_MathFloatFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_314_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatFloor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatFloor>();


#define FRigVMFunction_MathFloatCeil_Execute() \
	void FRigVMFunction_MathFloatCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_341_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCeil_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatCeil>();


#define FRigVMFunction_MathFloatRound_Execute() \
	void FRigVMFunction_MathFloatRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRound_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatRound>();


#define FRigVMFunction_MathFloatToInt_Execute() \
	void FRigVMFunction_MathFloatToInt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatToInt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatToInt>();


#define FRigVMFunction_MathFloatSign_Execute() \
	void FRigVMFunction_MathFloatSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatSign>();


#define FRigVMFunction_MathFloatClamp_Execute() \
	void FRigVMFunction_MathFloatClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Minimum, \
		const float Maximum, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_431_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Minimum, \
		const float Maximum, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatClamp>();


#define FRigVMFunction_MathFloatLerp_Execute() \
	void FRigVMFunction_MathFloatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float T, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_460_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float T, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatLerp>();


#define FRigVMFunction_MathFloatRemap_Execute() \
	void FRigVMFunction_MathFloatRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		const bool bClamp, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRemap_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		const bool bClamp, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetData(false); \
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
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatRemap>();


#define FRigVMFunction_MathFloatEquals_Execute() \
	void FRigVMFunction_MathFloatEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_531_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatEquals>();


#define FRigVMFunction_MathFloatNotEquals_Execute() \
	void FRigVMFunction_MathFloatNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_560_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatNotEquals>();


#define FRigVMFunction_MathFloatGreater_Execute() \
	void FRigVMFunction_MathFloatGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_589_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreater_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatGreater>();


#define FRigVMFunction_MathFloatLess_Execute() \
	void FRigVMFunction_MathFloatLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_616_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatLess>();


#define FRigVMFunction_MathFloatGreaterEqual_Execute() \
	void FRigVMFunction_MathFloatGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_643_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreaterEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatGreaterEqual>();


#define FRigVMFunction_MathFloatLessEqual_Execute() \
	void FRigVMFunction_MathFloatLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_670_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLessEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatLessEqual>();


#define FRigVMFunction_MathFloatIsNearlyZero_Execute() \
	void FRigVMFunction_MathFloatIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_697_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyZero_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
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
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatIsNearlyZero>();


#define FRigVMFunction_MathFloatIsNearlyEqual_Execute() \
	void FRigVMFunction_MathFloatIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_724_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatIsNearlyEqual>();


#define FRigVMFunction_MathFloatSelectBool_Execute() \
	void FRigVMFunction_MathFloatSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const float IfTrue, \
		const float IfFalse, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_754_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const float IfTrue, \
		const float IfFalse, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const float IfTrue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float IfFalse = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatSelectBool>();


#define FRigVMFunction_MathFloatDeg_Execute() \
	void FRigVMFunction_MathFloatDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_787_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDeg_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatDeg>();


#define FRigVMFunction_MathFloatRad_Execute() \
	void FRigVMFunction_MathFloatRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_799_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRad_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatRad>();


#define FRigVMFunction_MathFloatSin_Execute() \
	void FRigVMFunction_MathFloatSin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_811_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatSin>();


#define FRigVMFunction_MathFloatCos_Execute() \
	void FRigVMFunction_MathFloatCos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_823_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatCos>();


#define FRigVMFunction_MathFloatTan_Execute() \
	void FRigVMFunction_MathFloatTan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_835_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatTan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatTan>();


#define FRigVMFunction_MathFloatAsin_Execute() \
	void FRigVMFunction_MathFloatAsin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_847_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAsin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatAsin>();


#define FRigVMFunction_MathFloatAcos_Execute() \
	void FRigVMFunction_MathFloatAcos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_859_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAcos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatAcos>();


#define FRigVMFunction_MathFloatAtan_Execute() \
	void FRigVMFunction_MathFloatAtan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_871_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAtan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatAtan>();


#define FRigVMFunction_MathFloatLawOfCosine_Execute() \
	void FRigVMFunction_MathFloatLawOfCosine::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float C, \
		float& AlphaAngle, \
		float& BetaAngle, \
		float& GammaAngle, \
		bool& bValid \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_883_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLawOfCosine_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float C, \
		float& AlphaAngle, \
		float& BetaAngle, \
		float& GammaAngle, \
		bool& bValid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float C = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& AlphaAngle = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& BetaAngle = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& GammaAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
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
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatLawOfCosine>();


#define FRigVMFunction_MathFloatExponential_Execute() \
	void FRigVMFunction_MathFloatExponential::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_922_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatExponential_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatExponential>();


#define FRigVMFunction_MathFloatArraySum_Execute() \
	void FRigVMFunction_MathFloatArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Sum \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_934_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArraySum_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<float>& Array = *(TArray<float>*)RigVMMemoryHandles[0].GetData(false); \
		float& Sum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatArraySum>();


#define FRigVMFunction_MathFloatArrayAverage_Execute() \
	void FRigVMFunction_MathFloatArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Average \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_958_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArrayAverage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<float>& Array = *(TArray<float>*)RigVMMemoryHandles[0].GetData(false); \
		float& Average = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathFloatArrayAverage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
