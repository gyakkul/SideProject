// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraGraph.h"
#include "../Public/NiagaraCompileHashVisitor.h"
#include "../Public/NiagaraTypes.h"
#include "NiagaraCompileHash.h"
#include "NiagaraScriptVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraGraph();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraGraph_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphParameterReference();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableData();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference;
class UScriptStruct* FNiagaraGraphParameterReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraGraphParameterReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraGraphParameterReference>()
{
	return FNiagaraGraphParameterReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUserFacing_MetaData[];
#endif
		static void NewProp_bIsUserFacing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUserFacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGraphParameterReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphParameterReference, Key), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphParameterReference, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing_MetaData[] = {
		{ "Comment", "// If false then it is just a technical reference (e.g. setting the default value)\n" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "If false then it is just a technical reference (e.g. setting the default value)" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing_SetBit(void* Obj)
	{
		((FNiagaraGraphParameterReference*)Obj)->bIsUserFacing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing = { "bIsUserFacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraGraphParameterReference), &Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewProp_bIsUserFacing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraGraphParameterReference",
		sizeof(FNiagaraGraphParameterReference),
		alignof(FNiagaraGraphParameterReference),
		Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphParameterReference()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection;
class UScriptStruct* FNiagaraGraphParameterReferenceCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraGraphParameterReferenceCollection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraGraphParameterReferenceCollection>()
{
	return FNiagaraGraphParameterReferenceCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedByUser_MetaData[];
#endif
		static void NewProp_bCreatedByUser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedByUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGraphParameterReferenceCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences_Inner = { "ParameterReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraGraphParameterReference, METADATA_PARAMS(nullptr, 0) }; // 348644426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences_MetaData[] = {
		{ "Comment", "/** All the references in the graph. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "All the references in the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences = { "ParameterReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphParameterReferenceCollection, ParameterReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences_MetaData)) }; // 348644426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser_MetaData[] = {
		{ "Comment", "/** Whether this parameter was initially created by the user. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Whether this parameter was initially created by the user." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser_SetBit(void* Obj)
	{
		((FNiagaraGraphParameterReferenceCollection*)Obj)->bCreatedByUser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser = { "bCreatedByUser", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraGraphParameterReferenceCollection), &Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_ParameterReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewProp_bCreatedByUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraGraphParameterReferenceCollection",
		sizeof(FNiagaraGraphParameterReferenceCollection),
		alignof(FNiagaraGraphParameterReferenceCollection),
		Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo;
class UScriptStruct* FNiagaraGraphScriptUsageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraGraphScriptUsageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraGraphScriptUsageInfo>()
{
	return FNiagaraGraphScriptUsageInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UsageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UsageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileHash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompileHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileHashFromGraph_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompileHashFromGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceHashFromGraph_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceHashFromGraph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompileLastObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileLastObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompileLastObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Traversal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traversal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Traversal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataHash_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHash_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCompileId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedCompileId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for UNiagaraGraph cached data for managing CompileIds and Traversals.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Container for UNiagaraGraph cached data for managing CompileIds and Traversals." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGraphScriptUsageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_BaseId_MetaData[] = {
		{ "Comment", "/** A guid which is generated when this usage info is created.  Allows for forced recompiling when the cached ids are invalidated. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "A guid which is generated when this usage info is created.  Allows for forced recompiling when the cached ids are invalidated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_BaseId = { "BaseId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, BaseId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_BaseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_BaseId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType_MetaData[] = {
		{ "Comment", "/** The context in which this sub-graph traversal will be used.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The context in which this sub-graph traversal will be used." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType = { "UsageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, UsageType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType_MetaData)) }; // 2772325717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageId_MetaData[] = {
		{ "Comment", "/** The particular instance of the usage type. Event scripts, for example, have potentially multiple graphs.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The particular instance of the usage type. Event scripts, for example, have potentially multiple graphs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageId = { "UsageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, UsageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHash_MetaData[] = {
		{ "Comment", "/** The hash that we calculated last traversal. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The hash that we calculated last traversal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHash = { "CompileHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, CompileHash), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHash_MetaData)) }; // 118874400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHashFromGraph_MetaData[] = {
		{ "Comment", "/** The hash that we calculated last traversal. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The hash that we calculated last traversal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHashFromGraph = { "CompileHashFromGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, CompileHashFromGraph), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHashFromGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHashFromGraph_MetaData)) }; // 118874400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_ReferenceHashFromGraph_MetaData[] = {
		{ "Comment", "/** The hash of values that could feed into downstream scripts.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The hash of values that could feed into downstream scripts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_ReferenceHashFromGraph = { "ReferenceHashFromGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, ReferenceHashFromGraph), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_ReferenceHashFromGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_ReferenceHashFromGraph_MetaData)) }; // 118874400
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects_Inner = { "CompileLastObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo, METADATA_PARAMS(nullptr, 0) }; // 210915291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects = { "CompileLastObjects", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, CompileLastObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects_MetaData)) }; // 210915291
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal_Inner = { "Traversal", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal_MetaData[] = {
		{ "Comment", "/** The traversal of output to input nodes for this graph. This is not a recursive traversal, it just includes nodes from this graph.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The traversal of output to input nodes for this graph. This is not a recursive traversal, it just includes nodes from this graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal = { "Traversal", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, Traversal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash_Inner = { "DataHash", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash = { "DataHash", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, DataHash_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_GeneratedCompileId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_GeneratedCompileId = { "GeneratedCompileId", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphScriptUsageInfo, GeneratedCompileId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_GeneratedCompileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_GeneratedCompileId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_BaseId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_UsageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileHashFromGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_ReferenceHashFromGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_CompileLastObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_Traversal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_DataHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewProp_GeneratedCompileId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraGraphScriptUsageInfo",
		sizeof(FNiagaraGraphScriptUsageInfo),
		alignof(FNiagaraGraphScriptUsageInfo),
		Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo.InnerSingleton;
	}
	void UNiagaraGraph::StaticRegisterNativesUNiagaraGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraGraph);
	UClass* Z_Construct_UClass_UNiagaraGraph_NoRegister()
	{
		return UNiagaraGraph::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRebuildId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRebuildId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBuiltTraversalDataChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBuiltTraversalDataChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBuiltScriptVersionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBuiltScriptVersionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedUsageInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedUsageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedUsageInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableToMetaData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableToMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableToMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VariableToMetaData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VariableToScriptVariable_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableToScriptVariable_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableToScriptVariable_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VariableToScriptVariable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterToReferencesMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterToReferencesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterToReferencesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterToReferencesMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompilationScriptVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilationScriptVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompilationScriptVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidLastBuiltScriptVersionId_MetaData[];
#endif
		static void NewProp_bHasValidLastBuiltScriptVersionId_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidLastBuiltScriptVersionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraGraph.h" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ChangeId_MetaData[] = {
		{ "Comment", "/** The current change identifier for this graph overall. Used to sync status with UNiagaraScripts.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The current change identifier for this graph overall. Used to sync status with UNiagaraScripts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ForceRebuildId_MetaData[] = {
		{ "Comment", "/** Internal value used to invalidate a DDC key for the script no matter what.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Internal value used to invalidate a DDC key for the script no matter what." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ForceRebuildId = { "ForceRebuildId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, ForceRebuildId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ForceRebuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ForceRebuildId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltTraversalDataChangeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltTraversalDataChangeId = { "LastBuiltTraversalDataChangeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, LastBuiltTraversalDataChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltTraversalDataChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltTraversalDataChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltScriptVersionId_MetaData[] = {
		{ "Comment", "/** The script version that was used when the cached CompileId was generated, a change\n\x09 *\x09in script version will invalidate the cached CompileId and a new one will be generated.\n\x09 *\x09Will be initialized to an invalid guid but it won't be used until a valid script has been\n\x09 *\x09""assigned (as dictated by bHasValidLastBuiltScriptVersionId) */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "The script version that was used when the cached CompileId was generated, a change\n    in script version will invalidate the cached CompileId and a new one will be generated.\n    Will be initialized to an invalid guid but it won't be used until a valid script has been\n    assigned (as dictated by bHasValidLastBuiltScriptVersionId)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltScriptVersionId = { "LastBuiltScriptVersionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, LastBuiltScriptVersionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltScriptVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltScriptVersionId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo_Inner = { "CachedUsageInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo, METADATA_PARAMS(nullptr, 0) }; // 2780715254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo = { "CachedUsageInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, CachedUsageInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo_MetaData)) }; // 2780715254
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_ValueProp = { "VariableToMetaData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraVariableMetaData, METADATA_PARAMS(nullptr, 0) }; // 2573469744
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_Key_KeyProp = { "VariableToMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_MetaData[] = {
		{ "Comment", "/** Storage of meta-data for variables defined for use explicitly with this graph.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Storage of meta-data for variables defined for use explicitly with this graph." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData = { "VariableToMetaData", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, VariableToMetaData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_MetaData)) }; // 2575088255 2573469744
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_ValueProp = { "VariableToScriptVariable", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_Key_KeyProp = { "VariableToScriptVariable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_MetaData[] = {
		{ "Comment", "/** Storage of variables defined for use with this graph.*/" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Storage of variables defined for use with this graph." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable = { "VariableToScriptVariable", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, VariableToScriptVariable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_ValueProp = { "ParameterToReferencesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection, METADATA_PARAMS(nullptr, 0) }; // 1264385507
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_Key_KeyProp = { "ParameterToReferencesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_MetaData[] = {
		{ "Comment", "/** A map of parameters in the graph to their referencers. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "A map of parameters in the graph to their referencers." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap = { "ParameterToReferencesMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, ParameterToReferencesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_MetaData)) }; // 2575088255 1264385507
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables_Inner = { "CompilationScriptVariables", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraScriptVariableData, METADATA_PARAMS(nullptr, 0) }; // 3323827455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables = { "CompilationScriptVariables", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGraph, CompilationScriptVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables_MetaData)) }; // 3323827455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId_MetaData[] = {
		{ "Comment", "/** Used in conjunction with LastBuiltScriptVersionId to note that we've got a valid script Id stored.\n\x09 *\x09Works around things without having to add a custom version. */" },
		{ "ModuleRelativePath", "Public/NiagaraGraph.h" },
		{ "ToolTip", "Used in conjunction with LastBuiltScriptVersionId to note that we've got a valid script Id stored.\n    Works around things without having to add a custom version." },
	};
#endif
	void Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId_SetBit(void* Obj)
	{
		((UNiagaraGraph*)Obj)->bHasValidLastBuiltScriptVersionId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId = { "bHasValidLastBuiltScriptVersionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraGraph), &Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ForceRebuildId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltTraversalDataChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_LastBuiltScriptVersionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CachedUsageInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_VariableToScriptVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_ParameterToReferencesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_CompilationScriptVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGraph_Statics::NewProp_bHasValidLastBuiltScriptVersionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraGraph_Statics::ClassParams = {
		&UNiagaraGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraGraph()
	{
		if (!Z_Registration_Info_UClass_UNiagaraGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraGraph.OuterSingleton, Z_Construct_UClass_UNiagaraGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraGraph.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraGraph>()
	{
		return UNiagaraGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraGraph);
	UNiagaraGraph::~UNiagaraGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraGraphParameterReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics::NewStructOps, TEXT("NiagaraGraphParameterReference"), &Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGraphParameterReference), 348644426U) },
		{ FNiagaraGraphParameterReferenceCollection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics::NewStructOps, TEXT("NiagaraGraphParameterReferenceCollection"), &Z_Registration_Info_UScriptStruct_NiagaraGraphParameterReferenceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGraphParameterReferenceCollection), 1264385507U) },
		{ FNiagaraGraphScriptUsageInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics::NewStructOps, TEXT("NiagaraGraphScriptUsageInfo"), &Z_Registration_Info_UScriptStruct_NiagaraGraphScriptUsageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGraphScriptUsageInfo), 2780715254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraGraph, UNiagaraGraph::StaticClass, TEXT("UNiagaraGraph"), &Z_Registration_Info_UClass_UNiagaraGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraGraph), 1560070768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_611104366(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
