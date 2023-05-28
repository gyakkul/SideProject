// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ControlChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ControlChannel_generated_h
#error "RigUnit_ControlChannel.generated.h already included, missing '#pragma once' in RigUnit_ControlChannel.h"
#endif
#define CONTROLRIG_RigUnit_ControlChannel_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetAnimationChannelBase>();


#define FRigUnit_GetBoolAnimationChannel_Execute() \
	void FRigUnit_GetBoolAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetBoolAnimationChannel>();


#define FRigUnit_GetFloatAnimationChannel_Execute() \
	void FRigUnit_GetFloatAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetFloatAnimationChannel>();


#define FRigUnit_GetIntAnimationChannel_Execute() \
	void FRigUnit_GetIntAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetIntAnimationChannel>();


#define FRigUnit_GetVector2DAnimationChannel_Execute() \
	void FRigUnit_GetVector2DAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetVector2DAnimationChannel>();


#define FRigUnit_GetVectorAnimationChannel_Execute() \
	void FRigUnit_GetVectorAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetVectorAnimationChannel>();


#define FRigUnit_GetRotatorAnimationChannel_Execute() \
	void FRigUnit_GetRotatorAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetRotatorAnimationChannel>();


#define FRigUnit_GetTransformAnimationChannel_Execute() \
	void FRigUnit_GetTransformAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformAnimationChannel>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_GetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetAnimationChannelBase>();


#define FRigUnit_SetBoolAnimationChannel_Execute() \
	void FRigUnit_SetBoolAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetBoolAnimationChannel>();


#define FRigUnit_SetFloatAnimationChannel_Execute() \
	void FRigUnit_SetFloatAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetFloatAnimationChannel>();


#define FRigUnit_SetIntAnimationChannel_Execute() \
	void FRigUnit_SetIntAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetIntAnimationChannel>();


#define FRigUnit_SetVector2DAnimationChannel_Execute() \
	void FRigUnit_SetVector2DAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetVector2DAnimationChannel>();


#define FRigUnit_SetVectorAnimationChannel_Execute() \
	void FRigUnit_SetVectorAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetVectorAnimationChannel>();


#define FRigUnit_SetRotatorAnimationChannel_Execute() \
	void FRigUnit_SetRotatorAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRotatorAnimationChannel>();


#define FRigUnit_SetTransformAnimationChannel_Execute() \
	void FRigUnit_SetTransformAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetTransformAnimationChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
