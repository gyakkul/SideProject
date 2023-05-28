// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_BlendTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_BlendTransform_generated_h
#error "RigUnit_BlendTransform.generated.h already included, missing '#pragma once' in RigUnit_BlendTransform.h"
#endif
#define CONTROLRIG_RigUnit_BlendTransform_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FBlendTarget>();


#define FRigUnit_BlendTransform_Execute() \
	void FRigUnit_BlendTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Source, \
		const TArrayView<const FBlendTarget>& Targets, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Source, \
		const TArrayView<const FBlendTarget>& Targets, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Source = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FBlendTarget>& Targets = *(TArray<FBlendTarget>*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Source, \
			Targets, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BlendTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
