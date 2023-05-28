// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassSimulationLOD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSimulationLOD() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSLOD_API UClass* Z_Construct_UClass_UMassSimulationLODProcessor();
	MASSLOD_API UClass* Z_Construct_UClass_UMassSimulationLODProcessor_NoRegister();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODParameters();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassVariableTickChunkFragment();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSimulationLODFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSimulationLODFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationLODFragment;
class UScriptStruct* FMassSimulationLODFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationLODFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationLODFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationLODFragment>()
{
	return FMassSimulationLODFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationLODFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSimulationLODFragment",
		sizeof(FMassSimulationLODFragment),
		alignof(FMassSimulationLODFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationLODFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationVariableTickFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSimulationVariableTickFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment;
class UScriptStruct* FMassSimulationVariableTickFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationVariableTickFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationVariableTickFragment>()
{
	return FMassSimulationVariableTickFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationVariableTickFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSimulationVariableTickFragment",
		sizeof(FMassSimulationVariableTickFragment),
		alignof(FMassSimulationVariableTickFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationVariableTickChunkFragment>() == std::is_polymorphic<FMassVariableTickChunkFragment>(), "USTRUCT FMassSimulationVariableTickChunkFragment cannot be polymorphic unless super FMassVariableTickChunkFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment;
class UScriptStruct* FMassSimulationVariableTickChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationVariableTickChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationVariableTickChunkFragment>()
{
	return FMassSimulationVariableTickChunkFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationVariableTickChunkFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassVariableTickChunkFragment,
		&NewStructOps,
		"MassSimulationVariableTickChunkFragment",
		sizeof(FMassSimulationVariableTickChunkFragment),
		alignof(FMassSimulationVariableTickChunkFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationLODParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSimulationLODParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationLODParameters;
class UScriptStruct* FMassSimulationLODParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationLODParameters, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationLODParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationLODParameters>()
{
	return FMassSimulationLODParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetLODTags_MetaData[];
#endif
		static void NewProp_bSetLODTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetLODTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationLODParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "LOD" },
		{ "Comment", "/** Distance where each LOD becomes relevant */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "Distance where each LOD becomes relevant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODDistance, FMassSimulationLODParameters), nullptr, nullptr, STRUCT_OFFSET(FMassSimulationLODParameters, LODDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData[] = {
		{ "Category", "LOD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Hysteresis percentage on delta between the LOD distances */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "Hysteresis percentage on delta between the LOD distances" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage = { "BufferHysteresisOnDistancePercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSimulationLODParameters, BufferHysteresisOnDistancePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODMaxCount_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "LOD" },
		{ "Comment", "/** Maximum limit of entity per LOD */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "Maximum limit of entity per LOD" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODMaxCount = { "LODMaxCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODMaxCount, FMassSimulationLODParameters), nullptr, nullptr, STRUCT_OFFSET(FMassSimulationLODParameters, LODMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If true, will set the associated LOD tag on the entity */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "If true, will set the associated LOD tag on the entity" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags_SetBit(void* Obj)
	{
		((FMassSimulationLODParameters*)Obj)->bSetLODTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags = { "bSetLODTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassSimulationLODParameters), &Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_LODMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewProp_bSetLODTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSimulationLODParameters",
		sizeof(FMassSimulationLODParameters),
		alignof(FMassSimulationLODParameters),
		Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationLODParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationVariableTickParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSimulationVariableTickParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters;
class UScriptStruct* FMassSimulationVariableTickParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationVariableTickParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationVariableTickParameters>()
{
	return FMassSimulationVariableTickParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickRates_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickRates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpreadFirstSimulationUpdate_MetaData[];
#endif
		static void NewProp_bSpreadFirstSimulationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpreadFirstSimulationUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationVariableTickParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_TickRates_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "VariableTick" },
		{ "Comment", "/** Rate in seconds at which entities should update when in this LOD */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "Rate in seconds at which entities should update when in this LOD" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_TickRates = { "TickRates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TickRates, FMassSimulationVariableTickParameters), nullptr, nullptr, STRUCT_OFFSET(FMassSimulationVariableTickParameters, TickRates), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_TickRates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_TickRates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate_MetaData[] = {
		{ "Category", "VariableTick" },
		{ "Comment", "/** If true, will spread the first simulation update over TickRate period */" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
		{ "ToolTip", "If true, will spread the first simulation update over TickRate period" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate_SetBit(void* Obj)
	{
		((FMassSimulationVariableTickParameters*)Obj)->bSpreadFirstSimulationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate = { "bSpreadFirstSimulationUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassSimulationVariableTickParameters), &Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_TickRates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewProp_bSpreadFirstSimulationUpdate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSimulationVariableTickParameters",
		sizeof(FMassSimulationVariableTickParameters),
		alignof(FMassSimulationVariableTickParameters),
		Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationLODSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSimulationLODSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment;
class UScriptStruct* FMassSimulationLODSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationLODSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationLODSharedFragment>()
{
	return FMassSimulationLODSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationLODSharedFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSimulationLODSharedFragment",
		sizeof(FMassSimulationLODSharedFragment),
		alignof(FMassSimulationLODSharedFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSimulationVariableTickSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSimulationVariableTickSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment;
class UScriptStruct* FMassSimulationVariableTickSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassSimulationVariableTickSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassSimulationVariableTickSharedFragment>()
{
	return FMassSimulationVariableTickSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSimulationVariableTickSharedFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSimulationVariableTickSharedFragment",
		sizeof(FMassSimulationVariableTickSharedFragment),
		alignof(FMassSimulationVariableTickSharedFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment.InnerSingleton;
	}
	void UMassSimulationLODProcessor::StaticRegisterNativesUMassSimulationLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimulationLODProcessor);
	UClass* Z_Construct_UClass_UMassSimulationLODProcessor_NoRegister()
	{
		return UMassSimulationLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimulationLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimulationLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationLODProcessor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Simulation LOD" },
		{ "IncludePath", "MassSimulationLOD.h" },
		{ "ModuleRelativePath", "Public/MassSimulationLOD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimulationLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimulationLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimulationLODProcessor_Statics::ClassParams = {
		&UMassSimulationLODProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassSimulationLODProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimulationLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSimulationLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimulationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassSimulationLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimulationLODProcessor.OuterSingleton;
	}
	template<> MASSLOD_API UClass* StaticClass<UMassSimulationLODProcessor>()
	{
		return UMassSimulationLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimulationLODProcessor);
	UMassSimulationLODProcessor::~UMassSimulationLODProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ScriptStructInfo[] = {
		{ FMassSimulationLODFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics::NewStructOps, TEXT("MassSimulationLODFragment"), &Z_Registration_Info_UScriptStruct_MassSimulationLODFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationLODFragment), 2867130968U) },
		{ FMassSimulationVariableTickFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics::NewStructOps, TEXT("MassSimulationVariableTickFragment"), &Z_Registration_Info_UScriptStruct_MassSimulationVariableTickFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationVariableTickFragment), 1315917629U) },
		{ FMassSimulationVariableTickChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics::NewStructOps, TEXT("MassSimulationVariableTickChunkFragment"), &Z_Registration_Info_UScriptStruct_MassSimulationVariableTickChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationVariableTickChunkFragment), 1762306528U) },
		{ FMassSimulationLODParameters::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics::NewStructOps, TEXT("MassSimulationLODParameters"), &Z_Registration_Info_UScriptStruct_MassSimulationLODParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationLODParameters), 3013244002U) },
		{ FMassSimulationVariableTickParameters::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics::NewStructOps, TEXT("MassSimulationVariableTickParameters"), &Z_Registration_Info_UScriptStruct_MassSimulationVariableTickParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationVariableTickParameters), 2234997953U) },
		{ FMassSimulationLODSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics::NewStructOps, TEXT("MassSimulationLODSharedFragment"), &Z_Registration_Info_UScriptStruct_MassSimulationLODSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationLODSharedFragment), 1875339054U) },
		{ FMassSimulationVariableTickSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics::NewStructOps, TEXT("MassSimulationVariableTickSharedFragment"), &Z_Registration_Info_UScriptStruct_MassSimulationVariableTickSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSimulationVariableTickSharedFragment), 3552062611U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSimulationLODProcessor, UMassSimulationLODProcessor::StaticClass, TEXT("UMassSimulationLODProcessor"), &Z_Registration_Info_UClass_UMassSimulationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimulationLODProcessor), 680796835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_231653343(TEXT("/Script/MassLOD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
