// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathBool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathBool_generated_h
#error "RigVMFunction_MathBool.generated.h already included, missing '#pragma once' in RigVMFunction_MathBool.h"
#endif
#define RIGVM_RigVMFunction_MathBool_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolConstant>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolBinaryAggregateOp>();


#define FRigVMFunction_MathBoolMake_Execute() \
	void FRigVMFunction_MathBoolMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolMake>();


#define FRigVMFunction_MathBoolConstTrue_Execute() \
	void FRigVMFunction_MathBoolConstTrue::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolConstTrue>();


#define FRigVMFunction_MathBoolConstFalse_Execute() \
	void FRigVMFunction_MathBoolConstFalse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolConstant Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolConstFalse>();


#define FRigVMFunction_MathBoolNot_Execute() \
	void FRigVMFunction_MathBoolNot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolNot>();


#define FRigVMFunction_MathBoolAnd_Execute() \
	void FRigVMFunction_MathBoolAnd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolAnd>();


#define FRigVMFunction_MathBoolNand_Execute() \
	void FRigVMFunction_MathBoolNand::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolNand>();


#define FRigVMFunction_MathBoolNand2_Execute() \
	void FRigVMFunction_MathBoolNand2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolNand2>();


#define FRigVMFunction_MathBoolOr_Execute() \
	void FRigVMFunction_MathBoolOr::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolOr>();


#define FRigVMFunction_MathBoolEquals_Execute() \
	void FRigVMFunction_MathBoolEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolEquals>();


#define FRigVMFunction_MathBoolNotEquals_Execute() \
	void FRigVMFunction_MathBoolNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolNotEquals>();


#define FRigVMFunction_MathBoolToggled_Execute() \
	void FRigVMFunction_MathBoolToggled::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Toggled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Initialized = *(bool*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Toggled, \
			Initialized, \
			LastValue \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolToggled>();


#define FRigVMFunction_MathBoolFlipFlop_Execute() \
	void FRigVMFunction_MathBoolFlipFlop::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool StartValue = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			StartValue, \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolFlipFlop>();


#define FRigVMFunction_MathBoolOnce_Execute() \
	void FRigVMFunction_MathBoolOnce::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_332_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Duration = *(float*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolOnce>();


#define FRigVMFunction_MathBoolToFloat_Execute() \
	void FRigVMFunction_MathBoolToFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolToFloat>();


#define FRigVMFunction_MathBoolToInteger_Execute() \
	void FRigVMFunction_MathBoolToInteger::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoolToInteger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
