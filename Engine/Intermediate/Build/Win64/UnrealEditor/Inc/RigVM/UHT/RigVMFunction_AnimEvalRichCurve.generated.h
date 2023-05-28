// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_AnimEvalRichCurve_generated_h
#error "RigVMFunction_AnimEvalRichCurve.generated.h already included, missing '#pragma once' in RigVMFunction_AnimEvalRichCurve.h"
#endif
#define RIGVM_RigVMFunction_AnimEvalRichCurve_generated_h


#define FRigVMFunction_AnimEvalRichCurve_Execute() \
	void FRigVMFunction_AnimEvalRichCurve::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const FRuntimeFloatCurve& Curve, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const FRuntimeFloatCurve& Curve, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRuntimeFloatCurve& Curve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[1].GetData(false); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Curve, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AnimEvalRichCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
