// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassNavigationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassGhostLocationFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassMoveTargetFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FMassMoveTargetFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassMoveTargetFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMoveTargetFragment;
class UScriptStruct* FMassMoveTargetFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMoveTargetFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassMoveTargetFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassMoveTargetFragment>()
{
	return FMassMoveTargetFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Move target. */" },
		{ "ModuleRelativePath", "Public/MassNavigationFragments.h" },
		{ "ToolTip", "Move target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMoveTargetFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassMoveTargetFragment",
		sizeof(FMassMoveTargetFragment),
		alignof(FMassMoveTargetFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMoveTargetFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMoveTargetFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassGhostLocationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassGhostLocationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassGhostLocationFragment;
class UScriptStruct* FMassGhostLocationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassGhostLocationFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassGhostLocationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassGhostLocationFragment>()
{
	return FMassGhostLocationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Ghost location used for standing navigation. */" },
		{ "ModuleRelativePath", "Public/MassNavigationFragments.h" },
		{ "ToolTip", "Ghost location used for standing navigation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassGhostLocationFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassGhostLocationFragment",
		sizeof(FMassGhostLocationFragment),
		alignof(FMassGhostLocationFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassGhostLocationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassGhostLocationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassNavigationObstacleGridCellLocationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassNavigationObstacleGridCellLocationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment;
class UScriptStruct* FMassNavigationObstacleGridCellLocationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassNavigationObstacleGridCellLocationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassNavigationObstacleGridCellLocationFragment>()
{
	return FMassNavigationObstacleGridCellLocationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cell location for dynamic obstacles */" },
		{ "ModuleRelativePath", "Public/MassNavigationFragments.h" },
		{ "ToolTip", "Cell location for dynamic obstacles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNavigationObstacleGridCellLocationFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassNavigationObstacleGridCellLocationFragment",
		sizeof(FMassNavigationObstacleGridCellLocationFragment),
		alignof(FMassNavigationObstacleGridCellLocationFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassAvoidanceColliderFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassAvoidanceColliderFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment;
class UScriptStruct* FMassAvoidanceColliderFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassAvoidanceColliderFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassAvoidanceColliderFragment>()
{
	return FMassAvoidanceColliderFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Fragment holding data for avoidance colliders */" },
		{ "ModuleRelativePath", "Public/MassNavigationFragments.h" },
		{ "ToolTip", "Fragment holding data for avoidance colliders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassAvoidanceColliderFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassAvoidanceColliderFragment",
		sizeof(FMassAvoidanceColliderFragment),
		alignof(FMassAvoidanceColliderFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassInNavigationObstacleGridTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassInNavigationObstacleGridTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag;
class UScriptStruct* FMassInNavigationObstacleGridTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassInNavigationObstacleGridTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassInNavigationObstacleGridTag>()
{
	return FMassInNavigationObstacleGridTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component Tag to tell if the entity is in the navigation obstacle grid */" },
		{ "ModuleRelativePath", "Public/MassNavigationFragments.h" },
		{ "ToolTip", "Component Tag to tell if the entity is in the navigation obstacle grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInNavigationObstacleGridTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassInNavigationObstacleGridTag",
		sizeof(FMassInNavigationObstacleGridTag),
		alignof(FMassInNavigationObstacleGridTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.InnerSingleton, Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassMoveTargetFragment::StaticStruct, Z_Construct_UScriptStruct_FMassMoveTargetFragment_Statics::NewStructOps, TEXT("MassMoveTargetFragment"), &Z_Registration_Info_UScriptStruct_MassMoveTargetFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMoveTargetFragment), 710097902U) },
		{ FMassGhostLocationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassGhostLocationFragment_Statics::NewStructOps, TEXT("MassGhostLocationFragment"), &Z_Registration_Info_UScriptStruct_MassGhostLocationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassGhostLocationFragment), 3858179564U) },
		{ FMassNavigationObstacleGridCellLocationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassNavigationObstacleGridCellLocationFragment_Statics::NewStructOps, TEXT("MassNavigationObstacleGridCellLocationFragment"), &Z_Registration_Info_UScriptStruct_MassNavigationObstacleGridCellLocationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNavigationObstacleGridCellLocationFragment), 3323540129U) },
		{ FMassAvoidanceColliderFragment::StaticStruct, Z_Construct_UScriptStruct_FMassAvoidanceColliderFragment_Statics::NewStructOps, TEXT("MassAvoidanceColliderFragment"), &Z_Registration_Info_UScriptStruct_MassAvoidanceColliderFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassAvoidanceColliderFragment), 166968380U) },
		{ FMassInNavigationObstacleGridTag::StaticStruct, Z_Construct_UScriptStruct_FMassInNavigationObstacleGridTag_Statics::NewStructOps, TEXT("MassInNavigationObstacleGridTag"), &Z_Registration_Info_UScriptStruct_MassInNavigationObstacleGridTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInNavigationObstacleGridTag), 2733783497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationFragments_h_3197939772(TEXT("/Script/MassNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
