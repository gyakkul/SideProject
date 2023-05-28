// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetRelativeTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetRelativeTransform_generated_h
#error "RigUnit_SetRelativeTransform.generated.h already included, missing '#pragma once' in RigUnit_SetRelativeTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetRelativeTransform_generated_h


#define FRigUnit_SetRelativeTransformForItem_Execute() \
	void FRigUnit_SetRelativeTransformForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRelativeTransformForItem>();


#define FRigUnit_SetRelativeTranslationForItem_Execute() \
	void FRigUnit_SetRelativeTranslationForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRelativeTranslationForItem>();


#define FRigUnit_SetRelativeRotationForItem_Execute() \
	void FRigUnit_SetRelativeRotationForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			bParentInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRelativeRotationForItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
