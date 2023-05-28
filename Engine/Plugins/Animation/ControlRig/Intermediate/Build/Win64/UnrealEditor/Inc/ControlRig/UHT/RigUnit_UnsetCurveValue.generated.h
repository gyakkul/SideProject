// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_UnsetCurveValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_UnsetCurveValue_generated_h
#error "RigUnit_UnsetCurveValue.generated.h already included, missing '#pragma once' in RigUnit_UnsetCurveValue.h"
#endif
#define CONTROLRIG_RigUnit_UnsetCurveValue_generated_h


#define FRigUnit_UnsetCurveValue_Execute() \
	void FRigUnit_UnsetCurveValue::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		FCachedRigElement& CachedCurveIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		FCachedRigElement& CachedCurveIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Curve = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FCachedRigElement& CachedCurveIndex = *(FCachedRigElement*)RigVMMemoryHandles[1].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Curve, \
			CachedCurveIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_UnsetCurveValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
