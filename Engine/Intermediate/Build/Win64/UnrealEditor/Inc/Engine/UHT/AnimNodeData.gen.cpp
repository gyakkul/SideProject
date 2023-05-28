// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNodeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeDataFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeStructData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNodeDataFlags;
	static UEnum* EAnimNodeDataFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeDataFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNodeDataFlags"));
		}
		return Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimNodeDataFlags>()
	{
		return EAnimNodeDataFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enumerators[] = {
		{ "EAnimNodeDataFlags::None", (int64)EAnimNodeDataFlags::None },
		{ "EAnimNodeDataFlags::HasInitialUpdateFunction", (int64)EAnimNodeDataFlags::HasInitialUpdateFunction },
		{ "EAnimNodeDataFlags::HasBecomeRelevantFunction", (int64)EAnimNodeDataFlags::HasBecomeRelevantFunction },
		{ "EAnimNodeDataFlags::HasUpdateFunction", (int64)EAnimNodeDataFlags::HasUpdateFunction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// The flags field of FAnimNodeData\n// Primarily this is used to prevent the extra work asscicated with recovering folded properties for anim node functions\n" },
		{ "HasBecomeRelevantFunction.Comment", "// This node binds its become relevant function\n" },
		{ "HasBecomeRelevantFunction.Name", "EAnimNodeDataFlags::HasBecomeRelevantFunction" },
		{ "HasBecomeRelevantFunction.ToolTip", "This node binds its become relevant function" },
		{ "HasInitialUpdateFunction.Comment", "// This node binds its initial update function\n" },
		{ "HasInitialUpdateFunction.Name", "EAnimNodeDataFlags::HasInitialUpdateFunction" },
		{ "HasInitialUpdateFunction.ToolTip", "This node binds its initial update function" },
		{ "HasUpdateFunction.Comment", "// This node binds its update function\n" },
		{ "HasUpdateFunction.Name", "EAnimNodeDataFlags::HasUpdateFunction" },
		{ "HasUpdateFunction.ToolTip", "This node binds its update function" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "None.Name", "EAnimNodeDataFlags::None" },
		{ "ToolTip", "The flags field of FAnimNodeData\nPrimarily this is used to prevent the extra work asscicated with recovering folded properties for anim node functions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimNodeDataFlags",
		"EAnimNodeDataFlags",
		Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimNodeDataFlags()
	{
		if (!Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeData;
class UScriptStruct* FAnimNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeData>()
{
	return FAnimNodeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNodeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimClassInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimClassInterface;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Any constant/folded class data an anim node can be accessed via this struct\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Any constant/folded class data an anim node can be accessed via this struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface_MetaData[] = {
		{ "Comment", "/** The class we are part of */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "The class we are part of" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface = { "AnimClassInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeData, AnimClassInterface), Z_Construct_UClass_UAnimClassInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "/**\n\x09 * Flags & Indices for table entries. Used to look up indices from NodePropertyIndex->FoldedDataIndex.\n\x09 * If the MSB is set for an entry it is assumed to be on an instance, if not, it is assumed to be stored on the class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Flags & Indices for table entries. Used to look up indices from NodePropertyIndex->FoldedDataIndex.\nIf the MSB is set for an entry it is assumed to be on an instance, if not, it is assumed to be stored on the class." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeData, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The index of the node for this constant data block in the class that it is held in. \n\x09 * INDEX_NONE if this node is not in a generated class or is per-instance data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "The index of the node for this constant data block in the class that it is held in.\nINDEX_NONE if this node is not in a generated class or is per-instance data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeData, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Common flags for this node */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Common flags for this node" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeData, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_AnimClassInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNodeData",
		sizeof(FAnimNodeData),
		alignof(FAnimNodeData),
		Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNodeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeStructData;
class UScriptStruct* FAnimNodeStructData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeStructData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeStructData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeStructData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeStructData>()
{
	return FAnimNodeStructData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNodeStructData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_NameToIndexMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToIndexMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToIndexMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProperties_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data about editor-side struct property indices.\n * Used to map property name to editor-only property indices. This allows us to avoid TMap lookups at runtime.   \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
		{ "ToolTip", "Data about editor-side struct property indices.\nUsed to map property name to editor-only property indices. This allows us to avoid TMap lookups at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeStructData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_ValueProp = { "NameToIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_Key_KeyProp = { "NameToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap = { "NameToIndexMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeStructData, NameToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNodeData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties = { "NumProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeStructData, NumProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NameToIndexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewProp_NumProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNodeStructData",
		sizeof(FAnimNodeStructData),
		alignof(FAnimNodeStructData),
		Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeStructData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNodeStructData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::EnumInfo[] = {
		{ EAnimNodeDataFlags_StaticEnum, TEXT("EAnimNodeDataFlags"), &Z_Registration_Info_UEnum_EAnimNodeDataFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214220031U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::ScriptStructInfo[] = {
		{ FAnimNodeData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewStructOps, TEXT("AnimNodeData"), &Z_Registration_Info_UScriptStruct_AnimNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeData), 2476102172U) },
		{ FAnimNodeStructData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewStructOps, TEXT("AnimNodeStructData"), &Z_Registration_Info_UScriptStruct_AnimNodeStructData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeStructData), 2729258633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_3875925432(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
