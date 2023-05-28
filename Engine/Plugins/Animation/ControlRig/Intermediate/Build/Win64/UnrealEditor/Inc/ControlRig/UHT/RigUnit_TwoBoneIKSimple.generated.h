// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TwoBoneIKSimple_generated_h
#error "RigUnit_TwoBoneIKSimple.generated.h already included, missing '#pragma once' in RigUnit_TwoBoneIKSimple.h"
#endif
#define CONTROLRIG_RigUnit_TwoBoneIKSimple_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKSimple_DebugSettings>();


#define FRigUnit_TwoBoneIKSimple_Execute() \
	void FRigUnit_TwoBoneIKSimple::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& BoneA, \
		const FName& BoneB, \
		const FName& EffectorBone, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float BoneALength, \
		const float BoneBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneAIndex, \
		FCachedRigElement& CachedBoneBIndex, \
		FCachedRigElement& CachedEffectorBoneIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& BoneA, \
		const FName& BoneB, \
		const FName& EffectorBone, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float BoneALength, \
		const float BoneBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneAIndex, \
		FCachedRigElement& CachedBoneBIndex, \
		FCachedRigElement& CachedEffectorBoneIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& BoneA = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& BoneB = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& EffectorBone = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& Effector = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[8].GetData(false); \
		const FName& PoleVectorSpace = *(FName*)RigVMMemoryHandles[9].GetData(false); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[10].GetData(false); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[12].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[13].GetData(false); \
		const float BoneALength = *(float*)RigVMMemoryHandles[14].GetData(false); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[15].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[16].GetData(false); \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings = *(FRigUnit_TwoBoneIKSimple_DebugSettings*)RigVMMemoryHandles[17].GetData(false); \
		FCachedRigElement& CachedBoneAIndex = *(FCachedRigElement*)RigVMMemoryHandles[18].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedBoneBIndex = *(FCachedRigElement*)RigVMMemoryHandles[19].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedEffectorBoneIndex = *(FCachedRigElement*)RigVMMemoryHandles[20].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedPoleVectorSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[21].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BoneA, \
			BoneB, \
			EffectorBone, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			PoleVector, \
			PoleVectorKind, \
			PoleVectorSpace, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			Weight, \
			BoneALength, \
			BoneBLength, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedBoneAIndex, \
			CachedBoneBIndex, \
			CachedEffectorBoneIndex, \
			CachedPoleVectorSpaceIndex \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKSimple>();


#define FRigUnit_TwoBoneIKSimplePerItem_Execute() \
	void FRigUnit_TwoBoneIKSimplePerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& EffectorItem, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FRigElementKey& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float ItemALength, \
		const float ItemBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItemAIndex, \
		FCachedRigElement& CachedItemBIndex, \
		FCachedRigElement& CachedEffectorItemIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& EffectorItem, \
		const FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const FVector& PoleVector, \
		const EControlRigVectorKind PoleVectorKind, \
		const FRigElementKey& PoleVectorSpace, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float Weight, \
		const float ItemALength, \
		const float ItemBLength, \
		const bool bPropagateToChildren, \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItemAIndex, \
		FCachedRigElement& CachedItemBIndex, \
		FCachedRigElement& CachedEffectorItemIndex, \
		FCachedRigElement& CachedPoleVectorSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& ItemA = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& ItemB = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& EffectorItem = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& Effector = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[8].GetData(false); \
		const FRigElementKey& PoleVectorSpace = *(FRigElementKey*)RigVMMemoryHandles[9].GetData(false); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[10].GetData(false); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[12].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[13].GetData(false); \
		const float ItemALength = *(float*)RigVMMemoryHandles[14].GetData(false); \
		const float ItemBLength = *(float*)RigVMMemoryHandles[15].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[16].GetData(false); \
		const FRigUnit_TwoBoneIKSimple_DebugSettings& DebugSettings = *(FRigUnit_TwoBoneIKSimple_DebugSettings*)RigVMMemoryHandles[17].GetData(false); \
		FCachedRigElement& CachedItemAIndex = *(FCachedRigElement*)RigVMMemoryHandles[18].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedItemBIndex = *(FCachedRigElement*)RigVMMemoryHandles[19].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedEffectorItemIndex = *(FCachedRigElement*)RigVMMemoryHandles[20].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedPoleVectorSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[21].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ItemA, \
			ItemB, \
			EffectorItem, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			PoleVector, \
			PoleVectorKind, \
			PoleVectorSpace, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			Weight, \
			ItemALength, \
			ItemBLength, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedItemAIndex, \
			CachedItemBIndex, \
			CachedEffectorItemIndex, \
			CachedPoleVectorSpaceIndex \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKSimplePerItem>();


#define FRigUnit_TwoBoneIKSimpleVectors_Execute() \
	void FRigUnit_TwoBoneIKSimpleVectors::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Root, \
		const FVector& PoleVector, \
		FVector& Effector, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FVector& Elbow \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_383_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Root, \
		const FVector& PoleVector, \
		FVector& Effector, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FVector& Elbow \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Root = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Effector = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const float BoneALength = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[7].GetData(false); \
		FVector& Elbow = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			PoleVector, \
			Effector, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			BoneALength, \
			BoneBLength, \
			Elbow \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKSimpleVectors>();


#define FRigUnit_TwoBoneIKSimpleTransforms_Execute() \
	void FRigUnit_TwoBoneIKSimpleTransforms::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Root, \
		const FVector& PoleVector, \
		FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FTransform& Elbow \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_461_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Root, \
		const FVector& PoleVector, \
		FTransform& Effector, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const float SecondaryAxisWeight, \
		const bool bEnableStretch, \
		const float StretchStartRatio, \
		const float StretchMaximumRatio, \
		const float BoneALength, \
		const float BoneBLength, \
		FTransform& Elbow \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FTransform& Root = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Effector = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const float SecondaryAxisWeight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnableStretch = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float StretchStartRatio = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float StretchMaximumRatio = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const float BoneALength = *(float*)RigVMMemoryHandles[9].GetData(false); \
		const float BoneBLength = *(float*)RigVMMemoryHandles[10].GetData(false); \
		FTransform& Elbow = *(FTransform*)RigVMMemoryHandles[11].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			PoleVector, \
			Effector, \
			PrimaryAxis, \
			SecondaryAxis, \
			SecondaryAxisWeight, \
			bEnableStretch, \
			StretchStartRatio, \
			StretchMaximumRatio, \
			BoneALength, \
			BoneBLength, \
			Elbow \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKSimpleTransforms>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
