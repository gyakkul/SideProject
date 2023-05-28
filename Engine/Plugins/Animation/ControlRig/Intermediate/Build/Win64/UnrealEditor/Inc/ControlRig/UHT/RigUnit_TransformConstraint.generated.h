// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TransformConstraint_generated_h
#error "RigUnit_TransformConstraint.generated.h already included, missing '#pragma once' in RigUnit_TransformConstraint.h"
#endif
#define CONTROLRIG_RigUnit_TransformConstraint_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FConstraintTarget>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TransformConstraint_WorkData>();


#define FRigUnit_TransformConstraint_Execute() \
	void FRigUnit_TransformConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseBone, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseBone, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ETransformSpaceMode BaseTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const FName& BaseBone = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FConstraintTarget>& Targets = *(TArray<FConstraintTarget>*)RigVMMemoryHandles[4].GetData(false); \
		const bool bUseInitialTransforms = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_TransformConstraint_WorkData& WorkData = *(FRigUnit_TransformConstraint_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			BaseTransformSpace, \
			BaseTransform, \
			BaseBone, \
			Targets, \
			bUseInitialTransforms, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TransformConstraint>();


#define FRigUnit_TransformConstraintPerItem_Execute() \
	void FRigUnit_TransformConstraintPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FRigElementKey& BaseItem, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ETransformSpaceMode BaseTransformSpace, \
		const FTransform& BaseTransform, \
		const FRigElementKey& BaseItem, \
		const TArrayView<const FConstraintTarget>& Targets, \
		const bool bUseInitialTransforms, \
		FRigUnit_TransformConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ETransformSpaceMode BaseTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& BaseItem = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FConstraintTarget>& Targets = *(TArray<FConstraintTarget>*)RigVMMemoryHandles[4].GetData(false); \
		const bool bUseInitialTransforms = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_TransformConstraint_WorkData& WorkData = *(FRigUnit_TransformConstraint_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			BaseTransformSpace, \
			BaseTransform, \
			BaseItem, \
			Targets, \
			bUseInitialTransforms, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TransformConstraintPerItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FConstraintParent>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ParentConstraint_AdvancedSettings>();


#define FRigUnit_ParentConstraint_Execute() \
	void FRigUnit_ParentConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FTransformFilter& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParentConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FTransformFilter& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FTransformFilter& Filter = *(FTransformFilter*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const FRigUnit_ParentConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_ParentConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ParentConstraint>();


#define FRigUnit_PositionConstraint_Execute() \
	void FRigUnit_PositionConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PositionConstraint>();


#define FRigUnit_PositionConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_PositionConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_336_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PositionConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PositionConstraintLocalSpaceOffset>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_377_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RotationConstraint_AdvancedSettings>();


#define FRigUnit_RotationConstraint_Execute() \
	void FRigUnit_RotationConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_403_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_RotationConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RotationConstraint>();


#define FRigUnit_RotationConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_RotationConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_444_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const FRigUnit_RotationConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_RotationConstraint_AdvancedSettings*)RigVMMemoryHandles[4].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RotationConstraintLocalSpaceOffset>();


#define FRigUnit_ScaleConstraint_Execute() \
	void FRigUnit_ScaleConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ScaleConstraint>();


#define FRigUnit_ScaleConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h_528_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const TArrayView<const FConstraintParent>& Parents, \
		const float Weight, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bMaintainOffset, \
			Filter, \
			Parents, \
			Weight, \
			ChildCache, \
			ParentCaches \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ScaleConstraintLocalSpaceOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TransformConstraint_h


#define FOREACH_ENUM_ECONSTRAINTINTERPTYPE(op) \
	op(EConstraintInterpType::Average) \
	op(EConstraintInterpType::Shortest) \
	op(EConstraintInterpType::Max) 

enum class EConstraintInterpType : uint8;
template<> struct TIsUEnumClass<EConstraintInterpType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EConstraintInterpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
