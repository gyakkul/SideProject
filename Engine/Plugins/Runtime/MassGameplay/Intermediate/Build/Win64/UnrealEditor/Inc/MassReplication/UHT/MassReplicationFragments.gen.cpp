// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationFragments() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassNetworkIDFragmentInitializer();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassNetworkIDFragmentInitializer_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase_NoRegister();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassInReplicationGridTag();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkIDFragment();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicatedAgentFragment();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationLODFragment();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationParameters();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationSharedFragment();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References

static_assert(std::is_polymorphic<FMassNetworkIDFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassNetworkIDFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassNetworkIDFragment;
class UScriptStruct* FMassNetworkIDFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNetworkIDFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassNetworkIDFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassNetworkIDFragment>()
{
	return FMassNetworkIDFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Fragment type for the mass network id of a mass entity\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Fragment type for the mass network id of a mass entity" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNetworkIDFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassNetworkIDFragment",
		sizeof(FMassNetworkIDFragment),
		alignof(FMassNetworkIDFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkIDFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassNetworkIDFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassReplicatedAgentFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassReplicatedAgentFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment;
class UScriptStruct* FMassReplicatedAgentFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicatedAgentFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicatedAgentFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicatedAgentFragment>()
{
	return FMassReplicatedAgentFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Agent handle per client, these will be at TArray indices of the Client handles indicies (used as a free list array)\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Agent handle per client, these will be at TArray indices of the Client handles indicies (used as a free list array)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicatedAgentFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassReplicatedAgentFragment",
		sizeof(FMassReplicatedAgentFragment),
		alignof(FMassReplicatedAgentFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicatedAgentFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassReplicationViewerInfoFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassReplicationViewerInfoFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment;
class UScriptStruct* FMassReplicationViewerInfoFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicationViewerInfoFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicationViewerInfoFragment>()
{
	return FMassReplicationViewerInfoFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Data fragment to store the calculated distances to viewers\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "* Data fragment to store the calculated distances to viewers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicationViewerInfoFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassReplicationViewerInfoFragment",
		sizeof(FMassReplicationViewerInfoFragment),
		alignof(FMassReplicationViewerInfoFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassReplicationLODFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassReplicationLODFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicationLODFragment;
class UScriptStruct* FMassReplicationLODFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicationLODFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicationLODFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicationLODFragment>()
{
	return FMassReplicationLODFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicationLODFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassReplicationLODFragment",
		sizeof(FMassReplicationLODFragment),
		alignof(FMassReplicationLODFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationLODFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicationLODFragment.InnerSingleton;
	}
	void UMassNetworkIDFragmentInitializer::StaticRegisterNativesUMassNetworkIDFragmentInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNetworkIDFragmentInitializer);
	UClass* Z_Construct_UClass_UMassNetworkIDFragmentInitializer_NoRegister()
	{
		return UMassNetworkIDFragmentInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassReplicationFragments.h" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNetworkIDFragmentInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::ClassParams = {
		&UMassNetworkIDFragmentInitializer::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNetworkIDFragmentInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassNetworkIDFragmentInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNetworkIDFragmentInitializer.OuterSingleton, Z_Construct_UClass_UMassNetworkIDFragmentInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNetworkIDFragmentInitializer.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassNetworkIDFragmentInitializer>()
	{
		return UMassNetworkIDFragmentInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNetworkIDFragmentInitializer);
	UMassNetworkIDFragmentInitializer::~UMassNetworkIDFragmentInitializer() {}

static_assert(std::is_polymorphic<FMassReplicationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassReplicationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicationParameters;
class UScriptStruct* FMassReplicationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicationParameters, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicationParameters.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicationParameters>()
{
	return FMassReplicationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferHysteresisOnDistancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferHysteresisOnDistancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMaxCountPerViewer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaxCountPerViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BubbleInfoClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BubbleInfoClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReplicatorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Distance where each LOD becomes relevant */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Distance where each LOD becomes relevant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODDistance, FMassReplicationParameters), nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, LODDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Hysteresis percentage on delta between the LOD distances */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Hysteresis percentage on delta between the LOD distances" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage = { "BufferHysteresisOnDistancePercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, BufferHysteresisOnDistancePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCount_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Maximum limit of entity per LOD */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Maximum limit of entity per LOD" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCount = { "LODMaxCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODMaxCount, FMassReplicationParameters), nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, LODMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCountPerViewer_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Maximum limit of entity per LOD per viewer */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Maximum limit of entity per LOD per viewer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCountPerViewer = { "LODMaxCountPerViewer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODMaxCountPerViewer, FMassReplicationParameters), nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, LODMaxCountPerViewer), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCountPerViewer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCountPerViewer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_UpdateInterval_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Distance where each LOD becomes relevant */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Distance where each LOD becomes relevant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(UpdateInterval, FMassReplicationParameters), nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, UpdateInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_UpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_UpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BubbleInfoClass_MetaData[] = {
		{ "Category", "Mass|Replication" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BubbleInfoClass = { "BubbleInfoClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, BubbleInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BubbleInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BubbleInfoClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_ReplicatorClass_MetaData[] = {
		{ "Category", "Mass|Replication" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_ReplicatorClass = { "ReplicatorClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassReplicationParameters, ReplicatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassReplicatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_ReplicatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_ReplicatorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_LODMaxCountPerViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_UpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_BubbleInfoClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewProp_ReplicatorClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassReplicationParameters",
		sizeof(FMassReplicationParameters),
		alignof(FMassReplicationParameters),
		Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicationParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassReplicationSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassReplicationSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment;
class UScriptStruct* FMassReplicationSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicationSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicationSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicationSharedFragment>()
{
	return FMassReplicationSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BubbleInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BubbleInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BubbleInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedReplicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedReplicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicationSharedFragment>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos_Inner = { "BubbleInfos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos_MetaData[] = {
		{ "Comment", "//TODO review if we need to have this as a UPROPERTY at all and also if we can make this use a TInlineAllocator\n//Can not use TInlineAllocator with UPROPERTY()\n" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "TODO review if we need to have this as a UPROPERTY at all and also if we can make this use a TInlineAllocator\nCan not use TInlineAllocator with UPROPERTY()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos = { "BubbleInfos", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassReplicationSharedFragment, BubbleInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_CachedReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_CachedReplicator = { "CachedReplicator", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassReplicationSharedFragment, CachedReplicator), Z_Construct_UClass_UMassReplicatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_CachedReplicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_CachedReplicator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_BubbleInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewProp_CachedReplicator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassReplicationSharedFragment",
		sizeof(FMassReplicationSharedFragment),
		alignof(FMassReplicationSharedFragment),
		Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassReplicationGridCellLocationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassReplicationGridCellLocationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment;
class UScriptStruct* FMassReplicationGridCellLocationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicationGridCellLocationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicationGridCellLocationFragment>()
{
	return FMassReplicationGridCellLocationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cell location for replicated mass agents, used to fetch quickly the agents around each clients */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Cell location for replicated mass agents, used to fetch quickly the agents around each clients" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicationGridCellLocationFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassReplicationGridCellLocationFragment",
		sizeof(FMassReplicationGridCellLocationFragment),
		alignof(FMassReplicationGridCellLocationFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassInReplicationGridTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassInReplicationGridTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassInReplicationGridTag;
class UScriptStruct* FMassInReplicationGridTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassInReplicationGridTag, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassInReplicationGridTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassInReplicationGridTag>()
{
	return FMassInReplicationGridTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component Tag to tell if the entity is in the replication grid */" },
		{ "ModuleRelativePath", "Public/MassReplicationFragments.h" },
		{ "ToolTip", "Component Tag to tell if the entity is in the replication grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassInReplicationGridTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassInReplicationGridTag",
		sizeof(FMassInReplicationGridTag),
		alignof(FMassInReplicationGridTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassInReplicationGridTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.InnerSingleton, Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassInReplicationGridTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassNetworkIDFragment::StaticStruct, Z_Construct_UScriptStruct_FMassNetworkIDFragment_Statics::NewStructOps, TEXT("MassNetworkIDFragment"), &Z_Registration_Info_UScriptStruct_MassNetworkIDFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNetworkIDFragment), 1956996850U) },
		{ FMassReplicatedAgentFragment::StaticStruct, Z_Construct_UScriptStruct_FMassReplicatedAgentFragment_Statics::NewStructOps, TEXT("MassReplicatedAgentFragment"), &Z_Registration_Info_UScriptStruct_MassReplicatedAgentFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicatedAgentFragment), 799208059U) },
		{ FMassReplicationViewerInfoFragment::StaticStruct, Z_Construct_UScriptStruct_FMassReplicationViewerInfoFragment_Statics::NewStructOps, TEXT("MassReplicationViewerInfoFragment"), &Z_Registration_Info_UScriptStruct_MassReplicationViewerInfoFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicationViewerInfoFragment), 1923356859U) },
		{ FMassReplicationLODFragment::StaticStruct, Z_Construct_UScriptStruct_FMassReplicationLODFragment_Statics::NewStructOps, TEXT("MassReplicationLODFragment"), &Z_Registration_Info_UScriptStruct_MassReplicationLODFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicationLODFragment), 1975729331U) },
		{ FMassReplicationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassReplicationParameters_Statics::NewStructOps, TEXT("MassReplicationParameters"), &Z_Registration_Info_UScriptStruct_MassReplicationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicationParameters), 3836671750U) },
		{ FMassReplicationSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassReplicationSharedFragment_Statics::NewStructOps, TEXT("MassReplicationSharedFragment"), &Z_Registration_Info_UScriptStruct_MassReplicationSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicationSharedFragment), 3610513193U) },
		{ FMassReplicationGridCellLocationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassReplicationGridCellLocationFragment_Statics::NewStructOps, TEXT("MassReplicationGridCellLocationFragment"), &Z_Registration_Info_UScriptStruct_MassReplicationGridCellLocationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicationGridCellLocationFragment), 2384211969U) },
		{ FMassInReplicationGridTag::StaticStruct, Z_Construct_UScriptStruct_FMassInReplicationGridTag_Statics::NewStructOps, TEXT("MassInReplicationGridTag"), &Z_Registration_Info_UScriptStruct_MassInReplicationGridTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassInReplicationGridTag), 1361530033U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassNetworkIDFragmentInitializer, UMassNetworkIDFragmentInitializer::StaticClass, TEXT("UMassNetworkIDFragmentInitializer"), &Z_Registration_Info_UClass_UMassNetworkIDFragmentInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNetworkIDFragmentInitializer), 3948460092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_2036242880(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
