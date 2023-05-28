// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationFragments.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationTypes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphNavigationFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathPoint();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphShortPathRequest();
	UPackage* Z_Construct_UPackage__Script_MassZoneGraphNavigation();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References

static_assert(std::is_polymorphic<FMassZoneGraphNavigationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassZoneGraphNavigationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters;
class UScriptStruct* FMassZoneGraphNavigationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphNavigationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphNavigationParameters>()
{
	return FMassZoneGraphNavigationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphNavigationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_LaneFilter_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Filter describing which lanes can be used when spawned. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Filter describing which lanes can be used when spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_LaneFilter = { "LaneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphNavigationParameters, LaneFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_LaneFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_LaneFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_QueryRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Query radius when trying to find nearest lane when spawned. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Query radius when trying to find nearest lane when spawned." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_QueryRadius = { "QueryRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphNavigationParameters, QueryRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_QueryRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_QueryRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_LaneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewProp_QueryRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassZoneGraphNavigationParameters",
		sizeof(FMassZoneGraphNavigationParameters),
		alignof(FMassZoneGraphNavigationParameters),
		Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphPathRequestFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassZoneGraphPathRequestFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment;
class UScriptStruct* FMassZoneGraphPathRequestFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphPathRequestFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphPathRequestFragment>()
{
	return FMassZoneGraphPathRequestFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores path request associated to a new movement action. This is used to replicate actions. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Stores path request associated to a new movement action. This is used to replicate actions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphPathRequestFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewProp_PathRequest_MetaData[] = {
		{ "Comment", "/** Short path request Handle to current lane. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Short path request Handle to current lane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewProp_PathRequest = { "PathRequest", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphPathRequestFragment, PathRequest), Z_Construct_UScriptStruct_FZoneGraphShortPathRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewProp_PathRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewProp_PathRequest_MetaData)) }; // 391483634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewProp_PathRequest,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassZoneGraphPathRequestFragment",
		sizeof(FMassZoneGraphPathRequestFragment),
		alignof(FMassZoneGraphPathRequestFragment),
		Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphLaneLocationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassZoneGraphLaneLocationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment;
class UScriptStruct* FMassZoneGraphLaneLocationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphLaneLocationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphLaneLocationFragment>()
{
	return FMassZoneGraphLaneLocationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes current location on ZoneGraph */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Describes current location on ZoneGraph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphLaneLocationFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassZoneGraphLaneLocationFragment",
		sizeof(FMassZoneGraphLaneLocationFragment),
		alignof(FMassZoneGraphLaneLocationFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphCachedLaneFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassZoneGraphCachedLaneFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment;
class UScriptStruct* FMassZoneGraphCachedLaneFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphCachedLaneFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphCachedLaneFragment>()
{
	return FMassZoneGraphCachedLaneFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes part of a ZoneGraph lane. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Describes part of a ZoneGraph lane." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphCachedLaneFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassZoneGraphCachedLaneFragment",
		sizeof(FMassZoneGraphCachedLaneFragment),
		alignof(FMassZoneGraphCachedLaneFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint;
class UScriptStruct* FMassZoneGraphPathPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphPathPoint, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphPathPoint"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphPathPoint>()
{
	return FMassZoneGraphPathPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphPathPoint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		nullptr,
		&NewStructOps,
		"MassZoneGraphPathPoint",
		sizeof(FMassZoneGraphPathPoint),
		alignof(FMassZoneGraphPathPoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphShortPathFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassZoneGraphShortPathFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment;
class UScriptStruct* FMassZoneGraphShortPathFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassZoneGraphShortPathFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassZoneGraphShortPathFragment>()
{
	return FMassZoneGraphShortPathFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes short path along ZoneGraph */// @todo MassMovement: it should be possible to prune this down to 64bytes\n// - remove debug lane handle, and replace other with index\n// - see if we can remove move tangent?\n" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
		{ "ToolTip", "Describes short path along ZoneGraph // @todo MassMovement: it should be possible to prune this down to 64bytes\n// - remove debug lane handle, and replace other with index\n// - see if we can remove move tangent?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphShortPathFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassZoneGraphShortPathFragment",
		sizeof(FMassZoneGraphShortPathFragment),
		alignof(FMassZoneGraphShortPathFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLaneCacheBoundaryFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassLaneCacheBoundaryFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment;
class UScriptStruct* FMassLaneCacheBoundaryFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("MassLaneCacheBoundaryFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FMassLaneCacheBoundaryFragment>()
{
	return FMassLaneCacheBoundaryFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLaneCacheBoundaryFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassLaneCacheBoundaryFragment",
		sizeof(FMassLaneCacheBoundaryFragment),
		alignof(FMassLaneCacheBoundaryFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphNavigationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters_Statics::NewStructOps, TEXT("MassZoneGraphNavigationParameters"), &Z_Registration_Info_UScriptStruct_MassZoneGraphNavigationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphNavigationParameters), 2306280579U) },
		{ FMassZoneGraphPathRequestFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphPathRequestFragment_Statics::NewStructOps, TEXT("MassZoneGraphPathRequestFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphPathRequestFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphPathRequestFragment), 2279111516U) },
		{ FMassZoneGraphLaneLocationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphLaneLocationFragment_Statics::NewStructOps, TEXT("MassZoneGraphLaneLocationFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphLaneLocationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphLaneLocationFragment), 1081789343U) },
		{ FMassZoneGraphCachedLaneFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphCachedLaneFragment_Statics::NewStructOps, TEXT("MassZoneGraphCachedLaneFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphCachedLaneFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphCachedLaneFragment), 4088777834U) },
		{ FMassZoneGraphPathPoint::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphPathPoint_Statics::NewStructOps, TEXT("MassZoneGraphPathPoint"), &Z_Registration_Info_UScriptStruct_MassZoneGraphPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphPathPoint), 3994305609U) },
		{ FMassZoneGraphShortPathFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphShortPathFragment_Statics::NewStructOps, TEXT("MassZoneGraphShortPathFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphShortPathFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphShortPathFragment), 580989004U) },
		{ FMassLaneCacheBoundaryFragment::StaticStruct, Z_Construct_UScriptStruct_FMassLaneCacheBoundaryFragment_Statics::NewStructOps, TEXT("MassLaneCacheBoundaryFragment"), &Z_Registration_Info_UScriptStruct_MassLaneCacheBoundaryFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLaneCacheBoundaryFragment), 1484577917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationFragments_h_3417147027(TEXT("/Script/MassZoneGraphNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
