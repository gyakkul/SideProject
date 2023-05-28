// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SphericalPoseReader_generated_h
#error "RigUnit_SphericalPoseReader.generated.h already included, missing '#pragma once' in RigUnit_SphericalPoseReader.h"
#endif
#define CONTROLRIG_RigUnit_SphericalPoseReader_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegionScaleFactors_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRegionScaleFactors>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalRegion_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FSphericalRegion>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FSphericalPoseReaderDebugSettings>();


#define FRigUnit_SphericalPoseReader_Execute() \
	void FRigUnit_SphericalPoseReader::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
		FCachedRigElement& DriverCache, \
		FCachedRigElement& OptionalParentCache, \
		FTransform& LocalDriverTransformInit, \
		FVector& CachedRotationOffset, \
		bool& bCachedInitTransforms \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
		FCachedRigElement& DriverCache, \
		FCachedRigElement& OptionalParentCache, \
		FTransform& LocalDriverTransformInit, \
		FVector& CachedRotationOffset, \
		bool& bCachedInitTransforms \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& OutputParam = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& DriverItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& DriverAxis = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& RotationOffset = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const float ActiveRegionSize = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FRegionScaleFactors& ActiveRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[5].GetData(false); \
		const float FalloffSize = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const FRegionScaleFactors& FalloffRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[7].GetData(false); \
		const bool FlipWidthScaling = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		const bool FlipHeightScaling = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const FRigElementKey& OptionalParentItem = *(FRigElementKey*)RigVMMemoryHandles[10].GetData(false); \
		const FSphericalPoseReaderDebugSettings& Debug = *(FSphericalPoseReaderDebugSettings*)RigVMMemoryHandles[11].GetData(false); \
		FSphericalRegion& InnerRegion = *(FSphericalRegion*)RigVMMemoryHandles[12].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FSphericalRegion& OuterRegion = *(FSphericalRegion*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& DriverNormal = *(FVector*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& Driver2D = *(FVector*)RigVMMemoryHandles[15].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& DriverCache = *(FCachedRigElement*)RigVMMemoryHandles[16].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& OptionalParentCache = *(FCachedRigElement*)RigVMMemoryHandles[17].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& LocalDriverTransformInit = *(FTransform*)RigVMMemoryHandles[18].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& CachedRotationOffset = *(FVector*)RigVMMemoryHandles[19].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bCachedInitTransforms = *(bool*)RigVMMemoryHandles[20].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			OutputParam, \
			DriverItem, \
			DriverAxis, \
			RotationOffset, \
			ActiveRegionSize, \
			ActiveRegionScaleFactors, \
			FalloffSize, \
			FalloffRegionScaleFactors, \
			FlipWidthScaling, \
			FlipHeightScaling, \
			OptionalParentItem, \
			Debug, \
			InnerRegion, \
			OuterRegion, \
			DriverNormal, \
			Driver2D, \
			DriverCache, \
			OptionalParentCache, \
			LocalDriverTransformInit, \
			CachedRotationOffset, \
			bCachedInitTransforms \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SphericalPoseReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
