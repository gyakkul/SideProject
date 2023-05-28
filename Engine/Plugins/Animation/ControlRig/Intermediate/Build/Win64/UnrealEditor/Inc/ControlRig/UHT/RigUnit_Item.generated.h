// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Item_generated_h
#error "RigUnit_Item.generated.h already included, missing '#pragma once' in RigUnit_Item.h"
#endif
#define CONTROLRIG_RigUnit_Item_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemBaseMutable>();


#define FRigUnit_ItemExists_Execute() \
	void FRigUnit_ItemExists::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Exists, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Exists, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& Exists = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Exists, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemExists>();


#define FRigUnit_ItemReplace_Execute() \
	void FRigUnit_ItemReplace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Old, \
		const FName& New, \
		FRigElementKey& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Old, \
		const FName& New, \
		FRigElementKey& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKey& Result = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemReplace>();


#define FRigUnit_ItemEquals_Execute() \
	void FRigUnit_ItemEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemEquals>();


#define FRigUnit_ItemNotEquals_Execute() \
	void FRigUnit_ItemNotEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemNotEquals>();


#define FRigUnit_ItemTypeEquals_Execute() \
	void FRigUnit_ItemTypeEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemTypeEquals>();


#define FRigUnit_ItemTypeNotEquals_Execute() \
	void FRigUnit_ItemTypeNotEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemTypeNotEquals>();


#define FRigUnit_ItemToName_Execute() \
	void FRigUnit_ItemToName::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigElementKey& Value, \
		FName& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigElementKey& Value, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Value = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		FName& Result = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemToName>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
