// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_CCDIK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_CCDIK_generated_h
#error "RigUnit_CCDIK.generated.h already included, missing '#pragma once' in RigUnit_CCDIK.h"
#endif
#define CONTROLRIG_RigUnit_CCDIK_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIK_RotationLimit>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIK_RotationLimitPerItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIK_WorkData>();


#define FRigUnit_CCDIK_Execute() \
	void FRigUnit_CCDIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimit>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EffectorBone, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimit>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EffectorBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[7].GetData(false); \
		TArray<FRigUnit_CCDIK_RotationLimit>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimit>*)RigVMMemoryHandles[8].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EffectorBone, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIK>();


#define FRigUnit_CCDIKPerItem_Execute() \
	void FRigUnit_CCDIKPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetData(false); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[6].GetData(false); \
		TArray<FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimitPerItem>*)RigVMMemoryHandles[7].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIKPerItem>();


#define FRigUnit_CCDIKItemArray_Execute() \
	void FRigUnit_CCDIKItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_271_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FTransform& EffectorTransform, \
		const float Precision, \
		const float Weight, \
		const int32 MaxIterations, \
		const bool bStartFromTail, \
		const float BaseRotationLimit, \
		const TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits, \
		const bool bPropagateToChildren, \
		FRigUnit_CCDIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& EffectorTransform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetData(false); \
		const bool bStartFromTail = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		const float BaseRotationLimit = *(float*)RigVMMemoryHandles[6].GetData(false); \
		TArray<FRigUnit_CCDIK_RotationLimitPerItem>& RotationLimits = *(TArray<FRigUnit_CCDIK_RotationLimitPerItem>*)RigVMMemoryHandles[7].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		FRigUnit_CCDIK_WorkData& WorkData = *(FRigUnit_CCDIK_WorkData*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			EffectorTransform, \
			Precision, \
			Weight, \
			MaxIterations, \
			bStartFromTail, \
			BaseRotationLimit, \
			RotationLimits, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CCDIKItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
