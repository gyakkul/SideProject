// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_RigLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGLOGICMODULE_RigUnit_RigLogic_generated_h
#error "RigUnit_RigLogic.generated.h already included, missing '#pragma once' in RigUnit_RigLogic.h"
#endif
#define RIGLOGICMODULE_RigUnit_RigLogic_generated_h

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_IntArray_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FRigUnit_RigLogic_IntArray>();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FRigUnit_RigLogic_Data>();


#define FRigUnit_RigLogic_Execute() \
	void FRigUnit_RigLogic::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FRigUnit_RigLogic_Data& Data, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RigLogic_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FRigUnit_RigLogic_Data& Data, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FRigUnit_RigLogic_Data& Data = *(FRigUnit_RigLogic_Data*)RigVMMemoryHandles[0].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[1].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Data, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FRigUnit_RigLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigUnit_RigLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
