// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlTransform_generated_h
#error "RigUnit_SetControlTransform.generated.h already included, missing '#pragma once' in RigUnit_SetControlTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetControlTransform_generated_h


#define FRigUnit_SetControlBool_Execute() \
	void FRigUnit_SetControlBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
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
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlBool>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlBool_Entry>();


#define FRigUnit_SetMultiControlBool_Execute() \
	void FRigUnit_SetMultiControlBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlBool_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlBool_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[1].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlBool>();


#define FRigUnit_SetControlFloat_Execute() \
	void FRigUnit_SetControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& FloatValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			FloatValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlFloat_Entry>();


#define FRigUnit_SetMultiControlFloat_Execute() \
	void FRigUnit_SetMultiControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlFloat_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlFloat_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlFloat>();


#define FRigUnit_SetControlInteger_Execute() \
	void FRigUnit_SetControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Weight = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& IntegerValue = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			IntegerValue, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlInteger>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlInteger_Entry>();


#define FRigUnit_SetMultiControlInteger_Execute() \
	void FRigUnit_SetMultiControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlInteger_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlInteger_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlInteger>();


#define FRigUnit_SetControlVector2D_Execute() \
	void FRigUnit_SetControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector2D& Vector = *(FVector2D*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Vector, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlVector2D>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlVector2D_Entry>();


#define FRigUnit_SetMultiControlVector2D_Execute() \
	void FRigUnit_SetMultiControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_348_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlVector2D_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlVector2D_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlVector2D>();


#define FRigUnit_SetControlVector_Execute() \
	void FRigUnit_SetControlVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Vector, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlVector>();


#define FRigUnit_SetControlRotator_Execute() \
	void FRigUnit_SetControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Rotator, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlRotator>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlRotator_Entry>();


#define FRigUnit_SetMultiControlRotator_Execute() \
	void FRigUnit_SetMultiControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_SetMultiControlRotator_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlRotator_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Weight, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlRotator>();


#define FRigUnit_SetControlTransform_Execute() \
	void FRigUnit_SetControlTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_543_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Weight, \
			Transform, \
			Space, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
