// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdFragments() {}
// Cross Module References
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdObstacleFragment();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdTag();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References

static_assert(std::is_polymorphic<FMassCrowdTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCrowdTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdTag;
class UScriptStruct* FMassCrowdTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdTag, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdTag.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdTag>()
{
	return FMassCrowdTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Special tag to differentiate the crowd from the rest of the other entities\n * Should not contain any data, this is purely a tag\n */" },
		{ "ModuleRelativePath", "Public/MassCrowdFragments.h" },
		{ "ToolTip", "Special tag to differentiate the crowd from the rest of the other entities\nShould not contain any data, this is purely a tag" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCrowdTag",
		sizeof(FMassCrowdTag),
		alignof(FMassCrowdTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCrowdLaneTrackingFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassCrowdLaneTrackingFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment;
class UScriptStruct* FMassCrowdLaneTrackingFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdLaneTrackingFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdLaneTrackingFragment>()
{
	return FMassCrowdLaneTrackingFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data fragment to store the last lane the agent was tracked on.\n */" },
		{ "ModuleRelativePath", "Public/MassCrowdFragments.h" },
		{ "ToolTip", "Data fragment to store the last lane the agent was tracked on." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdLaneTrackingFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassCrowdLaneTrackingFragment",
		sizeof(FMassCrowdLaneTrackingFragment),
		alignof(FMassCrowdLaneTrackingFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCrowdObstacleFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassCrowdObstacleFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment;
class UScriptStruct* FMassCrowdObstacleFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdObstacleFragment, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdObstacleFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdObstacleFragment>()
{
	return FMassCrowdObstacleFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassCrowdFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdObstacleFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassCrowdObstacleFragment",
		sizeof(FMassCrowdObstacleFragment),
		alignof(FMassCrowdObstacleFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdObstacleFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassCrowdTag::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdTag_Statics::NewStructOps, TEXT("MassCrowdTag"), &Z_Registration_Info_UScriptStruct_MassCrowdTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdTag), 1686720835U) },
		{ FMassCrowdLaneTrackingFragment::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdLaneTrackingFragment_Statics::NewStructOps, TEXT("MassCrowdLaneTrackingFragment"), &Z_Registration_Info_UScriptStruct_MassCrowdLaneTrackingFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdLaneTrackingFragment), 2637777776U) },
		{ FMassCrowdObstacleFragment::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdObstacleFragment_Statics::NewStructOps, TEXT("MassCrowdObstacleFragment"), &Z_Registration_Info_UScriptStruct_MassCrowdObstacleFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdObstacleFragment), 1631290307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdFragments_h_4071216669(TEXT("/Script/MassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
