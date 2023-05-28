// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetSpaceTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetSpaceTransform_generated_h
#error "RigUnit_GetSpaceTransform.generated.h already included, missing '#pragma once' in RigUnit_GetSpaceTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetSpaceTransform_generated_h


#define FRigUnit_GetSpaceTransform_Execute() \
	void FRigUnit_GetSpaceTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const ERigVMTransformSpace SpaceType, \
		FTransform& Transform, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetSpaceTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetSpaceTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const ERigVMTransformSpace SpaceType, \
		FTransform& Transform, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Space = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace SpaceType = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Space, \
			SpaceType, \
			Transform, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetSpaceTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetSpaceTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
