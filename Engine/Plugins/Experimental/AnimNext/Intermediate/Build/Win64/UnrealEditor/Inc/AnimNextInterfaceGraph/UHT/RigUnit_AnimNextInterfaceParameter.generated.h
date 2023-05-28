// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_AnimNextInterfaceParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceParameter_generated_h
#error "RigUnit_AnimNextInterfaceParameter.generated.h already included, missing '#pragma once' in RigUnit_AnimNextInterfaceParameter.h"
#endif
#define ANIMNEXTINTERFACEGRAPH_RigUnit_AnimNextInterfaceParameter_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceParameter>();


#define FRigUnit_AnimNextInterfaceParameter_Float_Execute() \
	void FRigUnit_AnimNextInterfaceParameter_Float::StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		float& Result, \
		const FName& Parameter \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		float& Result, \
		const FName& Parameter \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Result = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Parameter = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Result, \
			Parameter \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceParameter Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceParameter_Float>();


#define FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Execute() \
	void FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		TScriptInterface<IAnimNextInterface>& Result, \
		const FName& Parameter \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		TScriptInterface<IAnimNextInterface>& Result, \
		const FName& Parameter \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TScriptInterface<IAnimNextInterface>& Result = *(TScriptInterface<IAnimNextInterface>*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Parameter = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Result, \
			Parameter \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceParameter Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterfaceParameter_AnimNextInterface>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameter>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameter_Float>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameter_Int>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameter_Bool>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameters1>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextInterfaceParameter Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextInterfaceParameter_AnimNextInterface>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterface>();


#define FRigUnit_AnimNextInterface_Float_Execute() \
	void FRigUnit_AnimNextInterface_Float::StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TArrayView<const FAnimNextInterfaceParameter_AnimNextInterface>& Parameters, \
		float& Result, \
		const TScriptInterface<IAnimNextInterface>& AnimNextInterface \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TArrayView<const FAnimNextInterfaceParameter_AnimNextInterface>& Parameters, \
		float& Result, \
		const TScriptInterface<IAnimNextInterface>& AnimNextInterface \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FAnimNextInterfaceParameter_AnimNextInterface>& Parameters = *(TArray<FAnimNextInterfaceParameter_AnimNextInterface>*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const TScriptInterface<IAnimNextInterface>& AnimNextInterface = *(TScriptInterface<IAnimNextInterface>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Parameters, \
			Result, \
			AnimNextInterface \
		); \
	} \
	typedef FRigUnit_AnimNextInterface Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterface_Float>();


#define FRigUnit_FloatOperator_Execute() \
	void FRigUnit_FloatOperator::StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TScriptInterface<IAnimNextInterface>& Operator, \
		const float ParamA, \
		const float ParamB, \
		float& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TScriptInterface<IAnimNextInterface>& Operator, \
		const float ParamA, \
		const float ParamB, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const TScriptInterface<IAnimNextInterface>& Operator = *(TScriptInterface<IAnimNextInterface>*)RigVMMemoryHandles[0].GetData(false); \
		const float ParamA = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float ParamB = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Operator, \
			ParamA, \
			ParamB, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_FloatOperator>();


#define FRigUnit_PoseOperator_Execute() \
	void FRigUnit_PoseOperator::StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TScriptInterface<IAnimNextInterface>& Operator, \
		const TArrayView<const FRigVMExecuteContext>& InputPoses, \
		const FAnimNextInterfaceParameters1& Parameters \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const TScriptInterface<IAnimNextInterface>& Operator, \
		const TArrayView<const FRigVMExecuteContext>& InputPoses, \
		const FAnimNextInterfaceParameters1& Parameters \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const TScriptInterface<IAnimNextInterface>& Operator = *(TScriptInterface<IAnimNextInterface>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigVMExecuteContext>& InputPoses = *(TArray<FRigVMExecuteContext>*)RigVMMemoryHandles[1].GetData(false); \
		const FAnimNextInterfaceParameters1& Parameters = *(FAnimNextInterfaceParameters1*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Operator, \
			InputPoses, \
			Parameters \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_PoseOperator>();

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FAnimSequenceParameters>();


#define FRigUnit_AnimNextInterface_SequencePlayer_Execute() \
	void FRigUnit_AnimNextInterface_SequencePlayer::StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const TScriptInterface<IAnimNextInterface>& Sequence \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const FAnimSequenceParameters& Parameters, \
		const TScriptInterface<IAnimNextInterface>& Sequence \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FAnimSequenceParameters& Parameters = *(FAnimSequenceParameters*)RigVMMemoryHandles[0].GetData(false); \
		const TScriptInterface<IAnimNextInterface>& Sequence = *(TScriptInterface<IAnimNextInterface>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			Parameters, \
			Sequence \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_AnimNextInterface_SequencePlayer>();


#define FRigUnit_TestFloatState_Execute() \
	void FRigUnit_TestFloatState::StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float TargetValueRate, \
		const float SmoothingTime, \
		const float DampingRatio, \
		float& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics; \
	ANIMNEXTINTERFACEGRAPH_API static class UScriptStruct* StaticStruct(); \
	void Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextInterfaceExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float TargetValueRate, \
		const float SmoothingTime, \
		const float DampingRatio, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float TargetValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float TargetValueRate = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float SmoothingTime = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float DampingRatio = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextInterfaceExecuteContext>(), \
			TargetValue, \
			TargetValueRate, \
			SmoothingTime, \
			DampingRatio, \
			Result \
		); \
	} \
	typedef FRigUnit_AnimNextInterfaceBase Super;


template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<struct FRigUnit_TestFloatState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
