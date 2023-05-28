// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveFunctionCollapseBPLibrary.h"
#include "WaveFunctionCollapseModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveFunctionCollapseBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WaveFunctionCollapse();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseBPLibrary();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_NoRegister();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister();
	WAVEFUNCTIONCOLLAPSE_API UEnum* Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOption();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseTile();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor;
class UScriptStruct* FWaveFunctionCollapseNeighbor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseNeighbor"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseNeighbor>()
{
	return FWaveFunctionCollapseNeighbor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Adjacency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeighborObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseNeighbor>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighbor, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency_MetaData)) }; // 1823471256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighbor, Step), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Step_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_NeighborObject_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, Blueprint" },
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_NeighborObject = { "NeighborObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighbor, NeighborObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_NeighborObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_NeighborObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewProp_NeighborObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseNeighbor",
		sizeof(FWaveFunctionCollapseNeighbor),
		alignof(FWaveFunctionCollapseNeighbor),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule;
class UScriptStruct* FWaveFunctionCollapseNeighborRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseNeighborRule"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseNeighborRule>()
{
	return FWaveFunctionCollapseNeighborRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Neighbors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseNeighborRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_KeyObject_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, Blueprint" },
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_KeyObject = { "KeyObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighborRule, KeyObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_KeyObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_KeyObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor, METADATA_PARAMS(nullptr, 0) }; // 2494458651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighborRule, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors_MetaData)) }; // 2494458651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects_Inner = { "SpawnObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, Blueprint" },
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects = { "SpawnObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighborRule, SpawnObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnRelativeTransform_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnRelativeTransform = { "SpawnRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighborRule, SpawnRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnChance_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* SpawnChance 1 = 100 % chance to spawn, SpawnChance 0 = 0 % chance to spawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "SpawnChance 1 = 100 % chance to spawn, SpawnChance 0 = 0 % chance to spawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseNeighborRule, SpawnChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnChance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_KeyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewProp_SpawnChance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseNeighborRule",
		sizeof(FWaveFunctionCollapseNeighborRule),
		alignof(FWaveFunctionCollapseNeighborRule),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule.InnerSingleton;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execMakeVoidOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWaveFunctionCollapseOption*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::MakeVoidOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execMakeBorderOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWaveFunctionCollapseOption*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::MakeBorderOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execMakeEmptyOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWaveFunctionCollapseOption*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::MakeEmptyOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execGetPositionToOptionMapFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
		P_GET_TMAP_REF(FIntVector,FWaveFunctionCollapseOption,Z_Param_Out_PositionToOptionMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::GetPositionToOptionMapFromActor(Z_Param_Actor,Z_Param_TileSize,Z_Param_Out_PositionToOptionMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execDeriveModelFromActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UWaveFunctionCollapseModel,Z_Param_WFCModel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
		P_GET_UBOOL(Z_Param_bIsBorderEmptyOption);
		P_GET_UBOOL(Z_Param_bIsMinZFloorOption);
		P_GET_UBOOL(Z_Param_bUseUniformWeightDistribution);
		P_GET_UBOOL(Z_Param_bAutoDeriveZAxisRotationConstraints);
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_SpawnExclusionAssets);
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_IgnoreRotationAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWaveFunctionCollapseBPLibrary::DeriveModelFromActors(Z_Param_Out_Actors,Z_Param_WFCModel,Z_Param_TileSize,Z_Param_bIsBorderEmptyOption,Z_Param_bIsMinZFloorOption,Z_Param_bUseUniformWeightDistribution,Z_Param_bAutoDeriveZAxisRotationConstraints,Z_Param_Out_SpawnExclusionAssets,Z_Param_Out_IgnoreRotationAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execSanitizeRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::SanitizeRotator(Z_Param_Rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execIsSoftObjPathEqual)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_SoftObjectPathA);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_SoftObjectPathB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::IsSoftObjPathEqual(Z_Param_Out_SoftObjectPathA,Z_Param_Out_SoftObjectPathB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execAddToAdjacencyToOptionsMap)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseAdjacencyToOptionsMap,Z_Param_Out_AdjacencyToOptionsMap);
		P_GET_ENUM(EWaveFunctionCollapseAdjacency,Z_Param_Adjacency);
		P_GET_STRUCT(FWaveFunctionCollapseOption,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWaveFunctionCollapseBPLibrary::AddToAdjacencyToOptionsMap(Z_Param_Out_AdjacencyToOptionsMap,EWaveFunctionCollapseAdjacency(Z_Param_Adjacency),Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execGetNextZAxisClockwiseAdjacency)
	{
		P_GET_ENUM(EWaveFunctionCollapseAdjacency,Z_Param_Adjacency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWaveFunctionCollapseAdjacency*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::GetNextZAxisClockwiseAdjacency(EWaveFunctionCollapseAdjacency(Z_Param_Adjacency));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execGetOppositeAdjacency)
	{
		P_GET_ENUM(EWaveFunctionCollapseAdjacency,Z_Param_Adjacency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWaveFunctionCollapseAdjacency*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::GetOppositeAdjacency(EWaveFunctionCollapseAdjacency(Z_Param_Adjacency));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execIsOptionContained)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_Option);
		P_GET_TARRAY_REF(FWaveFunctionCollapseOption,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::IsOptionContained(Z_Param_Out_Option,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execGetAdjacentPositions)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_STRUCT(FIntVector,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FIntVector,EWaveFunctionCollapseAdjacency>*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::GetAdjacentPositions(Z_Param_Position,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execGetAdjacentIndices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FIntVector,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,EWaveFunctionCollapseAdjacency>*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::GetAdjacentIndices(Z_Param_Index,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execBuildInitialTile)
	{
		P_GET_OBJECT(UWaveFunctionCollapseModel,Z_Param_WFCModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWaveFunctionCollapseTile*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::BuildInitialTile(Z_Param_WFCModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execIndexAsPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FIntVector,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::IndexAsPosition(Z_Param_Index,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execPositionAsIndex)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_STRUCT(FIntVector,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::PositionAsIndex(Z_Param_Position,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseBPLibrary::execCalculateShannonEntropy)
	{
		P_GET_TARRAY_REF(FWaveFunctionCollapseOption,Z_Param_Out_Options);
		P_GET_OBJECT(UWaveFunctionCollapseModel,Z_Param_WFCModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UWaveFunctionCollapseBPLibrary::CalculateShannonEntropy(Z_Param_Out_Options,Z_Param_WFCModel);
		P_NATIVE_END;
	}
	void UWaveFunctionCollapseBPLibrary::StaticRegisterNativesUWaveFunctionCollapseBPLibrary()
	{
		UClass* Class = UWaveFunctionCollapseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAdjacencyToOptionsMap", &UWaveFunctionCollapseBPLibrary::execAddToAdjacencyToOptionsMap },
			{ "BuildInitialTile", &UWaveFunctionCollapseBPLibrary::execBuildInitialTile },
			{ "CalculateShannonEntropy", &UWaveFunctionCollapseBPLibrary::execCalculateShannonEntropy },
			{ "DeriveModelFromActors", &UWaveFunctionCollapseBPLibrary::execDeriveModelFromActors },
			{ "GetAdjacentIndices", &UWaveFunctionCollapseBPLibrary::execGetAdjacentIndices },
			{ "GetAdjacentPositions", &UWaveFunctionCollapseBPLibrary::execGetAdjacentPositions },
			{ "GetNextZAxisClockwiseAdjacency", &UWaveFunctionCollapseBPLibrary::execGetNextZAxisClockwiseAdjacency },
			{ "GetOppositeAdjacency", &UWaveFunctionCollapseBPLibrary::execGetOppositeAdjacency },
			{ "GetPositionToOptionMapFromActor", &UWaveFunctionCollapseBPLibrary::execGetPositionToOptionMapFromActor },
			{ "IndexAsPosition", &UWaveFunctionCollapseBPLibrary::execIndexAsPosition },
			{ "IsOptionContained", &UWaveFunctionCollapseBPLibrary::execIsOptionContained },
			{ "IsSoftObjPathEqual", &UWaveFunctionCollapseBPLibrary::execIsSoftObjPathEqual },
			{ "MakeBorderOption", &UWaveFunctionCollapseBPLibrary::execMakeBorderOption },
			{ "MakeEmptyOption", &UWaveFunctionCollapseBPLibrary::execMakeEmptyOption },
			{ "MakeVoidOption", &UWaveFunctionCollapseBPLibrary::execMakeVoidOption },
			{ "PositionAsIndex", &UWaveFunctionCollapseBPLibrary::execPositionAsIndex },
			{ "SanitizeRotator", &UWaveFunctionCollapseBPLibrary::execSanitizeRotator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventAddToAdjacencyToOptionsMap_Parms
		{
			FWaveFunctionCollapseAdjacencyToOptionsMap AdjacencyToOptionsMap;
			EWaveFunctionCollapseAdjacency Adjacency;
			FWaveFunctionCollapseOption Option;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjacencyToOptionsMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap = { "AdjacencyToOptionsMap", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventAddToAdjacencyToOptionsMap_Parms, AdjacencyToOptionsMap), Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap, METADATA_PARAMS(nullptr, 0) }; // 2155592163
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventAddToAdjacencyToOptionsMap_Parms, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventAddToAdjacencyToOptionsMap_Parms, Option), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Add an entry to an AdjacencyToOptionsMap\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Add an entry to an AdjacencyToOptionsMap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "AddToAdjacencyToOptionsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::WaveFunctionCollapseBPLibrary_eventAddToAdjacencyToOptionsMap_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventBuildInitialTile_Parms
		{
			UWaveFunctionCollapseModel* WFCModel;
			FWaveFunctionCollapseTile ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WFCModel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::NewProp_WFCModel = { "WFCModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventBuildInitialTile_Parms, WFCModel), Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventBuildInitialTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::NewProp_WFCModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Builds the initial tile which adds every unique option in a model to its RemainingOptions array and calculates its entropy\n\x09* @param WFCModel WaveFunctionCollapseModel\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Builds the initial tile which adds every unique option in a model to its RemainingOptions array and calculates its entropy\n@param WFCModel WaveFunctionCollapseModel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "BuildInitialTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::WaveFunctionCollapseBPLibrary_eventBuildInitialTile_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventCalculateShannonEntropy_Parms
		{
			TArray<FWaveFunctionCollapseOption> Options;
			UWaveFunctionCollapseModel* WFCModel;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WFCModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventCalculateShannonEntropy_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options_MetaData)) }; // 919664607
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_WFCModel = { "WFCModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventCalculateShannonEntropy_Parms, WFCModel), Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventCalculateShannonEntropy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_WFCModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Calculates Shannon Entropy from an array of options and a given model\n\x09* @param Options Array of options\n\x09* @param WFCModel WaveFunctionCollapseModel that stores weights for options \n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Calculates Shannon Entropy from an array of options and a given model\n@param Options Array of options\n@param WFCModel WaveFunctionCollapseModel that stores weights for options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "CalculateShannonEntropy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::WaveFunctionCollapseBPLibrary_eventCalculateShannonEntropy_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms
		{
			TArray<AActor*> Actors;
			UWaveFunctionCollapseModel* WFCModel;
			float TileSize;
			bool bIsBorderEmptyOption;
			bool bIsMinZFloorOption;
			bool bUseUniformWeightDistribution;
			bool bAutoDeriveZAxisRotationConstraints;
			TArray<FSoftObjectPath> SpawnExclusionAssets;
			TArray<FSoftObjectPath> IgnoreRotationAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WFCModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static void NewProp_bIsBorderEmptyOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBorderEmptyOption;
		static void NewProp_bIsMinZFloorOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMinZFloorOption;
		static void NewProp_bUseUniformWeightDistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUniformWeightDistribution;
		static void NewProp_bAutoDeriveZAxisRotationConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeriveZAxisRotationConstraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnExclusionAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnExclusionAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnExclusionAssets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreRotationAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreRotationAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreRotationAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_WFCModel = { "WFCModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms, WFCModel), Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms, TileSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsBorderEmptyOption_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms*)Obj)->bIsBorderEmptyOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsBorderEmptyOption = { "bIsBorderEmptyOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsBorderEmptyOption_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsMinZFloorOption_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms*)Obj)->bIsMinZFloorOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsMinZFloorOption = { "bIsMinZFloorOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsMinZFloorOption_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bUseUniformWeightDistribution_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms*)Obj)->bUseUniformWeightDistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bUseUniformWeightDistribution = { "bUseUniformWeightDistribution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bUseUniformWeightDistribution_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bAutoDeriveZAxisRotationConstraints_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms*)Obj)->bAutoDeriveZAxisRotationConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bAutoDeriveZAxisRotationConstraints = { "bAutoDeriveZAxisRotationConstraints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bAutoDeriveZAxisRotationConstraints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets_Inner = { "SpawnExclusionAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets = { "SpawnExclusionAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms, SpawnExclusionAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets_Inner = { "IgnoreRotationAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets = { "IgnoreRotationAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms, IgnoreRotationAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_WFCModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsBorderEmptyOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bIsMinZFloorOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bUseUniformWeightDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_bAutoDeriveZAxisRotationConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_SpawnExclusionAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::NewProp_IgnoreRotationAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Derive constraints from a given layout of actors and append them to a model\n\x09* @param Actors array of actors to evaluate\n\x09* @param WFCModel to add constraints to\n\x09* @param TileSize distance between tiles\n\x09* @param bIsBorderEmptyOption should the border be considered EmptyOption\n\x09* @param bIsMinZFloorOption should the minimum Z actors be considered floor options (nothing can go below it)\n\x09* @param bAutoDeriveZAxisRotationConstraints should it auto derive z-axis rotational variants\n\x09* @param SpawnExclusionAssets assets to exclude when spawning\n\x09* @param IgnoreRotationAssets assets to ignore rotation variants\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Derive constraints from a given layout of actors and append them to a model\n@param Actors array of actors to evaluate\n@param WFCModel to add constraints to\n@param TileSize distance between tiles\n@param bIsBorderEmptyOption should the border be considered EmptyOption\n@param bIsMinZFloorOption should the minimum Z actors be considered floor options (nothing can go below it)\n@param bAutoDeriveZAxisRotationConstraints should it auto derive z-axis rotational variants\n@param SpawnExclusionAssets assets to exclude when spawning\n@param IgnoreRotationAssets assets to ignore rotation variants" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "DeriveModelFromActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::WaveFunctionCollapseBPLibrary_eventDeriveModelFromActors_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventGetAdjacentIndices_Parms
		{
			int32 Index;
			FIntVector Resolution;
			TMap<int32,EWaveFunctionCollapseAdjacency> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentIndices_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentIndices_Parms, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentIndices_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get adjacent indices of a given index and its adjacency\n\x09* @param Index 2D array index\n\x09* @param Resolution\n\x09* @return Map of valid adjacent indices and its adjacency in relation to the given index\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Get adjacent indices of a given index and its adjacency\n@param Index 2D array index\n@param Resolution\n@return Map of valid adjacent indices and its adjacency in relation to the given index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "GetAdjacentIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::WaveFunctionCollapseBPLibrary_eventGetAdjacentIndices_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventGetAdjacentPositions_Parms
		{
			FIntVector Position;
			FIntVector Resolution;
			TMap<FIntVector,EWaveFunctionCollapseAdjacency> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentPositions_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentPositions_Parms, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetAdjacentPositions_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get adjacent positions of a given position and its adjacency\n\x09* @param Position 3D grid position\n\x09* @param Resolution Grid resolution\n\x09* @return Map of valid adjacent positions and its adjacency in relation to the given position\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Get adjacent positions of a given position and its adjacency\n@param Position 3D grid position\n@param Resolution Grid resolution\n@return Map of valid adjacent positions and its adjacency in relation to the given position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "GetAdjacentPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::WaveFunctionCollapseBPLibrary_eventGetAdjacentPositions_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventGetNextZAxisClockwiseAdjacency_Parms
		{
			EWaveFunctionCollapseAdjacency Adjacency;
			EWaveFunctionCollapseAdjacency ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetNextZAxisClockwiseAdjacency_Parms, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetNextZAxisClockwiseAdjacency_Parms, ReturnValue), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get the next adjacency in clockwise direction on a Z-axis for a given adjacency.\n\x09* For example GetNextZAxisClockwiseAdjacency(Front) will return Right.\n\x09* Up or Down will return the original adjacency.\n\x09* @param Adjacency Adjacency direction\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Get the next adjacency in clockwise direction on a Z-axis for a given adjacency.\nFor example GetNextZAxisClockwiseAdjacency(Front) will return Right.\nUp or Down will return the original adjacency.\n@param Adjacency Adjacency direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "GetNextZAxisClockwiseAdjacency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::WaveFunctionCollapseBPLibrary_eventGetNextZAxisClockwiseAdjacency_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventGetOppositeAdjacency_Parms
		{
			EWaveFunctionCollapseAdjacency Adjacency;
			EWaveFunctionCollapseAdjacency ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetOppositeAdjacency_Parms, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetOppositeAdjacency_Parms, ReturnValue), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get the opposite adjacency for a given adjacency.  For example GetOppositeAdjacency(Front) will return Back.\n\x09* @param Adjacency Adjacency direction\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Get the opposite adjacency for a given adjacency.  For example GetOppositeAdjacency(Front) will return Back.\n@param Adjacency Adjacency direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "GetOppositeAdjacency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::WaveFunctionCollapseBPLibrary_eventGetOppositeAdjacency_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms
		{
			AActor* Actor;
			float TileSize;
			TMap<FIntVector,FWaveFunctionCollapseOption> PositionToOptionMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionToOptionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionToOptionMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_PositionToOptionMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms, TileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap_ValueProp = { "PositionToOptionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap_Key_KeyProp = { "PositionToOptionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap = { "PositionToOptionMap", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms, PositionToOptionMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 919664607
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_PositionToOptionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get PositionToOptionsMap from a given actor that has ISM components.\n\x09* This is useful when you want to derive neighboring tile data from a WFC-solved actor to be used for post processing.\n\x09* This will only evaluate ISM components.\n\x09* @param Actor Actor with ISM components\n\x09* @param TileSize distance between tiles\n\x09* @param PositionToOptionMap \n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Get PositionToOptionsMap from a given actor that has ISM components.\nThis is useful when you want to derive neighboring tile data from a WFC-solved actor to be used for post processing.\nThis will only evaluate ISM components.\n@param Actor Actor with ISM components\n@param TileSize distance between tiles\n@param PositionToOptionMap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "GetPositionToOptionMapFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::WaveFunctionCollapseBPLibrary_eventGetPositionToOptionMapFromActor_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventIndexAsPosition_Parms
		{
			int32 Index;
			FIntVector Resolution;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIndexAsPosition_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIndexAsPosition_Parms, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIndexAsPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Convert 2D array index to 3D grid position\n\x09* @param Index 2D array index\n\x09* @param Resolution\n\x09* @return 3D grid position\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Convert 2D array index to 3D grid position\n@param Index 2D array index\n@param Resolution\n@return 3D grid position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "IndexAsPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::WaveFunctionCollapseBPLibrary_eventIndexAsPosition_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms
		{
			FWaveFunctionCollapseOption Option;
			TArray<FWaveFunctionCollapseOption> Options;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms, Option), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Option_MetaData)) }; // 919664607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options_MetaData)) }; // 919664607
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Is the option contained in the given options array\n\x09* @param Option Option to check for\n\x09* @param Options Array of options\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Is the option contained in the given options array\n@param Option Option to check for\n@param Options Array of options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "IsOptionContained", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::WaveFunctionCollapseBPLibrary_eventIsOptionContained_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms
		{
			FSoftObjectPath SoftObjectPathA;
			FSoftObjectPath SoftObjectPathB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPathA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPathA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPathB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPathB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathA = { "SoftObjectPathA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms, SoftObjectPathA), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathB = { "SoftObjectPathB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms, SoftObjectPathB), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathB_MetaData)) };
	void Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_SoftObjectPathB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "IsSoftObjPathEqual", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::WaveFunctionCollapseBPLibrary_eventIsSoftObjPathEqual_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventMakeBorderOption_Parms
		{
			FWaveFunctionCollapseOption ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventMakeBorderOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Make FWaveFunctionCollapseOption of type: BorderOption\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Make FWaveFunctionCollapseOption of type: BorderOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "MakeBorderOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::WaveFunctionCollapseBPLibrary_eventMakeBorderOption_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventMakeEmptyOption_Parms
		{
			FWaveFunctionCollapseOption ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventMakeEmptyOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Make FWaveFunctionCollapseOption of type: EmptyOption\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Make FWaveFunctionCollapseOption of type: EmptyOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "MakeEmptyOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::WaveFunctionCollapseBPLibrary_eventMakeEmptyOption_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventMakeVoidOption_Parms
		{
			FWaveFunctionCollapseOption ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventMakeVoidOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Make FWaveFunctionCollapseOption of type: VoidOption\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Make FWaveFunctionCollapseOption of type: VoidOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "MakeVoidOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::WaveFunctionCollapseBPLibrary_eventMakeVoidOption_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventPositionAsIndex_Parms
		{
			FIntVector Position;
			FIntVector Resolution;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventPositionAsIndex_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventPositionAsIndex_Parms, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventPositionAsIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Convert 3D grid position to 2D array index\n\x09* @param Position 3D grid position\n\x09* @param Resolution Grid resolution\n\x09* @return 2D array index\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Convert 3D grid position to 2D array index\n@param Position 3D grid position\n@param Resolution Grid resolution\n@return 2D array index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "PositionAsIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::WaveFunctionCollapseBPLibrary_eventPositionAsIndex_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics
	{
		struct WaveFunctionCollapseBPLibrary_eventSanitizeRotator_Parms
		{
			FRotator Rotator;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventSanitizeRotator_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseBPLibrary_eventSanitizeRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Converts Rotator to Matrix and back to sanitize multiple representations of the same rotation to a common Rotator value\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
		{ "ToolTip", "Converts Rotator to Matrix and back to sanitize multiple representations of the same rotation to a common Rotator value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, nullptr, "SanitizeRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::WaveFunctionCollapseBPLibrary_eventSanitizeRotator_Parms), Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveFunctionCollapseBPLibrary);
	UClass* Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_NoRegister()
	{
		return UWaveFunctionCollapseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_AddToAdjacencyToOptionsMap, "AddToAdjacencyToOptionsMap" }, // 3369804891
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_BuildInitialTile, "BuildInitialTile" }, // 1016682543
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_CalculateShannonEntropy, "CalculateShannonEntropy" }, // 248972996
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_DeriveModelFromActors, "DeriveModelFromActors" }, // 4093068427
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentIndices, "GetAdjacentIndices" }, // 4019786378
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetAdjacentPositions, "GetAdjacentPositions" }, // 2537338685
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetNextZAxisClockwiseAdjacency, "GetNextZAxisClockwiseAdjacency" }, // 447229088
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetOppositeAdjacency, "GetOppositeAdjacency" }, // 2347365081
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_GetPositionToOptionMapFromActor, "GetPositionToOptionMapFromActor" }, // 1610113938
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IndexAsPosition, "IndexAsPosition" }, // 2356714381
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsOptionContained, "IsOptionContained" }, // 1679624627
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_IsSoftObjPathEqual, "IsSoftObjPathEqual" }, // 3174474865
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeBorderOption, "MakeBorderOption" }, // 3880293448
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeEmptyOption, "MakeEmptyOption" }, // 316887155
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_MakeVoidOption, "MakeVoidOption" }, // 3447003490
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_PositionAsIndex, "PositionAsIndex" }, // 898469037
		{ &Z_Construct_UFunction_UWaveFunctionCollapseBPLibrary_SanitizeRotator, "SanitizeRotator" }, // 2724729915
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveFunctionCollapseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveFunctionCollapseBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::ClassParams = {
		&UWaveFunctionCollapseBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveFunctionCollapseBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UWaveFunctionCollapseBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveFunctionCollapseBPLibrary.OuterSingleton, Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveFunctionCollapseBPLibrary.OuterSingleton;
	}
	template<> WAVEFUNCTIONCOLLAPSE_API UClass* StaticClass<UWaveFunctionCollapseBPLibrary>()
	{
		return UWaveFunctionCollapseBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveFunctionCollapseBPLibrary);
	UWaveFunctionCollapseBPLibrary::~UWaveFunctionCollapseBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FWaveFunctionCollapseNeighbor::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics::NewStructOps, TEXT("WaveFunctionCollapseNeighbor"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighbor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseNeighbor), 2494458651U) },
		{ FWaveFunctionCollapseNeighborRule::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics::NewStructOps, TEXT("WaveFunctionCollapseNeighborRule"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseNeighborRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseNeighborRule), 1642316269U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveFunctionCollapseBPLibrary, UWaveFunctionCollapseBPLibrary::StaticClass, TEXT("UWaveFunctionCollapseBPLibrary"), &Z_Registration_Info_UClass_UWaveFunctionCollapseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveFunctionCollapseBPLibrary), 2963019588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_694122681(TEXT("/Script/WaveFunctionCollapse"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
