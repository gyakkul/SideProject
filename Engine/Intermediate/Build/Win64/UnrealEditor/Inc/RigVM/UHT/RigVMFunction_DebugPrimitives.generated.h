// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DebugPrimitives_generated_h
#error "RigVMFunction_DebugPrimitives.generated.h already included, missing '#pragma once' in RigVMFunction_DebugPrimitives.h"
#endif
#define RIGVM_RigVMFunction_DebugPrimitives_generated_h


#define FRigVMFunction_DebugRectangle_Execute() \
	void FRigVMFunction_DebugRectangle::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugRectangle>();


#define FRigVMFunction_DebugRectangleNoSpace_Execute() \
	void FRigVMFunction_DebugRectangleNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugRectangleNoSpace>();


#define FRigVMFunction_DebugArc_Execute() \
	void FRigVMFunction_DebugArc::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[7].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[8].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugArc>();


#define FRigVMFunction_DebugArcNoSpace_Execute() \
	void FRigVMFunction_DebugArcNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugArcNoSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
