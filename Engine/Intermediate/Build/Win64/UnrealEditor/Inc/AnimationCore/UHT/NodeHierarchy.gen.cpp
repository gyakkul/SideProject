// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodeHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeHierarchy() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeObject;
class UScriptStruct* FNodeObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeObject, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeObject"));
	}
	return Z_Registration_Info_UScriptStruct_NodeObject.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeObject>()
{
	return FNodeObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A node in a named hierarchy */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "A node in a named hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of this node */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "The name of this node" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeObject, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData[] = {
		{ "Comment", "/** The name of this node's parent */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "The name of this node's parent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeObject, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeObject",
		sizeof(FNodeObject),
		alignof(FNodeObject),
		Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeObject()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeObject.InnerSingleton, Z_Construct_UScriptStruct_FNodeObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeHierarchyData;
class UScriptStruct* FNodeHierarchyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeHierarchyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeHierarchyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyData, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeHierarchyData.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeHierarchyData>()
{
	return FNodeHierarchyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeHierarchyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeNameToIndexMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeNameToIndexMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeNameToIndexMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeNameToIndexMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Hierarchy of nodes */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Hierarchy of nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNodeObject, METADATA_PARAMS(nullptr, 0) }; // 2870340923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Node hierarchy data */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Node hierarchy data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeHierarchyData, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData)) }; // 2870340923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData[] = {
		{ "Comment", "/** Node transform data */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Node transform data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeHierarchyData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_ValueProp = { "NodeNameToIndexMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_Key_KeyProp = { "NodeNameToIndexMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData[] = {
		{ "Comment", "/** Transient look up mapping from name to index to array */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Transient look up mapping from name to index to array" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping = { "NodeNameToIndexMapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeHierarchyData, NodeNameToIndexMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeHierarchyData",
		sizeof(FNodeHierarchyData),
		alignof(FNodeHierarchyData),
		Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeHierarchyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeHierarchyData.InnerSingleton, Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeHierarchyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData;
class UScriptStruct* FNodeHierarchyWithUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyWithUserData"));
	}
	return Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeHierarchyWithUserData>()
{
	return FNodeHierarchyWithUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeHierarchyWithUserData, Hierarchy), Z_Construct_UScriptStruct_FNodeHierarchyData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData)) }; // 925251835
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeHierarchyWithUserData",
		sizeof(FNodeHierarchyWithUserData),
		alignof(FNodeHierarchyWithUserData),
		Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.InnerSingleton, Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FNodeObject::StaticStruct, Z_Construct_UScriptStruct_FNodeObject_Statics::NewStructOps, TEXT("NodeObject"), &Z_Registration_Info_UScriptStruct_NodeObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeObject), 2870340923U) },
		{ FNodeHierarchyData::StaticStruct, Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewStructOps, TEXT("NodeHierarchyData"), &Z_Registration_Info_UScriptStruct_NodeHierarchyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeHierarchyData), 925251835U) },
		{ FNodeHierarchyWithUserData::StaticStruct, Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewStructOps, TEXT("NodeHierarchyWithUserData"), &Z_Registration_Info_UScriptStruct_NodeHierarchyWithUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeHierarchyWithUserData), 1904169333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h_3977084103(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
