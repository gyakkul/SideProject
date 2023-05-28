// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetTransform_generated_h
#error "RigUnit_GetTransform.generated.h already included, missing '#pragma once' in RigUnit_GetTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetTransform_generated_h


#define FRigUnit_GetTransform_Execute() \
	void FRigUnit_GetTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		FTransform& Transform, \
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
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Space, \
			bInitial, \
			Transform, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransform>();


#define FRigUnit_GetTransformArray_Execute() \
	void FRigUnit_GetTransformArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
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
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformArray>();


#define FRigUnit_GetTransformItemArray_Execute() \
	void FRigUnit_GetTransformItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const ERigVMTransformSpace Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
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
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
