// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_Metadata.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Metadata_generated_h
#error "RigUnit_Metadata.generated.h already included, missing '#pragma once' in RigUnit_Metadata.h"
#endif
#define CONTROLRIG_RigUnit_Metadata_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_MetadataBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_GetMetadata>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_SetMetadata>();


#define FRigUnit_RemoveMetadata_Execute() \
	void FRigUnit_RemoveMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadata>();


#define FRigUnit_RemoveAllMetadata_Execute() \
	void FRigUnit_RemoveAllMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveAllMetadata>();


#define FRigUnit_HasMetadata_Execute() \
	void FRigUnit_HasMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[2].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			Type, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadata>();


#define FRigUnit_FindItemsWithMetadata_Execute() \
	void FRigUnit_FindItemsWithMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Name, \
			Type, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadata>();


#define FRigUnit_GetMetadataTags_Execute() \
	void FRigUnit_GetMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_327_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetMetadataTags>();


#define FRigUnit_SetMetadataTag_Execute() \
	void FRigUnit_SetMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_361_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTag>();


#define FRigUnit_SetMetadataTagArray_Execute() \
	void FRigUnit_SetMetadataTagArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTagArray>();


#define FRigUnit_RemoveMetadataTag_Execute() \
	void FRigUnit_RemoveMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_429_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadataTag>();


#define FRigUnit_HasMetadataTag_Execute() \
	void FRigUnit_HasMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_470_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTag>();


#define FRigUnit_HasMetadataTagArray_Execute() \
	void FRigUnit_HasMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTagArray>();


#define FRigUnit_FindItemsWithMetadataTag_Execute() \
	void FRigUnit_FindItemsWithMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_548_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Tag = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tag, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTag>();


#define FRigUnit_FindItemsWithMetadataTagArray_Execute() \
	void FRigUnit_FindItemsWithMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_575_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tags, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTagArray>();


#define FRigUnit_FilterItemsByMetadataTags_Execute() \
	void FRigUnit_FilterItemsByMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_602_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		const bool Inclusive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FCachedRigElement>& CachedIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Tags, \
			Inclusive, \
			Result, \
			CachedIndices \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FilterItemsByMetadataTags>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
