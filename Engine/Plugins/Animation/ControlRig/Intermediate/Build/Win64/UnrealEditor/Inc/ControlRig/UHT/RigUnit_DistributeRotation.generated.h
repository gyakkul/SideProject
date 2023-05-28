// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DistributeRotation_generated_h
#error "RigUnit_DistributeRotation.generated.h already included, missing '#pragma once' in RigUnit_DistributeRotation.h"
#endif
#define CONTROLRIG_RigUnit_DistributeRotation_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DistributeRotation_Rotation>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DistributeRotation_WorkData>();


#define FRigUnit_DistributeRotation_Execute() \
	void FRigUnit_DistributeRotation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DistributeRotation>();


#define FRigUnit_DistributeRotationForCollection_Execute() \
	void FRigUnit_DistributeRotationForCollection::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DistributeRotationForCollection>();


#define FRigUnit_DistributeRotationForItemArray_Execute() \
	void FRigUnit_DistributeRotationForItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FRigUnit_DistributeRotation_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		FRigUnit_DistributeRotation_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigUnit_DistributeRotation_Rotation>& Rotations = *(TArray<FRigUnit_DistributeRotation_Rotation>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FRigUnit_DistributeRotation_WorkData& WorkData = *(FRigUnit_DistributeRotation_WorkData*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DistributeRotationForItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
