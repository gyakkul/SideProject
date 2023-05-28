// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DebugPoint_generated_h
#error "RigVMFunction_DebugPoint.generated.h already included, missing '#pragma once' in RigVMFunction_DebugPoint.h"
#endif
#define RIGVM_RigVMFunction_DebugPoint_generated_h


#define FRigVMFunction_DebugPoint_Execute() \
	void FRigVMFunction_DebugPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
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
		FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Vector, \
			Mode, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugPoint>();


#define FRigVMFunction_DebugPointMutable_Execute() \
	void FRigVMFunction_DebugPointMutable::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugPointMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
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
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Vector, \
			Mode, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugPointMutable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h


#define FOREACH_ENUM_ERIGUNITDEBUGPOINTMODE(op) \
	op(ERigUnitDebugPointMode::Point) \
	op(ERigUnitDebugPointMode::Vector) \
	op(ERigUnitDebugPointMode::Max) 

enum class ERigUnitDebugPointMode : uint8;
template<> struct TIsUEnumClass<ERigUnitDebugPointMode> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigUnitDebugPointMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
