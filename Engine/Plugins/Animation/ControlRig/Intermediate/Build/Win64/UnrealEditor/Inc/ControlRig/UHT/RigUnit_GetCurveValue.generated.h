// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetCurveValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetCurveValue_generated_h
#error "RigUnit_GetCurveValue.generated.h already included, missing '#pragma once' in RigUnit_GetCurveValue.h"
#endif
#define CONTROLRIG_RigUnit_GetCurveValue_generated_h


#define FRigUnit_GetCurveValue_Execute() \
	void FRigUnit_GetCurveValue::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Valid, \
		float& Value, \
		FCachedRigElement& CachedCurveIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Valid, \
		float& Value, \
		FCachedRigElement& CachedCurveIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Curve = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		float& Value = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedCurveIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Curve, \
			Valid, \
			Value, \
			CachedCurveIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetCurveValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
