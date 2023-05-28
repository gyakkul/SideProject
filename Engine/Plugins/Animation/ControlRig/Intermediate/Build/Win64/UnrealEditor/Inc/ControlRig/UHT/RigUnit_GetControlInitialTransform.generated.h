// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetControlInitialTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetControlInitialTransform_generated_h
#error "RigUnit_GetControlInitialTransform.generated.h already included, missing '#pragma once' in RigUnit_GetControlInitialTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetControlInitialTransform_generated_h


#define FRigUnit_GetControlInitialTransform_Execute() \
	void FRigUnit_GetControlInitialTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlInitialTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Transform, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlInitialTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlInitialTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
