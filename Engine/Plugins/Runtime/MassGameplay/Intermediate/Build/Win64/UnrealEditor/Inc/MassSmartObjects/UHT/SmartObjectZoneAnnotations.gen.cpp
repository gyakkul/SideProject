// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/SmartObjectZoneAnnotations.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectZoneAnnotations() {}
// Cross Module References
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectZoneAnnotations();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectZoneAnnotations_NoRegister();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectAnnotationData();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectLaneLocation();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphDataHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation;
class UScriptStruct* FSmartObjectLaneLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectLaneLocation, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("SmartObjectLaneLocation"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FSmartObjectLaneLocation>()
{
	return FSmartObjectLaneLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LaneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to keep track of a SmartObject entry point on a given lane. */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Struct to keep track of a SmartObject entry point on a given lane." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectLaneLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_ObjectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_ObjectHandle = { "ObjectHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectLaneLocation, ObjectHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_ObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_ObjectHandle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_LaneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_LaneIndex = { "LaneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectLaneLocation, LaneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_LaneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_LaneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_DistanceAlongLane = { "DistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectLaneLocation, DistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_ObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_LaneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewProp_DistanceAlongLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"SmartObjectLaneLocation",
		sizeof(FSmartObjectLaneLocation),
		alignof(FSmartObjectLaneLocation),
		Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectLaneLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices;
class UScriptStruct* FSmartObjectLaneLocationIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("SmartObjectLaneLocationIndices"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FSmartObjectLaneLocationIndices>()
{
	return FSmartObjectLaneLocationIndices::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_SmartObjectLaneLocationIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectLaneLocationIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectLaneLocationIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to store indices to all entry points on a given lane.\n * Used as a container wrapper to be able to use in a TMap.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Struct to store indices to all entry points on a given lane.\nUsed as a container wrapper to be able to use in a TMap." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectLaneLocationIndices>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices_Inner = { "SmartObjectLaneLocationIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices = { "SmartObjectLaneLocationIndices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectLaneLocationIndices, SmartObjectLaneLocationIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewProp_SmartObjectLaneLocationIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"SmartObjectLaneLocationIndices",
		sizeof(FSmartObjectLaneLocationIndices),
		alignof(FSmartObjectLaneLocationIndices),
		Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData;
class UScriptStruct* FSmartObjectAnnotationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectAnnotationData, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("SmartObjectAnnotationData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FSmartObjectAnnotationData>()
{
	return FSmartObjectAnnotationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AffectedLanes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedLanes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedLanes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectLaneLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectLaneLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectLaneLocations;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SmartObjectToLaneLocationIndexLookup_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectToLaneLocationIndexLookup_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectToLaneLocationIndexLookup_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SmartObjectToLaneLocationIndexLookup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneToLaneLocationIndicesLookup_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LaneToLaneLocationIndicesLookup_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneToLaneLocationIndicesLookup_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LaneToLaneLocationIndicesLookup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per ZoneGraphData smart object look up data. */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Per ZoneGraphData smart object look up data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectAnnotationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_DataHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Handle of the ZoneGraphData that this smart object annotation data is associated to */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Handle of the ZoneGraphData that this smart object annotation data is associated to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectAnnotationData, DataHandle), Z_Construct_UScriptStruct_FZoneGraphDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_DataHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_DataHandle_MetaData)) }; // 3290288725
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes_Inner = { "AffectedLanes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes = { "AffectedLanes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectAnnotationData, AffectedLanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations_Inner = { "SmartObjectLaneLocations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectLaneLocation, METADATA_PARAMS(nullptr, 0) }; // 325108713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations = { "SmartObjectLaneLocations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectAnnotationData, SmartObjectLaneLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations_MetaData)) }; // 325108713
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_ValueProp = { "SmartObjectToLaneLocationIndexLookup", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_Key_KeyProp = { "SmartObjectToLaneLocationIndexLookup_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(nullptr, 0) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup = { "SmartObjectToLaneLocationIndexLookup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectAnnotationData, SmartObjectToLaneLocationIndexLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_MetaData)) }; // 3072114966
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_ValueProp = { "LaneToLaneLocationIndicesLookup", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices, METADATA_PARAMS(nullptr, 0) }; // 3626100465
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_Key_KeyProp = { "LaneToLaneLocationIndicesLookup_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup = { "LaneToLaneLocationIndicesLookup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectAnnotationData, LaneToLaneLocationIndicesLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_MetaData)) }; // 3626100465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_DataHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_AffectedLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectLaneLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_SmartObjectToLaneLocationIndexLookup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewProp_LaneToLaneLocationIndicesLookup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"SmartObjectAnnotationData",
		sizeof(FSmartObjectAnnotationData),
		alignof(FSmartObjectAnnotationData),
		Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectAnnotationData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData.InnerSingleton;
	}
	void USmartObjectZoneAnnotations::StaticRegisterNativesUSmartObjectZoneAnnotations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectZoneAnnotations);
	UClass* Z_Construct_UClass_USmartObjectZoneAnnotations_NoRegister()
	{
		return USmartObjectZoneAnnotations::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectZoneAnnotations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedLaneTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedLaneTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectAnnotationDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectAnnotationDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectAnnotationDataArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartObjectSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoneGraphAnnotationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * ZoneGraph annotations for smart objects\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SmartObjectZoneAnnotations.h" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "ZoneGraph annotations for smart objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_AffectedLaneTags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Filter specifying which lanes the behavior is applied to. */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Filter specifying which lanes the behavior is applied to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_AffectedLaneTags = { "AffectedLaneTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectZoneAnnotations, AffectedLaneTags), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_AffectedLaneTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_AffectedLaneTags_MetaData)) }; // 58618928
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray_Inner = { "SmartObjectAnnotationDataArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectAnnotationData, METADATA_PARAMS(nullptr, 0) }; // 1089588956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Entry points graph for each ZoneGraphData. */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Entry points graph for each ZoneGraphData." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray = { "SmartObjectAnnotationDataArray", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectZoneAnnotations, SmartObjectAnnotationDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray_MetaData)) }; // 1089588956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_BehaviorTag_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Tag to mark the lanes that offers smart objects. */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Tag to mark the lanes that offers smart objects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_BehaviorTag = { "BehaviorTag", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectZoneAnnotations, BehaviorTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_BehaviorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_BehaviorTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectSubsystem_MetaData[] = {
		{ "Comment", "/** Cached SmartObjectSubsystem */" },
		{ "ModuleRelativePath", "Public/SmartObjectZoneAnnotations.h" },
		{ "ToolTip", "Cached SmartObjectSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectSubsystem = { "SmartObjectSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectZoneAnnotations, SmartObjectSubsystem), Z_Construct_UClass_USmartObjectSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_AffectedLaneTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectAnnotationDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_BehaviorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::NewProp_SmartObjectSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectZoneAnnotations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::ClassParams = {
		&USmartObjectZoneAnnotations::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectZoneAnnotations()
	{
		if (!Z_Registration_Info_UClass_USmartObjectZoneAnnotations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectZoneAnnotations.OuterSingleton, Z_Construct_UClass_USmartObjectZoneAnnotations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectZoneAnnotations.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<USmartObjectZoneAnnotations>()
	{
		return USmartObjectZoneAnnotations::StaticClass();
	}
	USmartObjectZoneAnnotations::USmartObjectZoneAnnotations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectZoneAnnotations);
	USmartObjectZoneAnnotations::~USmartObjectZoneAnnotations() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USmartObjectZoneAnnotations)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectLaneLocation::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics::NewStructOps, TEXT("SmartObjectLaneLocation"), &Z_Registration_Info_UScriptStruct_SmartObjectLaneLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectLaneLocation), 325108713U) },
		{ FSmartObjectLaneLocationIndices::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics::NewStructOps, TEXT("SmartObjectLaneLocationIndices"), &Z_Registration_Info_UScriptStruct_SmartObjectLaneLocationIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectLaneLocationIndices), 3626100465U) },
		{ FSmartObjectAnnotationData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics::NewStructOps, TEXT("SmartObjectAnnotationData"), &Z_Registration_Info_UScriptStruct_SmartObjectAnnotationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectAnnotationData), 1089588956U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectZoneAnnotations, USmartObjectZoneAnnotations::StaticClass, TEXT("USmartObjectZoneAnnotations"), &Z_Registration_Info_UClass_USmartObjectZoneAnnotations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectZoneAnnotations), 4082714674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_1050261257(TEXT("/Script/MassSmartObjects"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
