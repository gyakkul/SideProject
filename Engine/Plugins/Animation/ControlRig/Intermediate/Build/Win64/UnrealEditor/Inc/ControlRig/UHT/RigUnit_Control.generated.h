// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Control/RigUnit_Control.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Control_generated_h
#error "RigUnit_Control.generated.h already included, missing '#pragma once' in RigUnit_Control.h"
#endif
#define CONTROLRIG_RigUnit_Control_generated_h


#define FRigUnit_Control_Execute() \
	void FRigUnit_Control::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FEulerTransform& Transform, \
		const FTransform& Base, \
		const FTransform& InitTransform, \
		FTransform& Result, \
		const FTransformFilter& Filter, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Control_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FEulerTransform& Transform, \
		const FTransform& Base, \
		const FTransform& InitTransform, \
		FTransform& Result, \
		const FTransformFilter& Filter, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FEulerTransform& Transform = *(FEulerTransform*)RigVMMemoryHandles[0].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		const FTransform& Base = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& InitTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const FTransformFilter& Filter = *(FTransformFilter*)RigVMMemoryHandles[4].GetData(false); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Base, \
			InitTransform, \
			Result, \
			Filter, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Control>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
