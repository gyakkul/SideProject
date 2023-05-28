// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlOffset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlOffset_generated_h
#error "RigUnit_SetControlOffset.generated.h already included, missing '#pragma once' in RigUnit_SetControlOffset.h"
#endif
#define CONTROLRIG_RigUnit_SetControlOffset_generated_h


#define FRigUnit_SetControlOffset_Execute() \
	void FRigUnit_SetControlOffset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Offset, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Offset = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Offset, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlOffset>();


#define FRigUnit_GetShapeTransform_Execute() \
	void FRigUnit_GetShapeTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Transform, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetShapeTransform>();


#define FRigUnit_SetShapeTransform_Execute() \
	void FRigUnit_SetShapeTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const FTransform& Transform, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Transform, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetShapeTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
