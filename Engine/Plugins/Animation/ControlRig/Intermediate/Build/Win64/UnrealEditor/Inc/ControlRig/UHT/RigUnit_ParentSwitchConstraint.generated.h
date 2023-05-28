// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ParentSwitchConstraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ParentSwitchConstraint_generated_h
#error "RigUnit_ParentSwitchConstraint.generated.h already included, missing '#pragma once' in RigUnit_ParentSwitchConstraint.h"
#endif
#define CONTROLRIG_RigUnit_ParentSwitchConstraint_generated_h


#define FRigUnit_ParentSwitchConstraint_Execute() \
	void FRigUnit_ParentSwitchConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const FRigElementKeyCollection& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const FRigElementKeyCollection& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Subject = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const int32 ParentIndex = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& InitialGlobalTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		bool& Switched = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FCachedRigElement& CachedSubject = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& RelativeOffset = *(FTransform*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Subject, \
			ParentIndex, \
			Parents, \
			InitialGlobalTransform, \
			Weight, \
			Transform, \
			Switched, \
			CachedSubject, \
			CachedParent, \
			RelativeOffset \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ParentSwitchConstraint>();


#define FRigUnit_ParentSwitchConstraintArray_Execute() \
	void FRigUnit_ParentSwitchConstraintArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const TArrayView<const FRigElementKey>& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Subject, \
		const int32 ParentIndex, \
		const TArrayView<const FRigElementKey>& Parents, \
		const FTransform& InitialGlobalTransform, \
		const float Weight, \
		FTransform& Transform, \
		bool& Switched, \
		FCachedRigElement& CachedSubject, \
		FCachedRigElement& CachedParent, \
		FTransform& RelativeOffset \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Subject = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const int32 ParentIndex = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& InitialGlobalTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		bool& Switched = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FCachedRigElement& CachedSubject = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& RelativeOffset = *(FTransform*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Subject, \
			ParentIndex, \
			Parents, \
			InitialGlobalTransform, \
			Weight, \
			Transform, \
			Switched, \
			CachedSubject, \
			CachedParent, \
			RelativeOffset \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ParentSwitchConstraintArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
