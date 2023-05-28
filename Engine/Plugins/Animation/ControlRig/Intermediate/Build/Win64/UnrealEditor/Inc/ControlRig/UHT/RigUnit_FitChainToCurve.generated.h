// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_FitChainToCurve_generated_h
#error "RigUnit_FitChainToCurve.generated.h already included, missing '#pragma once' in RigUnit_FitChainToCurve.h"
#endif
#define CONTROLRIG_RigUnit_FitChainToCurve_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurve_Rotation>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurve_DebugSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurve_WorkData>();


#define FRigUnit_FitChainToCurve_Execute() \
	void FRigUnit_FitChainToCurve::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[2].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[3].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[9].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[10].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[11].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[12].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[13].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[14].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[15].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			Bezier, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurve>();


#define FRigUnit_FitChainToCurvePerItem_Execute() \
	void FRigUnit_FitChainToCurvePerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Bezier, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurvePerItem>();


#define FRigUnit_FitChainToCurveItemArray_Execute() \
	void FRigUnit_FitChainToCurveItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_380_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FRigVMFourPointBezier& Bezier, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Bezier, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToCurveItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h


#define FOREACH_ENUM_ECONTROLRIGCURVEALIGNMENT(op) \
	op(EControlRigCurveAlignment::Front) \
	op(EControlRigCurveAlignment::Stretched) 

enum class EControlRigCurveAlignment : uint8;
template<> struct TIsUEnumClass<EControlRigCurveAlignment> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigCurveAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
