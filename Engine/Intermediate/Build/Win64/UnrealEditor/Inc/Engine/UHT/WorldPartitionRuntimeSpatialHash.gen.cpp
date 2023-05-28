// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHash() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo();
	ENGINE_API UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGrid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell;
class UScriptStruct* FSpatialHashStreamingGridLayerCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGridLayerCell"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGridLayerCell>()
{
	return FSpatialHashStreamingGridLayerCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGridLayerCell>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGridLayerCell, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewProp_GridCells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SpatialHashStreamingGridLayerCell",
		sizeof(FSpatialHashStreamingGridLayerCell),
		alignof(FSpatialHashStreamingGridLayerCell),
		Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell()
	{
		if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel;
class UScriptStruct* FSpatialHashStreamingGridLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGridLevel"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGridLevel>()
{
	return FSpatialHashStreamingGridLevel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerCells;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCellsMapping_ValueProp;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LayerCellsMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerCellsMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerCellsMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming grid level\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a PIE/Game streaming grid level" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGridLevel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_Inner = { "LayerCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell, METADATA_PARAMS(nullptr, 0) }; // 2534217092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the grid cells\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the grid cells" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells = { "LayerCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGridLevel, LayerCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_MetaData)) }; // 2534217092
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_ValueProp = { "LayerCellsMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_Key_KeyProp = { "LayerCellsMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the grid cells index mapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the grid cells index mapping" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping = { "LayerCellsMapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGridLevel, LayerCellsMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewProp_LayerCellsMapping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SpatialHashStreamingGridLevel",
		sizeof(FSpatialHashStreamingGridLevel),
		alignof(FSpatialHashStreamingGridLevel),
		Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel()
	{
		if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid;
class UScriptStruct* FSpatialHashStreamingGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashStreamingGrid"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashStreamingGrid>()
{
	return FSpatialHashStreamingGrid::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowStreaming_MetaData[];
#endif
		static void NewProp_bBlockOnSlowStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[];
#endif
		static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming grid\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a PIE/Game streaming grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashStreamingGrid>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, GridName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, CellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, LoadingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void* Obj)
	{
		((FSpatialHashStreamingGrid*)Obj)->bBlockOnSlowStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming = { "bBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpatialHashStreamingGrid), &Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_Inner = { "GridLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel, METADATA_PARAMS(nullptr, 0) }; // 3844060053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels = { "GridLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, GridLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_MetaData)) }; // 3844060053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, WorldBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
	{
		((FSpatialHashStreamingGrid*)Obj)->bClientOnlyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpatialHashStreamingGrid), &Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashStreamingGrid, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_LoadingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_GridLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_WorldBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_HLODLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SpatialHashStreamingGrid",
		sizeof(FSpatialHashStreamingGrid),
		alignof(FSpatialHashStreamingGrid),
		Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashStreamingGrid()
	{
		if (!Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid;
class UScriptStruct* FSpatialHashRuntimeGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpatialHashRuntimeGrid"));
	}
	return Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpatialHashRuntimeGrid>()
{
	return FSpatialHashRuntimeGrid::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowStreaming_MetaData[];
#endif
		static void NewProp_bBlockOnSlowStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[];
#endif
		static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a runtime grid (editing)\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents a runtime grid (editing)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashRuntimeGrid>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, GridName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, CellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, LoadingRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should streaming block in situations where cells aren't getting loaded fast enough. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Should streaming block in situations where cells aren't getting loaded fast enough." },
	};
#endif
	void Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void* Obj)
	{
		((FSpatialHashRuntimeGrid*)Obj)->bBlockOnSlowStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming = { "bBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpatialHashRuntimeGrid), &Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
	{
		((FSpatialHashRuntimeGrid*)Obj)->bClientOnlyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpatialHashRuntimeGrid), &Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpatialHashRuntimeGrid, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_GridName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_LoadingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bBlockOnSlowStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_bClientOnlyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewProp_HLODLayer,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SpatialHashRuntimeGrid",
		sizeof(FSpatialHashRuntimeGrid),
		alignof(FSpatialHashRuntimeGrid),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid()
	{
		if (!Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid.InnerSingleton;
	}
	void ASpatialHashRuntimeGridInfo::StaticRegisterNativesASpatialHashRuntimeGridInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpatialHashRuntimeGridInfo);
	UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister()
	{
		return ASpatialHashRuntimeGridInfo::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor keeping information regarding a runtime grid\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor keeping information regarding a runtime grid" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings = { "GridSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpatialHashRuntimeGridInfo, GridSettings), Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, METADATA_PARAMS(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings_MetaData)) }; // 3815509653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::NewProp_GridSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialHashRuntimeGridInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::ClassParams = {
		&ASpatialHashRuntimeGridInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialHashRuntimeGridInfo()
	{
		if (!Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton, Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASpatialHashRuntimeGridInfo>()
	{
		return ASpatialHashRuntimeGridInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialHashRuntimeGridInfo);
	ASpatialHashRuntimeGridInfo::~ASpatialHashRuntimeGridInfo() {}
	void URuntimeSpatialHashExternalStreamingObject::StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeSpatialHashExternalStreamingObject);
	UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister()
	{
		return URuntimeSpatialHashExternalStreamingObject::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingGrids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingGrids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingGrids;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CellToLevelStreamingPackage_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CellToLevelStreamingPackage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellToLevelStreamingPackage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CellToLevelStreamingPackage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_Inner = { "StreamingGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, METADATA_PARAMS(nullptr, 0) }; // 3484230444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_MetaData[] = {
		{ "Comment", "//~ End URuntimeHashExternalStreamingObjectBase Interface\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids = { "StreamingGrids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeSpatialHashExternalStreamingObject, StreamingGrids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_MetaData)) }; // 3484230444
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_ValueProp = { "CellToLevelStreamingPackage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_Key_KeyProp = { "CellToLevelStreamingPackage_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage = { "CellToLevelStreamingPackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeSpatialHashExternalStreamingObject, CellToLevelStreamingPackage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_StreamingGrids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::NewProp_CellToLevelStreamingPackage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeSpatialHashExternalStreamingObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::ClassParams = {
		&URuntimeSpatialHashExternalStreamingObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject()
	{
		if (!Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton, Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URuntimeSpatialHashExternalStreamingObject>()
	{
		return URuntimeSpatialHashExternalStreamingObject::StaticClass();
	}
	URuntimeSpatialHashExternalStreamingObject::URuntimeSpatialHashExternalStreamingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeSpatialHashExternalStreamingObject);
	URuntimeSpatialHashExternalStreamingObject::~URuntimeSpatialHashExternalStreamingObject() {}
	void UWorldPartitionRuntimeSpatialHash::StaticRegisterNativesUWorldPartitionRuntimeSpatialHash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeSpatialHash);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister()
	{
		return UWorldPartitionRuntimeSpatialHash::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Grids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewGrids_MetaData[];
#endif
		static void NewProp_bPreviewGrids_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewGrids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPreviewer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridPreviewer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableZCulling_MetaData[];
#endif
		static void NewProp_bEnableZCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableZCulling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingGrids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingGrids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingGrids;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ExternalStreamingObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStreamingObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalStreamingObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeHash,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_Inner = { "Grids", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid, METADATA_PARAMS(nullptr, 0) }; // 3815509653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids = { "Grids", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, Grids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_MetaData)) }; // 3815509653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_MetaData[] = {
		{ "Comment", "/** Whether to preview runtime grids. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Whether to preview runtime grids." },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeSpatialHash*)Obj)->bPreviewGrids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids = { "bPreviewGrids", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionRuntimeSpatialHash), &Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer = { "GridPreviewer", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, GridPreviewer), Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer_MetaData)) }; // 1130475674
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Whether this hash enables Z culling. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Whether this hash enables Z culling." },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeSpatialHash*)Obj)->bEnableZCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling = { "bEnableZCulling", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionRuntimeSpatialHash), &Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_Inner = { "StreamingGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid, METADATA_PARAMS(nullptr, 0) }; // 3484230444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_MetaData[] = {
		{ "Comment", "/** \n\x09 * Represents the streaming grids (PIE or Game)\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
		{ "ToolTip", "Represents the streaming grids (PIE or Game)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids = { "StreamingGrids", nullptr, (EPropertyFlags)0x0020880000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, StreamingGrids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_MetaData)) }; // 3484230444
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects_Inner = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHash, ExternalStreamingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_Grids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bPreviewGrids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_GridPreviewer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_StreamingGrids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_ExternalStreamingObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeSpatialHash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::ClassParams = {
		&UWorldPartitionRuntimeSpatialHash::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeSpatialHash>()
	{
		return UWorldPartitionRuntimeSpatialHash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeSpatialHash);
	UWorldPartitionRuntimeSpatialHash::~UWorldPartitionRuntimeSpatialHash() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ScriptStructInfo[] = {
		{ FSpatialHashStreamingGridLayerCell::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewStructOps, TEXT("SpatialHashStreamingGridLayerCell"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLayerCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGridLayerCell), 2534217092U) },
		{ FSpatialHashStreamingGridLevel::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewStructOps, TEXT("SpatialHashStreamingGridLevel"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGridLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGridLevel), 3844060053U) },
		{ FSpatialHashStreamingGrid::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewStructOps, TEXT("SpatialHashStreamingGrid"), &Z_Registration_Info_UScriptStruct_SpatialHashStreamingGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashStreamingGrid), 3484230444U) },
		{ FSpatialHashRuntimeGrid::StaticStruct, Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewStructOps, TEXT("SpatialHashRuntimeGrid"), &Z_Registration_Info_UScriptStruct_SpatialHashRuntimeGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashRuntimeGrid), 3815509653U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpatialHashRuntimeGridInfo, ASpatialHashRuntimeGridInfo::StaticClass, TEXT("ASpatialHashRuntimeGridInfo"), &Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpatialHashRuntimeGridInfo), 1262089224U) },
		{ Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject, URuntimeSpatialHashExternalStreamingObject::StaticClass, TEXT("URuntimeSpatialHashExternalStreamingObject"), &Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeSpatialHashExternalStreamingObject), 2467185764U) },
		{ Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash, UWorldPartitionRuntimeSpatialHash::StaticClass, TEXT("UWorldPartitionRuntimeSpatialHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeSpatialHash), 726409284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_3615264962(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
