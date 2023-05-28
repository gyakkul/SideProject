// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMComponentData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentInstance;
class UScriptStruct* FISMComponentInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentInstance>()
{
	return FISMComponentInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMComponentInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSubIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceSubIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents one component instance with a mapping back to the Client instance. The should be a 1 to 1 relationship between those and the actual Component instances. (equal count) */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents one component instance with a mapping back to the Client instance. The should be a 1 to 1 relationship between those and the actual Component instances. (equal count)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex_MetaData[] = {
		{ "Comment", "/** Client Index in the AISMPartitionActor */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Client Index in the AISMPartitionActor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex = { "ClientIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentInstance, ClientIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "Comment", "/** Instance Index in the FISMClientData struct */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the FISMClientData struct" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentInstance, InstanceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex_MetaData[] = {
		{ "Comment", "/** Instance Index in the FISMClientInstance struct */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the FISMClientInstance struct" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex = { "InstanceSubIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentInstance, InstanceSubIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_ClientIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewProp_InstanceSubIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMComponentInstance",
		sizeof(FISMComponentInstance),
		alignof(FISMComponentInstance),
		Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMComponentInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMComponentInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientInstance;
class UScriptStruct* FISMClientInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientInstance>()
{
	return FISMClientInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMClientInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the component instances that 1 Client instance represents */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents the component instances that 1 Client instance represents" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientInstance>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_Inner = { "ComponentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_MetaData[] = {
		{ "Comment", "/** Instance Index in the ISM Component */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance Index in the ISM Component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices = { "ComponentIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMClientInstance, ComponentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewProp_ComponentIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMClientInstance",
		sizeof(FISMClientInstance),
		alignof(FISMClientInstance),
		Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton, Z_Construct_UScriptStruct_FISMClientInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMClientInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientData;
class UScriptStruct* FISMClientData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientData>()
{
	return FISMClientData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMClientData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the list of instances for 1 Client */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Represents the list of instances for 1 Client" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMClientData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMClientInstance, METADATA_PARAMS(nullptr, 0) }; // 3270511628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_MetaData[] = {
		{ "Comment", "/** Instance list for 1 client */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instance list for 1 client" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMClientData, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_MetaData)) }; // 3270511628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientData_Statics::NewProp_Instances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMClientData",
		sizeof(FISMClientData),
		alignof(FISMClientData),
		Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMClientData()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton, Z_Construct_UScriptStruct_FISMClientData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMClientData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentData;
class UScriptStruct* FISMComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentData>()
{
	return FISMComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Bookkeeping struct that contains the data that allows linking Client Instances to actual Component Instances */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Bookkeeping struct that contains the data that allows linking Client Instances to actual Component Instances" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentData>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMComponentInstance, METADATA_PARAMS(nullptr, 0) }; // 1606356897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_MetaData[] = {
		{ "Comment", "/** Instances here must match Component instances */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Instances here must match Component instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentData, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_MetaData)) }; // 1606356897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_Inner = { "ClientInstances", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMClientData, METADATA_PARAMS(nullptr, 0) }; // 3261358797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_MetaData[] = {
		{ "Comment", "/** Per Client Instances. Indexed using a Client index that must match the indexing in AISMPartitionActor */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
		{ "ToolTip", "Per Client Instances. Indexed using a Client index that must match the indexing in AISMPartitionActor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances = { "ClientInstances", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentData, ClientInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_MetaData)) }; // 3261358797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentData, Component), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_ClientInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentData_Statics::NewProp_Component,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMComponentData",
		sizeof(FISMComponentData),
		alignof(FISMComponentData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMComponentData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics::ScriptStructInfo[] = {
		{ FISMComponentInstance::StaticStruct, Z_Construct_UScriptStruct_FISMComponentInstance_Statics::NewStructOps, TEXT("ISMComponentInstance"), &Z_Registration_Info_UScriptStruct_ISMComponentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentInstance), 1606356897U) },
		{ FISMClientInstance::StaticStruct, Z_Construct_UScriptStruct_FISMClientInstance_Statics::NewStructOps, TEXT("ISMClientInstance"), &Z_Registration_Info_UScriptStruct_ISMClientInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientInstance), 3270511628U) },
		{ FISMClientData::StaticStruct, Z_Construct_UScriptStruct_FISMClientData_Statics::NewStructOps, TEXT("ISMClientData"), &Z_Registration_Info_UScriptStruct_ISMClientData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientData), 3261358797U) },
		{ FISMComponentData::StaticStruct, Z_Construct_UScriptStruct_FISMComponentData_Statics::NewStructOps, TEXT("ISMComponentData"), &Z_Registration_Info_UScriptStruct_ISMComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentData), 1676986488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_3439042267(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
