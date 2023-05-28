// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphBVTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneGraphTags();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_FZoneShapePointType();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_FZoneShapeType();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneData();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuildSettings();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBVTree();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphDataHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneSection();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLinkedLane();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphStorage();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagInfo();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTessellationSettings();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneHandle();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneData();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneDesc();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneLinkData();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfile();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfileRef();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnection();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnector();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapePoint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneHandle;
class UScriptStruct* FZoneHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneHandle, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneHandle.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneHandle>()
{
	return FZoneHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FZoneHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneHandle_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneHandle_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneHandle",
		sizeof(FZoneHandle),
		alignof(FZoneHandle),
		Z_Construct_UScriptStruct_FZoneHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneHandle.InnerSingleton, Z_Construct_UScriptStruct_FZoneHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneHandle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneGraphTags;
	static UEnum* EZoneGraphTags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphTags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneGraphTags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneGraphTags, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneGraphTags"));
		}
		return Z_Registration_Info_UEnum_EZoneGraphTags.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneGraphTags>()
	{
		return EZoneGraphTags_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enumerators[] = {
		{ "EZoneGraphTags::MaxTags", (int64)EZoneGraphTags::MaxTags },
		{ "EZoneGraphTags::MaxTagIndex", (int64)EZoneGraphTags::MaxTagIndex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enum_MetaDataParams[] = {
		{ "MaxTagIndex.Name", "EZoneGraphTags::MaxTagIndex" },
		{ "MaxTags.Name", "EZoneGraphTags::MaxTags" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneGraphTags",
		"EZoneGraphTags",
		Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneGraphTags()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphTags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneGraphTags.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneGraphTags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneGraphTags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTag;
class UScriptStruct* FZoneGraphTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTag, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphTag"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTag.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphTag>()
{
	return FZoneGraphTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bit_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewProp_Bit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewProp_Bit = { "Bit", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTag, Bit), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewProp_Bit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewProp_Bit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewProp_Bit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphTag",
		sizeof(FZoneGraphTag),
		alignof(FZoneGraphTag),
		Z_Construct_UScriptStruct_FZoneGraphTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTag.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison;
	static UEnum* EZoneLaneTagMaskComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneLaneTagMaskComparison"));
		}
		return Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneLaneTagMaskComparison>()
	{
		return EZoneLaneTagMaskComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enumerators[] = {
		{ "EZoneLaneTagMaskComparison::Any", (int64)EZoneLaneTagMaskComparison::Any },
		{ "EZoneLaneTagMaskComparison::All", (int64)EZoneLaneTagMaskComparison::All },
		{ "EZoneLaneTagMaskComparison::Not", (int64)EZoneLaneTagMaskComparison::Not },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Does masks share ANY tags.\n" },
		{ "All.Name", "EZoneLaneTagMaskComparison::All" },
		{ "All.ToolTip", "Does masks share ANY tags." },
		{ "Any.Name", "EZoneLaneTagMaskComparison::Any" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "Not.Comment", "// Does masks share ALL tags.\n" },
		{ "Not.Name", "EZoneLaneTagMaskComparison::Not" },
		{ "Not.ToolTip", "Does masks share ALL tags." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneLaneTagMaskComparison",
		"EZoneLaneTagMaskComparison",
		Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagMask;
class UScriptStruct* FZoneGraphTagMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagMask, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphTagMask"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphTagMask>()
{
	return FZoneGraphTagMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewProp_Mask_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "// BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))  Blueprint does not understand uint32\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "BlueprintReadWrite, meta = (AllowPrivateAccess = \"true\"))  Blueprint does not understand uint32" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagMask, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewProp_Mask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewProp_Mask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagMask",
		sizeof(FZoneGraphTagMask),
		alignof(FZoneGraphTagMask),
		Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagMask.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter;
class UScriptStruct* FZoneGraphTagFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagFilter, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphTagFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphTagFilter>()
{
	return FZoneGraphTagFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnyTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Filter passes if any of the 'AnyTags', and all of the 'AllTags', and none of the 'NotTags' are present.\n// Setting include or exclude tags to None, will skip that particular check.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Filter passes if any of the 'AnyTags', and all of the 'AllTags', and none of the 'NotTags' are present.\nSetting include or exclude tags to None, will skip that particular check." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AnyTags_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AnyTags = { "AnyTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagFilter, AnyTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AnyTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AnyTags_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AllTags_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AllTags = { "AllTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagFilter, AllTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AllTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AllTags_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_NotTags_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_NotTags = { "NotTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagFilter, NotTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_NotTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_NotTags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AnyTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_AllTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewProp_NotTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagFilter",
		sizeof(FZoneGraphTagFilter),
		alignof(FZoneGraphTagFilter),
		Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo;
class UScriptStruct* FZoneGraphTagInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagInfo, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphTagInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphTagInfo>()
{
	return FZoneGraphTagInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagInfo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Zone" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagInfo, Tag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Tag_MetaData)) }; // 1504622355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagInfo",
		sizeof(FZoneGraphTagInfo),
		alignof(FZoneGraphTagInfo),
		Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneLaneDirection;
	static UEnum* EZoneLaneDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneLaneDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneLaneDirection"));
		}
		return Z_Registration_Info_UEnum_EZoneLaneDirection.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneLaneDirection>()
	{
		return EZoneLaneDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enumerators[] = {
		{ "EZoneLaneDirection::None", (int64)EZoneLaneDirection::None },
		{ "EZoneLaneDirection::Forward", (int64)EZoneLaneDirection::Forward },
		{ "EZoneLaneDirection::Backward", (int64)EZoneLaneDirection::Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Comment", "// Move forward relative to the markup.\n" },
		{ "Backward.Name", "EZoneLaneDirection::Backward" },
		{ "Backward.ToolTip", "Move forward relative to the markup." },
		{ "BlueprintType", "true" },
		{ "Forward.Comment", "// No movement, this lane is treated as spacer or median.\n" },
		{ "Forward.Name", "EZoneLaneDirection::Forward" },
		{ "Forward.ToolTip", "No movement, this lane is treated as spacer or median." },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "None.Name", "EZoneLaneDirection::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneLaneDirection",
		"EZoneLaneDirection",
		Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneLaneDirection.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneLaneDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneLaneDesc;
class UScriptStruct* FZoneLaneDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneLaneDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneLaneDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneLaneDesc, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneLaneDesc"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneLaneDesc.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneLaneDesc>()
{
	return FZoneLaneDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneLaneDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describes single lane.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Describes single lane." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneLaneDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Lane" },
		{ "Comment", "// Width of the lane\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Width of the lane" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneDesc, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Lane" },
		{ "Comment", "// Direction of the lane\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Direction of the lane" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneDesc, Direction), Z_Construct_UEnum_ZoneGraph_EZoneLaneDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction_MetaData)) }; // 3241386585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Lane" },
		{ "Comment", "// Lane tags\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Lane tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneDesc, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Tags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneLaneDesc",
		sizeof(FZoneLaneDesc),
		alignof(FZoneLaneDesc),
		Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneLaneDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneLaneDesc.InnerSingleton, Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneLaneDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneLaneProfile;
class UScriptStruct* FZoneLaneProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneLaneProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneLaneProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneLaneProfile, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneLaneProfile"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneLaneProfile.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneLaneProfile>()
{
	return FZoneLaneProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneLaneProfile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lanes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lanes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lanes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Describes template of multiple parallel lanes, created in settings.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Describes template of multiple parallel lanes, created in settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneLaneProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_ID_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneProfile, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes_Inner = { "Lanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneLaneDesc, METADATA_PARAMS(nullptr, 0) }; // 1359570932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes = { "Lanes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneProfile, Lanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes_MetaData)) }; // 1359570932
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewProp_Lanes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneLaneProfile",
		sizeof(FZoneLaneProfile),
		alignof(FZoneLaneProfile),
		Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneLaneProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneLaneProfile.InnerSingleton, Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneLaneProfile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef;
class UScriptStruct* FZoneLaneProfileRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneLaneProfileRef, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneLaneProfileRef"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneLaneProfileRef>()
{
	return FZoneLaneProfileRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Reference to a lane profile.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Reference to a lane profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneLaneProfileRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneProfileRef, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneProfileRef, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneLaneProfileRef",
		sizeof(FZoneLaneProfileRef),
		alignof(FZoneLaneProfileRef),
		Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfileRef()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.InnerSingleton, Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneLaneLinkType;
	static UEnum* EZoneLaneLinkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneLinkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneLaneLinkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneLaneLinkType"));
		}
		return Z_Registration_Info_UEnum_EZoneLaneLinkType.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneLaneLinkType>()
	{
		return EZoneLaneLinkType_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enumerators[] = {
		{ "EZoneLaneLinkType::None", (int64)EZoneLaneLinkType::None },
		{ "EZoneLaneLinkType::All", (int64)EZoneLaneLinkType::All },
		{ "EZoneLaneLinkType::Outgoing", (int64)EZoneLaneLinkType::Outgoing },
		{ "EZoneLaneLinkType::Incoming", (int64)EZoneLaneLinkType::Incoming },
		{ "EZoneLaneLinkType::Adjacent", (int64)EZoneLaneLinkType::Adjacent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enum_MetaDataParams[] = {
		{ "Adjacent.Comment", "// The lane is connected at the beginning of the current lane and coming in.\n" },
		{ "Adjacent.Name", "EZoneLaneLinkType::Adjacent" },
		{ "Adjacent.ToolTip", "The lane is connected at the beginning of the current lane and coming in." },
		{ "All.Name", "EZoneLaneLinkType::All" },
		{ "Comment", "/** Describes how the linked lane relates to the lane spatially.\n\x09""Each type is a bitmask, so that some APIs can filter based on link types. */" },
		{ "Incoming.Comment", "// The lane is connected at the end of the current lane and going out.\n" },
		{ "Incoming.Name", "EZoneLaneLinkType::Incoming" },
		{ "Incoming.ToolTip", "The lane is connected at the end of the current lane and going out." },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "None.Name", "EZoneLaneLinkType::None" },
		{ "Outgoing.Name", "EZoneLaneLinkType::Outgoing" },
		{ "ToolTip", "Describes how the linked lane relates to the lane spatially.\n      Each type is a bitmask, so that some APIs can filter based on link types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneLaneLinkType",
		"EZoneLaneLinkType",
		Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneLinkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneLaneLinkType.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneLaneLinkType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneLaneLinkFlags;
	static UEnum* EZoneLaneLinkFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneLinkFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneLaneLinkFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneLaneLinkFlags"));
		}
		return Z_Registration_Info_UEnum_EZoneLaneLinkFlags.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneLaneLinkFlags>()
	{
		return EZoneLaneLinkFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enumerators[] = {
		{ "EZoneLaneLinkFlags::None", (int64)EZoneLaneLinkFlags::None },
		{ "EZoneLaneLinkFlags::All", (int64)EZoneLaneLinkFlags::All },
		{ "EZoneLaneLinkFlags::Left", (int64)EZoneLaneLinkFlags::Left },
		{ "EZoneLaneLinkFlags::Right", (int64)EZoneLaneLinkFlags::Right },
		{ "EZoneLaneLinkFlags::Splitting", (int64)EZoneLaneLinkFlags::Splitting },
		{ "EZoneLaneLinkFlags::Merging", (int64)EZoneLaneLinkFlags::Merging },
		{ "EZoneLaneLinkFlags::OppositeDirection", (int64)EZoneLaneLinkFlags::OppositeDirection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EZoneLaneLinkFlags::All" },
		{ "Comment", "/** Flags describing the details of a linked adjacent lane.\n\x09""Flags are only used for adjacent lanes. */" },
		{ "Left.Name", "EZoneLaneLinkFlags::Left" },
		{ "Merging.Comment", "// Splitting from current lane at start\n" },
		{ "Merging.Name", "EZoneLaneLinkFlags::Merging" },
		{ "Merging.ToolTip", "Splitting from current lane at start" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "None.Name", "EZoneLaneLinkFlags::None" },
		{ "OppositeDirection.Comment", "// Merging into the current lane at end\n" },
		{ "OppositeDirection.Name", "EZoneLaneLinkFlags::OppositeDirection" },
		{ "OppositeDirection.ToolTip", "Merging into the current lane at end" },
		{ "Right.Comment", "// Left of the current lane\n" },
		{ "Right.Name", "EZoneLaneLinkFlags::Right" },
		{ "Right.ToolTip", "Left of the current lane" },
		{ "Splitting.Comment", "// Right of the current lane\n" },
		{ "Splitting.Name", "EZoneLaneLinkFlags::Splitting" },
		{ "Splitting.ToolTip", "Right of the current lane" },
		{ "ToolTip", "Flags describing the details of a linked adjacent lane.\n      Flags are only used for adjacent lanes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneLaneLinkFlags",
		"EZoneLaneLinkFlags",
		Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags()
	{
		if (!Z_Registration_Info_UEnum_EZoneLaneLinkFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneLaneLinkFlags.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneLaneLinkFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneLaneLinkData;
class UScriptStruct* FZoneLaneLinkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneLaneLinkData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneLaneLinkData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneLaneLinkData>()
{
	return FZoneLaneLinkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestLaneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestLaneIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneLaneLinkData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_DestLaneIndex_MetaData[] = {
		{ "Comment", "/** Index to destination lane in FZoneGraphStorage::Lanes. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Index to destination lane in FZoneGraphStorage::Lanes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_DestLaneIndex = { "DestLaneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneLinkData, DestLaneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_DestLaneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_DestLaneIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the connection. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Type of the connection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneLinkData, Type), Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type_MetaData)) }; // 622777819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Specifics about the connection type, see EZoneLaneLinkFlags. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Specifics about the connection type, see EZoneLaneLinkFlags." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneLinkData, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_DestLaneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneLaneLinkData",
		sizeof(FZoneLaneLinkData),
		alignof(FZoneLaneLinkData),
		Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneLinkData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.InnerSingleton, Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneLaneLinkData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneLaneData;
class UScriptStruct* FZoneLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneLaneData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneLaneData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneLaneData>()
{
	return FZoneLaneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneLaneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointsEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinksBegin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LinksBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinksEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LinksEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEntryId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StartEntryId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndEntryId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_EndEntryId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// TODO: We could replace *End with *Num, and use uint16. Begin probably needs to be int32/uint32\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "TODO: We could replace *End with *Num, and use uint16. Begin probably needs to be int32/uint32" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneLaneData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Width_MetaData[] = {
		{ "Comment", "// Width of the lane\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Width of the lane" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "// Lane tags\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Lane tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Tags_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsBegin_MetaData[] = {
		{ "Comment", "// First point of the lane polyline in FZoneGraphStorage::LanePoints.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "First point of the lane polyline in FZoneGraphStorage::LanePoints." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsBegin = { "PointsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, PointsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsEnd_MetaData[] = {
		{ "Comment", "// One past the last point of the lane polyline.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "One past the last point of the lane polyline." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsEnd = { "PointsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, PointsEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksBegin_MetaData[] = {
		{ "Comment", "// First link in FZoneGraphStorage::LaneLinks.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "First link in FZoneGraphStorage::LaneLinks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksBegin = { "LinksBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, LinksBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksEnd_MetaData[] = {
		{ "Comment", "// One past the last lane link.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "One past the last lane link." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksEnd = { "LinksEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, LinksEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_ZoneIndex_MetaData[] = {
		{ "Comment", "// Index of the zone this lane belongs to.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Index of the zone this lane belongs to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_ZoneIndex = { "ZoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, ZoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_ZoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_ZoneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_StartEntryId_MetaData[] = {
		{ "Comment", "// Source data entry ID, this generally corresponds to input data point index.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Source data entry ID, this generally corresponds to input data point index." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_StartEntryId = { "StartEntryId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, StartEntryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_StartEntryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_StartEntryId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_EndEntryId_MetaData[] = {
		{ "Comment", "// Source data entry ID.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Source data entry ID." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_EndEntryId = { "EndEntryId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneLaneData, EndEntryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_EndEntryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_EndEntryId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneLaneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_PointsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_LinksEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_ZoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_StartEntryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewProp_EndEntryId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneLaneData",
		sizeof(FZoneLaneData),
		alignof(FZoneLaneData),
		Z_Construct_UScriptStruct_FZoneLaneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneLaneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneLaneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneLaneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneLaneData.InnerSingleton, Z_Construct_UScriptStruct_FZoneLaneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneLaneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneData;
class UScriptStruct* FZoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneData>()
{
	return FZoneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPointsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoundaryPointsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPointsEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoundaryPointsEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanesBegin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LanesBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanesEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LanesEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsBegin_MetaData[] = {
		{ "Comment", "// First point of the zone boundary polyline in FZoneGraphStorage::BoundaryPoints.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "First point of the zone boundary polyline in FZoneGraphStorage::BoundaryPoints." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsBegin = { "BoundaryPointsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, BoundaryPointsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsEnd_MetaData[] = {
		{ "Comment", "// One past the last point of the zone boundary polyline.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "One past the last point of the zone boundary polyline." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsEnd = { "BoundaryPointsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, BoundaryPointsEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesBegin_MetaData[] = {
		{ "Comment", "// First lane of the zone in FZoneGraphStorage::Lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "First lane of the zone in FZoneGraphStorage::Lanes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesBegin = { "LanesBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, LanesBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesEnd_MetaData[] = {
		{ "Comment", "// One past the last lane.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "One past the last lane." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesEnd = { "LanesEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, LanesEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "// Bounding box of the zone\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Bounding box of the zone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "// Zone tags\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Zone tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneData, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Tags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_BoundaryPointsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_LanesEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneData_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneData",
		sizeof(FZoneData),
		alignof(FZoneData),
		Z_Construct_UScriptStruct_FZoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneData.InnerSingleton, Z_Construct_UScriptStruct_FZoneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle;
class UScriptStruct* FZoneGraphDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphDataHandle, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphDataHandle>()
{
	return FZoneGraphDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generation_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Generation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphDataHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDataHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Generation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Generation = { "Generation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDataHandle, Generation), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Generation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Generation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewProp_Generation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphDataHandle",
		sizeof(FZoneGraphDataHandle),
		alignof(FZoneGraphDataHandle),
		Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle;
class UScriptStruct* FZoneGraphLaneHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLaneHandle, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphLaneHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphLaneHandle>()
{
	return FZoneGraphLaneHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLaneHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_DataHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneHandle, DataHandle), Z_Construct_UScriptStruct_FZoneGraphDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_DataHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_DataHandle_MetaData)) }; // 3290288725
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewProp_DataHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphLaneHandle",
		sizeof(FZoneGraphLaneHandle),
		alignof(FZoneGraphLaneHandle),
		Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation;
class UScriptStruct* FZoneGraphLaneLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLaneLocation, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphLaneLocation"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphLaneLocation>()
{
	return FZoneGraphLaneLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LaneSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLaneLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Tangent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Up_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneHandle = { "LaneHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, LaneHandle), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneHandle_MetaData)) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneSegment_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneSegment = { "LaneSegment", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, LaneSegment), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_DistanceAlongLane = { "DistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneLocation, DistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_LaneSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewProp_DistanceAlongLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphLaneLocation",
		sizeof(FZoneGraphLaneLocation),
		alignof(FZoneGraphLaneLocation),
		Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation;
class UScriptStruct* FZoneGraphCompactLaneLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphCompactLaneLocation"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphCompactLaneLocation>()
{
	return FZoneGraphCompactLaneLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Minimal amount of data to search and compare lane location. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Minimal amount of data to search and compare lane location." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphCompactLaneLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_LaneHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_LaneHandle = { "LaneHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphCompactLaneLocation, LaneHandle), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_LaneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_LaneHandle_MetaData)) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_DistanceAlongLane = { "DistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphCompactLaneLocation, DistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_DistanceAlongLane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_LaneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewProp_DistanceAlongLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphCompactLaneLocation",
		sizeof(FZoneGraphCompactLaneLocation),
		alignof(FZoneGraphCompactLaneLocation),
		Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection;
class UScriptStruct* FZoneGraphLaneSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLaneSection, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphLaneSection"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphLaneSection>()
{
	return FZoneGraphLaneSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistanceAlongLane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndDistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndDistanceAlongLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Section of a lane */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Section of a lane" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLaneSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_LaneHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_LaneHandle = { "LaneHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneSection, LaneHandle), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_LaneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_LaneHandle_MetaData)) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_StartDistanceAlongLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_StartDistanceAlongLane = { "StartDistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneSection, StartDistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_StartDistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_StartDistanceAlongLane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_EndDistanceAlongLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_EndDistanceAlongLane = { "EndDistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneSection, EndDistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_EndDistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_EndDistanceAlongLane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_LaneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_StartDistanceAlongLane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewProp_EndDistanceAlongLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphLaneSection",
		sizeof(FZoneGraphLaneSection),
		alignof(FZoneGraphLaneSection),
		Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneSection()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane;
class UScriptStruct* FZoneGraphLinkedLane::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLinkedLane, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphLinkedLane"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphLinkedLane>()
{
	return FZoneGraphLinkedLane::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestLane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestLane;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Linked lane, used for query results. See also: FZoneLaneLinkData */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Linked lane, used for query results. See also: FZoneLaneLinkData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLinkedLane>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_DestLane_MetaData[] = {
		{ "Comment", "/** Destination lane handle */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Destination lane handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_DestLane = { "DestLane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLinkedLane, DestLane), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_DestLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_DestLane_MetaData)) }; // 439458847
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the connection. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Type of the connection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLinkedLane, Type), Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type_MetaData)) }; // 622777819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Specifics about the connection type, see EZoneLaneLinkFlags. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Specifics about the connection type, see EZoneLaneLinkFlags." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLinkedLane, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_DestLane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphLinkedLane",
		sizeof(FZoneGraphLinkedLane),
		alignof(FZoneGraphLinkedLane),
		Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLinkedLane()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphStorage;
class UScriptStruct* FZoneGraphStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphStorage, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphStorage"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphStorage.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphStorage>()
{
	return FZoneGraphStorage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphStorage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Zones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Zones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lanes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lanes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lanes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundaryPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LanePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LanePoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneUpVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneUpVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneUpVectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneTangentVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneTangentVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneTangentVectors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LanePointProgressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanePointProgressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LanePointProgressions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneLinks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneBVTree_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneBVTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphStorage>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones_Inner = { "Zones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneData, METADATA_PARAMS(nullptr, 0) }; // 2298390129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones_MetaData[] = {
		{ "Comment", "// All the zones.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the zones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones = { "Zones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, Zones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones_MetaData)) }; // 2298390129
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes_Inner = { "Lanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneLaneData, METADATA_PARAMS(nullptr, 0) }; // 3721795105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes_MetaData[] = {
		{ "Comment", "// All the lanes, referred by zones.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lanes, referred by zones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes = { "Lanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, Lanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes_MetaData)) }; // 3721795105
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints_Inner = { "BoundaryPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints_MetaData[] = {
		{ "Comment", "// All the zone boundary points, referred by zones.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the zone boundary points, referred by zones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints = { "BoundaryPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, BoundaryPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints_Inner = { "LanePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints_MetaData[] = {
		{ "Comment", "// All the lane points, referred by lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lane points, referred by lanes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints = { "LanePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, LanePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors_Inner = { "LaneUpVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors_MetaData[] = {
		{ "Comment", "// All the lane up vectors, referred by lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lane up vectors, referred by lanes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors = { "LaneUpVectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, LaneUpVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors_Inner = { "LaneTangentVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors_MetaData[] = {
		{ "Comment", "// All the lane tangent vectors, referred by lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lane tangent vectors, referred by lanes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors = { "LaneTangentVectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, LaneTangentVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions_Inner = { "LanePointProgressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions_MetaData[] = {
		{ "Comment", "// All the lane progression distances, referred by lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lane progression distances, referred by lanes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions = { "LanePointProgressions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, LanePointProgressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks_Inner = { "LaneLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneLaneLinkData, METADATA_PARAMS(nullptr, 0) }; // 1909549175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks_MetaData[] = {
		{ "Comment", "// All the lane links, referred by lanes.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "All the lane links, referred by lanes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks = { "LaneLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, LaneLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks_MetaData)) }; // 1909549175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "// Bounding box of all zones.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Bounding box of all zones." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_ZoneBVTree_MetaData[] = {
		{ "Comment", "// BV-Tree of Zones\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "BV-Tree of Zones" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_ZoneBVTree = { "ZoneBVTree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphStorage, ZoneBVTree), Z_Construct_UScriptStruct_FZoneGraphBVTree, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_ZoneBVTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_ZoneBVTree_MetaData)) }; // 988445192
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Zones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Lanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_BoundaryPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneUpVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneTangentVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LanePointProgressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_LaneLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewProp_ZoneBVTree,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphStorage",
		sizeof(FZoneGraphStorage),
		alignof(FZoneGraphStorage),
		Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphStorage()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphStorage.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphStorage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FZoneShapeType;
	static UEnum* FZoneShapeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FZoneShapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_FZoneShapeType, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("FZoneShapeType"));
		}
		return Z_Registration_Info_UEnum_FZoneShapeType.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<FZoneShapeType>()
	{
		return FZoneShapeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enumerators[] = {
		{ "FZoneShapeType::Spline", (int64)FZoneShapeType::Spline },
		{ "FZoneShapeType::Polygon", (int64)FZoneShapeType::Polygon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "Polygon.Comment", "// Bezier spline shape\n" },
		{ "Polygon.Name", "FZoneShapeType::Polygon" },
		{ "Polygon.ToolTip", "Bezier spline shape" },
		{ "Spline.Name", "FZoneShapeType::Spline" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"FZoneShapeType",
		"FZoneShapeType",
		Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_FZoneShapeType()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FZoneShapeType.InnerSingleton, Z_Construct_UEnum_ZoneGraph_FZoneShapeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FZoneShapeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType;
	static UEnum* EZoneShapePolygonRoutingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneShapePolygonRoutingType"));
		}
		return Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneShapePolygonRoutingType>()
	{
		return EZoneShapePolygonRoutingType_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enumerators[] = {
		{ "EZoneShapePolygonRoutingType::Bezier", (int64)EZoneShapePolygonRoutingType::Bezier },
		{ "EZoneShapePolygonRoutingType::Arcs", (int64)EZoneShapePolygonRoutingType::Arcs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enum_MetaDataParams[] = {
		{ "Arcs.Comment", "// Use bezier curves for routing.\n" },
		{ "Arcs.Name", "EZoneShapePolygonRoutingType::Arcs" },
		{ "Arcs.ToolTip", "Use bezier curves for routing." },
		{ "Bezier.Name", "EZoneShapePolygonRoutingType::Bezier" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneShapePolygonRoutingType",
		"EZoneShapePolygonRoutingType",
		Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType()
	{
		if (!Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions;
	static UEnum* EZoneShapeLaneConnectionRestrictions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneShapeLaneConnectionRestrictions"));
		}
		return Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneShapeLaneConnectionRestrictions>()
	{
		return EZoneShapeLaneConnectionRestrictions_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enumerators[] = {
		{ "EZoneShapeLaneConnectionRestrictions::None", (int64)EZoneShapeLaneConnectionRestrictions::None },
		{ "EZoneShapeLaneConnectionRestrictions::NoLeftTurn", (int64)EZoneShapeLaneConnectionRestrictions::NoLeftTurn },
		{ "EZoneShapeLaneConnectionRestrictions::NoRightTurn", (int64)EZoneShapeLaneConnectionRestrictions::NoRightTurn },
		{ "EZoneShapeLaneConnectionRestrictions::OneLanePerDestination", (int64)EZoneShapeLaneConnectionRestrictions::OneLanePerDestination },
		{ "EZoneShapeLaneConnectionRestrictions::MergeLanesToOneDestinationLane", (int64)EZoneShapeLaneConnectionRestrictions::MergeLanesToOneDestinationLane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "MergeLanesToOneDestinationLane.Comment", "// Connect to only one nearest lane per destination.\n" },
		{ "MergeLanesToOneDestinationLane.Name", "EZoneShapeLaneConnectionRestrictions::MergeLanesToOneDestinationLane" },
		{ "MergeLanesToOneDestinationLane.ToolTip", "Connect to only one nearest lane per destination." },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "NoLeftTurn.Name", "EZoneShapeLaneConnectionRestrictions::NoLeftTurn" },
		{ "None.Hidden", "" },
		{ "None.Name", "EZoneShapeLaneConnectionRestrictions::None" },
		{ "NoRightTurn.Comment", "// No left turning destinations allowed.\n" },
		{ "NoRightTurn.Name", "EZoneShapeLaneConnectionRestrictions::NoRightTurn" },
		{ "NoRightTurn.ToolTip", "No left turning destinations allowed." },
		{ "OneLanePerDestination.Comment", "// No right turning destinations allowed.\n" },
		{ "OneLanePerDestination.Name", "EZoneShapeLaneConnectionRestrictions::OneLanePerDestination" },
		{ "OneLanePerDestination.ToolTip", "No right turning destinations allowed." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneShapeLaneConnectionRestrictions",
		"EZoneShapeLaneConnectionRestrictions",
		Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions()
	{
		if (!Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneShapeLaneConnectionRestrictions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FZoneShapePointType;
	static UEnum* FZoneShapePointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapePointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FZoneShapePointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_FZoneShapePointType, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("FZoneShapePointType"));
		}
		return Z_Registration_Info_UEnum_FZoneShapePointType.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<FZoneShapePointType>()
	{
		return FZoneShapePointType_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enumerators[] = {
		{ "FZoneShapePointType::Sharp", (int64)FZoneShapePointType::Sharp },
		{ "FZoneShapePointType::Bezier", (int64)FZoneShapePointType::Bezier },
		{ "FZoneShapePointType::AutoBezier", (int64)FZoneShapePointType::AutoBezier },
		{ "FZoneShapePointType::LaneProfile", (int64)FZoneShapePointType::LaneProfile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enum_MetaDataParams[] = {
		{ "AutoBezier.Comment", "// Round corner, defined by manual bezier handles\n" },
		{ "AutoBezier.Name", "FZoneShapePointType::AutoBezier" },
		{ "AutoBezier.ToolTip", "Round corner, defined by manual bezier handles" },
		{ "Bezier.Comment", "// Sharp corner\n" },
		{ "Bezier.Name", "FZoneShapePointType::Bezier" },
		{ "Bezier.ToolTip", "Sharp corner" },
		{ "BlueprintType", "true" },
		{ "LaneProfile.Comment", "// Round corner, defined by automatic bezier handles\n" },
		{ "LaneProfile.Name", "FZoneShapePointType::LaneProfile" },
		{ "LaneProfile.ToolTip", "Round corner, defined by automatic bezier handles" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "Sharp.Name", "FZoneShapePointType::Sharp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"FZoneShapePointType",
		"FZoneShapePointType",
		Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_FZoneShapePointType()
	{
		if (!Z_Registration_Info_UEnum_FZoneShapePointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FZoneShapePointType.InnerSingleton, Z_Construct_UEnum_ZoneGraph_FZoneShapePointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FZoneShapePointType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneShapePoint;
class UScriptStruct* FZoneShapePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneShapePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneShapePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneShapePoint, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneShapePoint"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneShapePoint.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneShapePoint>()
{
	return FZoneShapePoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneShapePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InControlPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutControlPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutControlPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerTurnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerTurnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneProfile_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaneProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseLaneProfile_MetaData[];
#endif
		static void NewProp_bReverseLaneProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseLaneProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneConnectionRestrictions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LaneConnectionRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneShapePoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Position of the point */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Position of the point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InControlPoint_MetaData[] = {
		{ "Comment", "/** Incoming control point */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Incoming control point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InControlPoint = { "InControlPoint", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, InControlPoint_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InControlPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InControlPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_OutControlPoint_MetaData[] = {
		{ "Comment", "/** Outgoing control point */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Outgoing control point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_OutControlPoint = { "OutControlPoint", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, OutControlPoint_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_OutControlPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_OutControlPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_TangentLength_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Length of the Bezier point tangents, or cached half-width of the lane profile. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Length of the Bezier point tangents, or cached half-width of the lane profile." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_TangentLength = { "TangentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, TangentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_TangentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_TangentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InnerTurnRadius_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Inner turn radius associated with this point. Used when polygon shape routing is set to 'Arcs'. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Inner turn radius associated with this point. Used when polygon shape routing is set to 'Arcs'." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InnerTurnRadius = { "InnerTurnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, InnerTurnRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InnerTurnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InnerTurnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Rotation of the point. Forward direction of the rotation matches the tangents. \n\x09  * For Lane Profile points, the forward directions points into the shape so that we can match the incoming lanes rotation. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Rotation of the point. Forward direction of the rotation matches the tangents.\nFor Lane Profile points, the forward directions points into the shape so that we can match the incoming lanes rotation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Type of the control point */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Type of the control point" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, Type), Z_Construct_UEnum_ZoneGraph_FZoneShapePointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type_MetaData)) }; // 3221456197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneProfile_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Index to external array referring to Lane Profile, or FZoneShapePoint::InheritLaneProfile if we should use Shape's lane profile.\n\x09  * This is a little awkward indirection, but keeps the point memory usage in check. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Index to external array referring to Lane Profile, or FZoneShapePoint::InheritLaneProfile if we should use Shape's lane profile.\nThis is a little awkward indirection, but keeps the point memory usage in check." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneProfile = { "LaneProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, LaneProfile), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** True of lane profile should be reversed. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "True of lane profile should be reversed." },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile_SetBit(void* Obj)
	{
		((FZoneShapePoint*)Obj)->bReverseLaneProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile = { "bReverseLaneProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneShapePoint), &Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneConnectionRestrictions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ZoneGraph.EZoneShapeLaneConnectionRestrictions" },
		{ "Category", "Zone" },
		{ "Comment", "/** Lane connection restrictions */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Lane connection restrictions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneConnectionRestrictions = { "LaneConnectionRestrictions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapePoint, LaneConnectionRestrictions), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneConnectionRestrictions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneConnectionRestrictions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneShapePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InControlPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_OutControlPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_TangentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_InnerTurnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_bReverseLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewProp_LaneConnectionRestrictions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneShapePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneShapePoint",
		sizeof(FZoneShapePoint),
		alignof(FZoneShapePoint),
		Z_Construct_UScriptStruct_FZoneShapePoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneShapePoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneShapePoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneShapePoint.InnerSingleton, Z_Construct_UScriptStruct_FZoneShapePoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneShapePoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneShapeConnector;
class UScriptStruct* FZoneShapeConnector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneShapeConnector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneShapeConnector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneShapeConnector, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneShapeConnector"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneShapeConnector.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneShapeConnector>()
{
	return FZoneShapeConnector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneShapeConnector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseLaneProfile_MetaData[];
#endif
		static void NewProp_bReverseLaneProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseLaneProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Shape connectors represent locations where shapes can be connected together.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Shape connectors represent locations where shapes can be connected together." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneShapeConnector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "// Position of the connector.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Position of the connector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "// Normal direction of the connector.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Normal direction of the connector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Up_MetaData[] = {
		{ "Comment", "// Up direction of the connector.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Up direction of the connector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_PointIndex_MetaData[] = {
		{ "Comment", "// Point index of UZoneShapeComponent.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Point index of UZoneShapeComponent." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, PointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_PointIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_LaneProfile_MetaData[] = {
		{ "Comment", "// Lane template of the connector.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Lane template of the connector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_LaneProfile = { "LaneProfile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, LaneProfile), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_LaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_LaneProfile_MetaData)) }; // 3800636170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile_MetaData[] = {
		{ "Comment", "// True if lane profile should be treated as reversed.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "True if lane profile should be treated as reversed." },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile_SetBit(void* Obj)
	{
		((FZoneShapeConnector*)Obj)->bReverseLaneProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile = { "bReverseLaneProfile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneShapeConnector), &Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Comment", "// Which type of shape the connector belongs to.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Which type of shape the connector belongs to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnector, ShapeType), Z_Construct_UEnum_ZoneGraph_FZoneShapeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType_MetaData)) }; // 1851379342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_LaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_bReverseLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewProp_ShapeType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneShapeConnector",
		sizeof(FZoneShapeConnector),
		alignof(FZoneShapeConnector),
		Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnector()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneShapeConnector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneShapeConnector.InnerSingleton, Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneShapeConnector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneShapeConnection;
class UScriptStruct* FZoneShapeConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneShapeConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneShapeConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneShapeConnection, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneShapeConnection"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneShapeConnection.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneShapeConnection>()
{
	return FZoneShapeConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneShapeConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShapeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Connection between two shape connectors.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Connection between two shape connectors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneShapeConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ShapeComponent_MetaData[] = {
		{ "Comment", "// Connected shape.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Connected shape." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ShapeComponent = { "ShapeComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnection, ShapeComponent), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ShapeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ShapeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ConnectorIndex_MetaData[] = {
		{ "Comment", "// Connector index at the connected shape.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Connector index at the connected shape." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ConnectorIndex = { "ConnectorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneShapeConnection, ConnectorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ConnectorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ConnectorIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ShapeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewProp_ConnectorIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneShapeConnection",
		sizeof(FZoneShapeConnection),
		alignof(FZoneShapeConnection),
		Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneShapeConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneShapeConnection.InnerSingleton, Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneShapeConnection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings;
class UScriptStruct* FZoneGraphTessellationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphTessellationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphTessellationSettings>()
{
	return FZoneGraphTessellationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TessellationTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTessellationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_LaneFilter_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "// Lanes to apply this tolerance\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Lanes to apply this tolerance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_LaneFilter = { "LaneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTessellationSettings, LaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_LaneFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_LaneFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_TessellationTolerance_MetaData[] = {
		{ "Category", "Zone" },
		{ "Comment", "// Tessellation tolerance, the error between tessellated point and the spline.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Tessellation tolerance, the error between tessellated point and the spline." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_TessellationTolerance = { "TessellationTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTessellationSettings, TessellationTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_TessellationTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_TessellationTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_LaneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewProp_TessellationTolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphTessellationSettings",
		sizeof(FZoneGraphTessellationSettings),
		alignof(FZoneGraphTessellationSettings),
		Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTessellationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule;
	static UEnum* EZoneGraphLaneRoutingCountRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("EZoneGraphLaneRoutingCountRule"));
		}
		return Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.OuterSingleton;
	}
	template<> ZONEGRAPH_API UEnum* StaticEnum<EZoneGraphLaneRoutingCountRule>()
	{
		return EZoneGraphLaneRoutingCountRule_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enumerators[] = {
		{ "EZoneGraphLaneRoutingCountRule::Any", (int64)EZoneGraphLaneRoutingCountRule::Any },
		{ "EZoneGraphLaneRoutingCountRule::One", (int64)EZoneGraphLaneRoutingCountRule::One },
		{ "EZoneGraphLaneRoutingCountRule::Many", (int64)EZoneGraphLaneRoutingCountRule::Many },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EZoneGraphLaneRoutingCountRule::Any" },
		{ "BlueprintType", "true" },
		{ "Many.Comment", "// Just one entry\n" },
		{ "Many.Name", "EZoneGraphLaneRoutingCountRule::Many" },
		{ "Many.ToolTip", "Just one entry" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "One.Comment", "// Any number of entries\n" },
		{ "One.Name", "EZoneGraphLaneRoutingCountRule::One" },
		{ "One.ToolTip", "Any number of entries" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		"EZoneGraphLaneRoutingCountRule",
		"EZoneGraphLaneRoutingCountRule",
		Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.InnerSingleton, Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule;
class UScriptStruct* FZoneGraphLaneRoutingRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphLaneRoutingRule"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphLaneRoutingRule>()
{
	return FZoneGraphLaneRoutingRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneTagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLaneProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLaneProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationLaneProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationLaneProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOutgoingConnections_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOutgoingConnections_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOutgoingConnections;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationIncomingConnections_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationIncomingConnections_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationIncomingConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionRestrictions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLaneRoutingRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FZoneGraphLaneRoutingRule*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneGraphLaneRoutingRule), &Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ZoneTagFilter_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ZoneTagFilter = { "ZoneTagFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, ZoneTagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ZoneTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ZoneTagFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceLaneProfile_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceLaneProfile = { "SourceLaneProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, SourceLaneProfile), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceLaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceLaneProfile_MetaData)) }; // 3800636170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationLaneProfile_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationLaneProfile = { "DestinationLaneProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, DestinationLaneProfile), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationLaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationLaneProfile_MetaData)) }; // 3800636170
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections = { "SourceOutgoingConnections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, SourceOutgoingConnections), Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections_MetaData)) }; // 3608541139
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections = { "DestinationIncomingConnections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, DestinationIncomingConnections), Z_Construct_UEnum_ZoneGraph_EZoneGraphLaneRoutingCountRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections_MetaData)) }; // 3608541139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ConnectionRestrictions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ZoneGraph.EZoneShapeLaneConnectionRestrictions" },
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ConnectionRestrictions = { "ConnectionRestrictions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphLaneRoutingRule, ConnectionRestrictions), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ConnectionRestrictions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ConnectionRestrictions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_Comment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ZoneTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_SourceOutgoingConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_DestinationIncomingConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewProp_ConnectionRestrictions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphLaneRoutingRule",
		sizeof(FZoneGraphLaneRoutingRule),
		alignof(FZoneGraphLaneRoutingRule),
		Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings;
class UScriptStruct* FZoneGraphBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBuildSettings, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBuildSettings>()
{
	return FZoneGraphBuildSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonTessellationTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CommonTessellationTolerance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecificTessellationTolerances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificTessellationTolerances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificTessellationTolerances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneConnectionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneConnectionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneConnectionMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneConnectionMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnThresholdAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnThresholdAngle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonRoutingRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonRoutingRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonRoutingRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionSnapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionSnapDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionSnapAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionSnapAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBuildSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_CommonTessellationTolerance_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** Common tolerance for all lane tessellation, the error between tessellated point and the spline. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Common tolerance for all lane tessellation, the error between tessellated point and the spline." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_CommonTessellationTolerance = { "CommonTessellationTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, CommonTessellationTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_CommonTessellationTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_CommonTessellationTolerance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances_Inner = { "SpecificTessellationTolerances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphTessellationSettings, METADATA_PARAMS(nullptr, 0) }; // 1710564185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** Custom tessellation tolerances based on lane tags, first match is returned. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Custom tessellation tolerances based on lane tags, first match is returned." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances = { "SpecificTessellationTolerances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, SpecificTessellationTolerances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances_MetaData)) }; // 1710564185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionAngle_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** Max relative angle (in degrees) between two lane profiles for them to be connected with lanes. In degrees. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Max relative angle (in degrees) between two lane profiles for them to be connected with lanes. In degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionAngle = { "LaneConnectionAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, LaneConnectionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionMask_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** Mask of tags which should be used to check if lanes should connect. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Mask of tags which should be used to check if lanes should connect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionMask = { "LaneConnectionMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, LaneConnectionMask), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionMask_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_TurnThresholdAngle_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** When the relative angle (in degrees) to destination on a polygon is more than the specified angle, it is considered left or right turn. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "When the relative angle (in degrees) to destination on a polygon is more than the specified angle, it is considered left or right turn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_TurnThresholdAngle = { "TurnThresholdAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, TurnThresholdAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_TurnThresholdAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_TurnThresholdAngle_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules_Inner = { "PolygonRoutingRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule, METADATA_PARAMS(nullptr, 0) }; // 859967410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules_MetaData[] = {
		{ "Category", "Lanes" },
		{ "Comment", "/** Routing rules applied to polygon shapes */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Routing rules applied to polygon shapes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules = { "PolygonRoutingRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, PolygonRoutingRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules_MetaData)) }; // 859967410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapDistance_MetaData[] = {
		{ "Category", "PointSnapping" },
		{ "Comment", "/** Max distance between two shape points for them to be snapped together. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Max distance between two shape points for them to be snapped together." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapDistance = { "ConnectionSnapDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, ConnectionSnapDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapAngle_MetaData[] = {
		{ "Category", "PointSnapping" },
		{ "Comment", "/** Max relative angle (in degrees) between two shape points for them to be snapped together. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTypes.h" },
		{ "ToolTip", "Max relative angle (in degrees) between two shape points for them to be snapped together." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapAngle = { "ConnectionSnapAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBuildSettings, ConnectionSnapAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_CommonTessellationTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_SpecificTessellationTolerances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_LaneConnectionMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_TurnThresholdAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_PolygonRoutingRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewProp_ConnectionSnapAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBuildSettings",
		sizeof(FZoneGraphBuildSettings),
		alignof(FZoneGraphBuildSettings),
		Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuildSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::EnumInfo[] = {
		{ EZoneGraphTags_StaticEnum, TEXT("EZoneGraphTags"), &Z_Registration_Info_UEnum_EZoneGraphTags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2050218591U) },
		{ EZoneLaneTagMaskComparison_StaticEnum, TEXT("EZoneLaneTagMaskComparison"), &Z_Registration_Info_UEnum_EZoneLaneTagMaskComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2959696361U) },
		{ EZoneLaneDirection_StaticEnum, TEXT("EZoneLaneDirection"), &Z_Registration_Info_UEnum_EZoneLaneDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3241386585U) },
		{ EZoneLaneLinkType_StaticEnum, TEXT("EZoneLaneLinkType"), &Z_Registration_Info_UEnum_EZoneLaneLinkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 622777819U) },
		{ EZoneLaneLinkFlags_StaticEnum, TEXT("EZoneLaneLinkFlags"), &Z_Registration_Info_UEnum_EZoneLaneLinkFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3076396755U) },
		{ FZoneShapeType_StaticEnum, TEXT("FZoneShapeType"), &Z_Registration_Info_UEnum_FZoneShapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1851379342U) },
		{ EZoneShapePolygonRoutingType_StaticEnum, TEXT("EZoneShapePolygonRoutingType"), &Z_Registration_Info_UEnum_EZoneShapePolygonRoutingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1984748963U) },
		{ EZoneShapeLaneConnectionRestrictions_StaticEnum, TEXT("EZoneShapeLaneConnectionRestrictions"), &Z_Registration_Info_UEnum_EZoneShapeLaneConnectionRestrictions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1874517588U) },
		{ FZoneShapePointType_StaticEnum, TEXT("FZoneShapePointType"), &Z_Registration_Info_UEnum_FZoneShapePointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3221456197U) },
		{ EZoneGraphLaneRoutingCountRule_StaticEnum, TEXT("EZoneGraphLaneRoutingCountRule"), &Z_Registration_Info_UEnum_EZoneGraphLaneRoutingCountRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3608541139U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::ScriptStructInfo[] = {
		{ FZoneHandle::StaticStruct, Z_Construct_UScriptStruct_FZoneHandle_Statics::NewStructOps, TEXT("ZoneHandle"), &Z_Registration_Info_UScriptStruct_ZoneHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneHandle), 4120341700U) },
		{ FZoneGraphTag::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTag_Statics::NewStructOps, TEXT("ZoneGraphTag"), &Z_Registration_Info_UScriptStruct_ZoneGraphTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTag), 1504622355U) },
		{ FZoneGraphTagMask::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagMask_Statics::NewStructOps, TEXT("ZoneGraphTagMask"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagMask), 1781901322U) },
		{ FZoneGraphTagFilter::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagFilter_Statics::NewStructOps, TEXT("ZoneGraphTagFilter"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagFilter), 58618928U) },
		{ FZoneGraphTagInfo::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagInfo_Statics::NewStructOps, TEXT("ZoneGraphTagInfo"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagInfo), 2851562854U) },
		{ FZoneLaneDesc::StaticStruct, Z_Construct_UScriptStruct_FZoneLaneDesc_Statics::NewStructOps, TEXT("ZoneLaneDesc"), &Z_Registration_Info_UScriptStruct_ZoneLaneDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneLaneDesc), 1359570932U) },
		{ FZoneLaneProfile::StaticStruct, Z_Construct_UScriptStruct_FZoneLaneProfile_Statics::NewStructOps, TEXT("ZoneLaneProfile"), &Z_Registration_Info_UScriptStruct_ZoneLaneProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneLaneProfile), 559930010U) },
		{ FZoneLaneProfileRef::StaticStruct, Z_Construct_UScriptStruct_FZoneLaneProfileRef_Statics::NewStructOps, TEXT("ZoneLaneProfileRef"), &Z_Registration_Info_UScriptStruct_ZoneLaneProfileRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneLaneProfileRef), 3800636170U) },
		{ FZoneLaneLinkData::StaticStruct, Z_Construct_UScriptStruct_FZoneLaneLinkData_Statics::NewStructOps, TEXT("ZoneLaneLinkData"), &Z_Registration_Info_UScriptStruct_ZoneLaneLinkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneLaneLinkData), 1909549175U) },
		{ FZoneLaneData::StaticStruct, Z_Construct_UScriptStruct_FZoneLaneData_Statics::NewStructOps, TEXT("ZoneLaneData"), &Z_Registration_Info_UScriptStruct_ZoneLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneLaneData), 3721795105U) },
		{ FZoneData::StaticStruct, Z_Construct_UScriptStruct_FZoneData_Statics::NewStructOps, TEXT("ZoneData"), &Z_Registration_Info_UScriptStruct_ZoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneData), 2298390129U) },
		{ FZoneGraphDataHandle::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphDataHandle_Statics::NewStructOps, TEXT("ZoneGraphDataHandle"), &Z_Registration_Info_UScriptStruct_ZoneGraphDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphDataHandle), 3290288725U) },
		{ FZoneGraphLaneHandle::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLaneHandle_Statics::NewStructOps, TEXT("ZoneGraphLaneHandle"), &Z_Registration_Info_UScriptStruct_ZoneGraphLaneHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLaneHandle), 439458847U) },
		{ FZoneGraphLaneLocation::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLaneLocation_Statics::NewStructOps, TEXT("ZoneGraphLaneLocation"), &Z_Registration_Info_UScriptStruct_ZoneGraphLaneLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLaneLocation), 1571281676U) },
		{ FZoneGraphCompactLaneLocation::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphCompactLaneLocation_Statics::NewStructOps, TEXT("ZoneGraphCompactLaneLocation"), &Z_Registration_Info_UScriptStruct_ZoneGraphCompactLaneLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphCompactLaneLocation), 167967452U) },
		{ FZoneGraphLaneSection::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLaneSection_Statics::NewStructOps, TEXT("ZoneGraphLaneSection"), &Z_Registration_Info_UScriptStruct_ZoneGraphLaneSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLaneSection), 1072862811U) },
		{ FZoneGraphLinkedLane::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLinkedLane_Statics::NewStructOps, TEXT("ZoneGraphLinkedLane"), &Z_Registration_Info_UScriptStruct_ZoneGraphLinkedLane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLinkedLane), 1668351382U) },
		{ FZoneGraphStorage::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphStorage_Statics::NewStructOps, TEXT("ZoneGraphStorage"), &Z_Registration_Info_UScriptStruct_ZoneGraphStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphStorage), 1421378258U) },
		{ FZoneShapePoint::StaticStruct, Z_Construct_UScriptStruct_FZoneShapePoint_Statics::NewStructOps, TEXT("ZoneShapePoint"), &Z_Registration_Info_UScriptStruct_ZoneShapePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneShapePoint), 4185255987U) },
		{ FZoneShapeConnector::StaticStruct, Z_Construct_UScriptStruct_FZoneShapeConnector_Statics::NewStructOps, TEXT("ZoneShapeConnector"), &Z_Registration_Info_UScriptStruct_ZoneShapeConnector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneShapeConnector), 1635603375U) },
		{ FZoneShapeConnection::StaticStruct, Z_Construct_UScriptStruct_FZoneShapeConnection_Statics::NewStructOps, TEXT("ZoneShapeConnection"), &Z_Registration_Info_UScriptStruct_ZoneShapeConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneShapeConnection), 2799536232U) },
		{ FZoneGraphTessellationSettings::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTessellationSettings_Statics::NewStructOps, TEXT("ZoneGraphTessellationSettings"), &Z_Registration_Info_UScriptStruct_ZoneGraphTessellationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTessellationSettings), 1710564185U) },
		{ FZoneGraphLaneRoutingRule::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLaneRoutingRule_Statics::NewStructOps, TEXT("ZoneGraphLaneRoutingRule"), &Z_Registration_Info_UScriptStruct_ZoneGraphLaneRoutingRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLaneRoutingRule), 859967410U) },
		{ FZoneGraphBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBuildSettings_Statics::NewStructOps, TEXT("ZoneGraphBuildSettings"), &Z_Registration_Info_UScriptStruct_ZoneGraphBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBuildSettings), 27466071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_3942743213(TEXT("/Script/ZoneGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
