// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h
#error "RigUnit_SetSpaceInitialTransform.generated.h already included, missing '#pragma once' in RigUnit_SetSpaceInitialTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h


#define FRigUnit_SetSpaceInitialTransform_Execute() \
	void FRigUnit_SetSpaceInitialTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& SpaceName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SpaceName, \
			Transform, \
			Result, \
			Space, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetSpaceInitialTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
