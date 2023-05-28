// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetTransform_generated_h
#error "RigUnit_SetTransform.generated.h already included, missing '#pragma once' in RigUnit_SetTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetTransform_generated_h


#define FRigUnit_SetTransform_Execute() \
	void FRigUnit_SetTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FTransform& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTransform>();


#define FRigUnit_SetTranslation_Execute() \
	void FRigUnit_SetTranslation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTranslation>();


#define FRigUnit_SetRotation_Execute() \
	void FRigUnit_SetRotation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FQuat& Value, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Value, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRotation>();


#define FRigUnit_SetScale_Execute() \
	void FRigUnit_SetScale::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Scale, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const FVector& Scale, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Scale, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetScale>();


#define FRigUnit_SetTransformArray_Execute() \
	void FRigUnit_SetTransformArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTransformArray>();


#define FRigUnit_SetTransformItemArray_Execute() \
	void FRigUnit_SetTransformItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_364_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		const TArrayView<const FTransform>& Transforms, \
		const float Weight, \
		const bool bPropagateToChildren, \
		TArray<FCachedRigElement>& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTransformItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
