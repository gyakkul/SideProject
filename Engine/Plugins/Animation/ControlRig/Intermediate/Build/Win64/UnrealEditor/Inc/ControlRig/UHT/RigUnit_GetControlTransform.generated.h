// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetControlTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetControlTransform_generated_h
#error "RigUnit_GetControlTransform.generated.h already included, missing '#pragma once' in RigUnit_GetControlTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetControlTransform_generated_h


#define FRigUnit_GetControlBool_Execute() \
	void FRigUnit_GetControlBool::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		bool& BoolValue = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			BoolValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlBool>();


#define FRigUnit_GetControlFloat_Execute() \
	void FRigUnit_GetControlFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		float& FloatValue, \
		float& Minimum, \
		float& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		float& FloatValue, \
		float& Minimum, \
		float& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		float& FloatValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Minimum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Maximum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			FloatValue, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlFloat>();


#define FRigUnit_GetControlInteger_Execute() \
	void FRigUnit_GetControlInteger::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		int32& IntegerValue, \
		int32& Minimum, \
		int32& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		int32& IntegerValue, \
		int32& Minimum, \
		int32& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		int32& IntegerValue = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Minimum = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		int32& Maximum = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			IntegerValue, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlInteger>();


#define FRigUnit_GetControlVector2D_Execute() \
	void FRigUnit_GetControlVector2D::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector2D& Vector, \
		FVector2D& Minimum, \
		FVector2D& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		FVector2D& Vector, \
		FVector2D& Minimum, \
		FVector2D& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FVector2D& Vector = *(FVector2D*)RigVMMemoryHandles[1].GetData(false); \
		FVector2D& Minimum = *(FVector2D*)RigVMMemoryHandles[2].GetData(false); \
		FVector2D& Maximum = *(FVector2D*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Vector, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlVector2D>();


#define FRigUnit_GetControlVector_Execute() \
	void FRigUnit_GetControlVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FVector& Vector, \
		FVector& Minimum, \
		FVector& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FVector& Vector, \
		FVector& Minimum, \
		FVector& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Vector, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlVector>();


#define FRigUnit_GetControlRotator_Execute() \
	void FRigUnit_GetControlRotator::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FRotator& Rotator, \
		FRotator& Minimum, \
		FRotator& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FRotator& Rotator, \
		FRotator& Minimum, \
		FRotator& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[2].GetData(false); \
		FRotator& Minimum = *(FRotator*)RigVMMemoryHandles[3].GetData(false); \
		FRotator& Maximum = *(FRotator*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Rotator, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlRotator>();


#define FRigUnit_GetControlTransform_Execute() \
	void FRigUnit_GetControlTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FTransform& Minimum, \
		FTransform& Maximum, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform, \
		FTransform& Minimum, \
		FTransform& Maximum, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Minimum = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Maximum = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Space, \
			Transform, \
			Minimum, \
			Maximum, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetControlTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
