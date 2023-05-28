// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassLODFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLODFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassHighLODTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassLowLODTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassMediumLODTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassOffLODTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVariableTickChunkFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassViewerInfoFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationChunkFragment();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References

static_assert(std::is_polymorphic<FMassHighLODTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassHighLODTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassHighLODTag;
class UScriptStruct* FMassHighLODTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassHighLODTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassHighLODTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassHighLODTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassHighLODTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassHighLODTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassHighLODTag>()
{
	return FMassHighLODTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassHighLODTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassHighLODTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassHighLODTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassHighLODTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassHighLODTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassHighLODTag",
		sizeof(FMassHighLODTag),
		alignof(FMassHighLODTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassHighLODTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassHighLODTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassHighLODTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassHighLODTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassHighLODTag.InnerSingleton, Z_Construct_UScriptStruct_FMassHighLODTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassHighLODTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassMediumLODTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassMediumLODTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMediumLODTag;
class UScriptStruct* FMassMediumLODTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMediumLODTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMediumLODTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMediumLODTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassMediumLODTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassMediumLODTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassMediumLODTag>()
{
	return FMassMediumLODTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMediumLODTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMediumLODTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassMediumLODTag",
		sizeof(FMassMediumLODTag),
		alignof(FMassMediumLODTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMediumLODTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMediumLODTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMediumLODTag.InnerSingleton, Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMediumLODTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLowLODTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassLowLODTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLowLODTag;
class UScriptStruct* FMassLowLODTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLowLODTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLowLODTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLowLODTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassLowLODTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassLowLODTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassLowLODTag>()
{
	return FMassLowLODTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLowLODTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLowLODTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLowLODTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLowLODTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLowLODTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassLowLODTag",
		sizeof(FMassLowLODTag),
		alignof(FMassLowLODTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLowLODTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLowLODTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLowLODTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLowLODTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLowLODTag.InnerSingleton, Z_Construct_UScriptStruct_FMassLowLODTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLowLODTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassOffLODTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassOffLODTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassOffLODTag;
class UScriptStruct* FMassOffLODTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassOffLODTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassOffLODTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassOffLODTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassOffLODTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassOffLODTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassOffLODTag>()
{
	return FMassOffLODTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassOffLODTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassOffLODTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassOffLODTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassOffLODTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassOffLODTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassOffLODTag",
		sizeof(FMassOffLODTag),
		alignof(FMassOffLODTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassOffLODTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassOffLODTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassOffLODTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassOffLODTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassOffLODTag.InnerSingleton, Z_Construct_UScriptStruct_FMassOffLODTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassOffLODTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassViewerInfoFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassViewerInfoFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassViewerInfoFragment;
class UScriptStruct* FMassViewerInfoFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassViewerInfoFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassViewerInfoFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassViewerInfoFragment>()
{
	return FMassViewerInfoFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Data fragment to store the calculated distances to viewers\n */" },
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
		{ "ToolTip", "* Data fragment to store the calculated distances to viewers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassViewerInfoFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassViewerInfoFragment",
		sizeof(FMassViewerInfoFragment),
		alignof(FMassViewerInfoFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassViewerInfoFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassViewerInfoFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVariableTickChunkFragment>() == std::is_polymorphic<FMassChunkFragment>(), "USTRUCT FMassVariableTickChunkFragment cannot be polymorphic unless super FMassChunkFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment;
class UScriptStruct* FMassVariableTickChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVariableTickChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassVariableTickChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassVariableTickChunkFragment>()
{
	return FMassVariableTickChunkFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVariableTickChunkFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassChunkFragment,
		&NewStructOps,
		"MassVariableTickChunkFragment",
		sizeof(FMassVariableTickChunkFragment),
		alignof(FMassVariableTickChunkFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVariableTickChunkFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCollectLODViewerInfoTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCollectLODViewerInfoTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag;
class UScriptStruct* FMassCollectLODViewerInfoTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassCollectLODViewerInfoTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassCollectLODViewerInfoTag>()
{
	return FMassCollectLODViewerInfoTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCollectLODViewerInfoTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassCollectLODViewerInfoTag",
		sizeof(FMassCollectLODViewerInfoTag),
		alignof(FMassCollectLODViewerInfoTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisibilityCanBeSeenTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassVisibilityCanBeSeenTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag;
class UScriptStruct* FMassVisibilityCanBeSeenTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassVisibilityCanBeSeenTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassVisibilityCanBeSeenTag>()
{
	return FMassVisibilityCanBeSeenTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisibilityCanBeSeenTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassVisibilityCanBeSeenTag",
		sizeof(FMassVisibilityCanBeSeenTag),
		alignof(FMassVisibilityCanBeSeenTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.InnerSingleton, Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisibilityCulledByFrustumTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassVisibilityCulledByFrustumTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag;
class UScriptStruct* FMassVisibilityCulledByFrustumTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassVisibilityCulledByFrustumTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassVisibilityCulledByFrustumTag>()
{
	return FMassVisibilityCulledByFrustumTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisibilityCulledByFrustumTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassVisibilityCulledByFrustumTag",
		sizeof(FMassVisibilityCulledByFrustumTag),
		alignof(FMassVisibilityCulledByFrustumTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.InnerSingleton, Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisibilityCulledByDistanceTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassVisibilityCulledByDistanceTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag;
class UScriptStruct* FMassVisibilityCulledByDistanceTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassVisibilityCulledByDistanceTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassVisibilityCulledByDistanceTag>()
{
	return FMassVisibilityCulledByDistanceTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisibilityCulledByDistanceTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassVisibilityCulledByDistanceTag",
		sizeof(FMassVisibilityCulledByDistanceTag),
		alignof(FMassVisibilityCulledByDistanceTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.InnerSingleton, Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisualizationChunkFragment>() == std::is_polymorphic<FMassChunkFragment>(), "USTRUCT FMassVisualizationChunkFragment cannot be polymorphic unless super FMassChunkFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment;
class UScriptStruct* FMassVisualizationChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisualizationChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassVisualizationChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassVisualizationChunkFragment>()
{
	return FMassVisualizationChunkFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisualizationChunkFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassChunkFragment,
		&NewStructOps,
		"MassVisualizationChunkFragment",
		sizeof(FMassVisualizationChunkFragment),
		alignof(FMassVisualizationChunkFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationChunkFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassHighLODTag::StaticStruct, Z_Construct_UScriptStruct_FMassHighLODTag_Statics::NewStructOps, TEXT("MassHighLODTag"), &Z_Registration_Info_UScriptStruct_MassHighLODTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassHighLODTag), 3041472582U) },
		{ FMassMediumLODTag::StaticStruct, Z_Construct_UScriptStruct_FMassMediumLODTag_Statics::NewStructOps, TEXT("MassMediumLODTag"), &Z_Registration_Info_UScriptStruct_MassMediumLODTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMediumLODTag), 540283944U) },
		{ FMassLowLODTag::StaticStruct, Z_Construct_UScriptStruct_FMassLowLODTag_Statics::NewStructOps, TEXT("MassLowLODTag"), &Z_Registration_Info_UScriptStruct_MassLowLODTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLowLODTag), 2093501115U) },
		{ FMassOffLODTag::StaticStruct, Z_Construct_UScriptStruct_FMassOffLODTag_Statics::NewStructOps, TEXT("MassOffLODTag"), &Z_Registration_Info_UScriptStruct_MassOffLODTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassOffLODTag), 700338210U) },
		{ FMassViewerInfoFragment::StaticStruct, Z_Construct_UScriptStruct_FMassViewerInfoFragment_Statics::NewStructOps, TEXT("MassViewerInfoFragment"), &Z_Registration_Info_UScriptStruct_MassViewerInfoFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassViewerInfoFragment), 3210265792U) },
		{ FMassVariableTickChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassVariableTickChunkFragment_Statics::NewStructOps, TEXT("MassVariableTickChunkFragment"), &Z_Registration_Info_UScriptStruct_MassVariableTickChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVariableTickChunkFragment), 1301567118U) },
		{ FMassCollectLODViewerInfoTag::StaticStruct, Z_Construct_UScriptStruct_FMassCollectLODViewerInfoTag_Statics::NewStructOps, TEXT("MassCollectLODViewerInfoTag"), &Z_Registration_Info_UScriptStruct_MassCollectLODViewerInfoTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCollectLODViewerInfoTag), 4163203429U) },
		{ FMassVisibilityCanBeSeenTag::StaticStruct, Z_Construct_UScriptStruct_FMassVisibilityCanBeSeenTag_Statics::NewStructOps, TEXT("MassVisibilityCanBeSeenTag"), &Z_Registration_Info_UScriptStruct_MassVisibilityCanBeSeenTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisibilityCanBeSeenTag), 2766734091U) },
		{ FMassVisibilityCulledByFrustumTag::StaticStruct, Z_Construct_UScriptStruct_FMassVisibilityCulledByFrustumTag_Statics::NewStructOps, TEXT("MassVisibilityCulledByFrustumTag"), &Z_Registration_Info_UScriptStruct_MassVisibilityCulledByFrustumTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisibilityCulledByFrustumTag), 248691442U) },
		{ FMassVisibilityCulledByDistanceTag::StaticStruct, Z_Construct_UScriptStruct_FMassVisibilityCulledByDistanceTag_Statics::NewStructOps, TEXT("MassVisibilityCulledByDistanceTag"), &Z_Registration_Info_UScriptStruct_MassVisibilityCulledByDistanceTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisibilityCulledByDistanceTag), 1899082540U) },
		{ FMassVisualizationChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassVisualizationChunkFragment_Statics::NewStructOps, TEXT("MassVisualizationChunkFragment"), &Z_Registration_Info_UScriptStruct_MassVisualizationChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisualizationChunkFragment), 1290906037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODFragments_h_3696958008(TEXT("/Script/MassLOD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
