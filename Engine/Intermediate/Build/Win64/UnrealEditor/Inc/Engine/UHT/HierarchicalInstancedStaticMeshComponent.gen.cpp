// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHISMViewRelevanceType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHISMViewRelevanceType;
	static UEnum* EHISMViewRelevanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHISMViewRelevanceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHISMViewRelevanceType"));
		}
		return Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHISMViewRelevanceType>()
	{
		return EHISMViewRelevanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enumerators[] = {
		{ "EHISMViewRelevanceType::Grass", (int64)EHISMViewRelevanceType::Grass },
		{ "EHISMViewRelevanceType::Foliage", (int64)EHISMViewRelevanceType::Foliage },
		{ "EHISMViewRelevanceType::HISM", (int64)EHISMViewRelevanceType::HISM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enum_MetaDataParams[] = {
		{ "Foliage.Name", "EHISMViewRelevanceType::Foliage" },
		{ "Grass.Name", "EHISMViewRelevanceType::Grass" },
		{ "HISM.Name", "EHISMViewRelevanceType::HISM" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHISMViewRelevanceType",
		"EHISMViewRelevanceType",
		Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHISMViewRelevanceType()
	{
		if (!Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton, Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED;
class UScriptStruct* FClusterNode_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode_DEPRECATED>()
{
	return FClusterNode_DEPRECATED::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode_DEPRECATED",
		sizeof(FClusterNode_DEPRECATED),
		alignof(FClusterNode_DEPRECATED),
		Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterNode;
class UScriptStruct* FClusterNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode>()
{
	return FClusterNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInstanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinInstanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInstanceScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, BoundMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, BoundMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale = { "MinInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, MinInstanceScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale = { "MaxInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterNode, MaxInstanceScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode",
		sizeof(FClusterNode),
		alignof(FClusterNode),
		Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton;
	}
	void UHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHierarchicalInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTranslatedInstanceSpace_MetaData[];
#endif
		static void NewProp_bUseTranslatedInstanceSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTranslatedInstanceSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslatedInstanceSpaceOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslatedInstanceSpaceOrigin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortedInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBuiltInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBuiltInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltInstanceBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuiltInstanceBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBoundsList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBoundsList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceBoundsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionLayerNumNodes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionLayerNumNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheMeshExtendedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheMeshExtendedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCountToRender_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceCountToRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_MetaData[] = {
		{ "Comment", "// If true then we allow a translated space when building the cluster tree.\n// This can help for impementations (foliage) where we can have instances with offsets to large for single float precision.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "If true then we allow a translated space when building the cluster tree.\nThis can help for impementations (foliage) where we can have instances with offsets to large for single float precision." },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bUseTranslatedInstanceSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace = { "bUseTranslatedInstanceSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin_MetaData[] = {
		{ "Comment", "// Origin of the translated space used when building the cluster tree.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Origin of the translated space used when building the cluster tree." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin = { "TranslatedInstanceSpaceOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, TranslatedInstanceSpaceOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner = { "SortedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData[] = {
		{ "Comment", "// Table for remapping instances from cluster tree to PerInstanceSMData order\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Table for remapping instances from cluster tree to PerInstanceSMData order" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances = { "SortedInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, SortedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData[] = {
		{ "Comment", "// The number of instances in the ClusterTree. Subsequent instances will always be rendered.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of instances in the ClusterTree. Subsequent instances will always be rendered." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances = { "NumBuiltInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData[] = {
		{ "Comment", "// Bounding box of any built instances (cached from the ClusterTree)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any built instances (cached from the ClusterTree)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds = { "BuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData[] = {
		{ "Comment", "// Bounding box of any unbuilt instances\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any unbuilt instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds = { "UnbuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData[] = {
		{ "Comment", "// Bounds of each individual unbuilt instance, used for LOD calculation\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounds of each individual unbuilt instance, used for LOD calculation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Comment", "// Enable for detail meshes that don't really affect the game. Disable for anything important.\n// Typically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Enable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bEnableDensityScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData[] = {
		{ "Comment", "// The number of nodes in the occlusion layer\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of nodes in the occlusion layer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes = { "OcclusionLayerNumNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData[] = {
		{ "Comment", "// The last mesh bounds that was cache\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The last mesh bounds that was cache" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds = { "CacheMeshExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData[] = {
		{ "Comment", "// Instances to render (including removed one until the build is complete)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Instances to render (including removed one until the build is complete)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender = { "InstanceCountToRender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, InstanceCountToRender), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
		&UHierarchicalInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHierarchicalInstancedStaticMeshComponent>()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalInstancedStaticMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::EnumInfo[] = {
		{ EHISMViewRelevanceType_StaticEnum, TEXT("EHISMViewRelevanceType"), &Z_Registration_Info_UEnum_EHISMViewRelevanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1164148754U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FClusterNode_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewStructOps, TEXT("ClusterNode_DEPRECATED"), &Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterNode_DEPRECATED), 2269852281U) },
		{ FClusterNode::StaticStruct, Z_Construct_UScriptStruct_FClusterNode_Statics::NewStructOps, TEXT("ClusterNode"), &Z_Registration_Info_UScriptStruct_ClusterNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterNode), 568560542U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("UHierarchicalInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHierarchicalInstancedStaticMeshComponent), 3754129967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_2177456654(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
