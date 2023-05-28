// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugLineStrip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DebugLineStrip_generated_h
#error "RigVMFunction_DebugLineStrip.generated.h already included, missing '#pragma once' in RigVMFunction_DebugLineStrip.h"
#endif
#define RIGVM_RigVMFunction_DebugLineStrip_generated_h


#define FRigVMFunction_DebugLineStrip_Execute() \
	void FRigVMFunction_DebugLineStrip::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLineStrip_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineStrip_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
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
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Points, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugLineStrip>();


#define FRigVMFunction_DebugLineStripNoSpace_Execute() \
	void FRigVMFunction_DebugLineStripNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLineStrip_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineStripNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Points, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugLineStripNoSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLineStrip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
