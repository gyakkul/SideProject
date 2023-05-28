// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTestFarmPlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTestFarmPlot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_AMassEntityTestFarmPlot();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerExpired();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmProcessorBase();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmProcessorBase_NoRegister();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmWaterProcessor();
	MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmWaterProcessor_NoRegister();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmCropFragment();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmFlowerFragment();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmGridCellData();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmReadyToHarvestTag();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualDataRow();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualFragment();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmWaterFragment();
	MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FHarvestTimerFragment();
	UPackage* Z_Construct_UPackage__Script_MassEntityTestSuite();
// End Cross Module References

static_assert(std::is_polymorphic<FFarmVisualDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFarmVisualDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmVisualDataRow;
class UScriptStruct* FFarmVisualDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualDataRow, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmVisualDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmVisualDataRow>()
{
	return FFarmVisualDataRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmVisualDataRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFarmVisualDataRow, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFarmVisualDataRow, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FarmVisualDataRow",
		sizeof(FFarmVisualDataRow),
		alignof(FFarmVisualDataRow),
		Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualDataRow()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton, Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmJustBecameReadyToHarvestTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FFarmJustBecameReadyToHarvestTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag;
class UScriptStruct* FFarmJustBecameReadyToHarvestTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmJustBecameReadyToHarvestTag"));
	}
	return Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmJustBecameReadyToHarvestTag>()
{
	return FFarmJustBecameReadyToHarvestTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmJustBecameReadyToHarvestTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"FarmJustBecameReadyToHarvestTag",
		sizeof(FFarmJustBecameReadyToHarvestTag),
		alignof(FFarmJustBecameReadyToHarvestTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton, Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmReadyToHarvestTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FFarmReadyToHarvestTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag;
class UScriptStruct* FFarmReadyToHarvestTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmReadyToHarvestTag"));
	}
	return Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmReadyToHarvestTag>()
{
	return FFarmReadyToHarvestTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmReadyToHarvestTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"FarmReadyToHarvestTag",
		sizeof(FFarmReadyToHarvestTag),
		alignof(FFarmReadyToHarvestTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmReadyToHarvestTag()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton, Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmGridCellData>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmGridCellData cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmGridCellData;
class UScriptStruct* FFarmGridCellData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmGridCellData"));
	}
	return Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmGridCellData>()
{
	return FFarmGridCellData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmGridCellData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmGridCellData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmGridCellData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmGridCellData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmGridCellData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FarmGridCellData",
		sizeof(FFarmGridCellData),
		alignof(FFarmGridCellData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmGridCellData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmGridCellData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmGridCellData()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton, Z_Construct_UScriptStruct_FFarmGridCellData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmWaterFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmWaterFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmWaterFragment;
class UScriptStruct* FFarmWaterFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmWaterFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmWaterFragment>()
{
	return FFarmWaterFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmWaterFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmWaterFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FarmWaterFragment",
		sizeof(FFarmWaterFragment),
		alignof(FFarmWaterFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmWaterFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmFlowerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmFlowerFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmFlowerFragment;
class UScriptStruct* FFarmFlowerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmFlowerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmFlowerFragment>()
{
	return FFarmFlowerFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmFlowerFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FarmFlowerFragment",
		sizeof(FFarmFlowerFragment),
		alignof(FFarmFlowerFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmFlowerFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmCropFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmCropFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmCropFragment;
class UScriptStruct* FFarmCropFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmCropFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmCropFragment>()
{
	return FFarmCropFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmCropFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmCropFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmCropFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmCropFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmCropFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FarmCropFragment",
		sizeof(FFarmCropFragment),
		alignof(FFarmCropFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmCropFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmCropFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmCropFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmCropFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFarmVisualFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmVisualFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmVisualFragment;
class UScriptStruct* FFarmVisualFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmVisualFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmVisualFragment>()
{
	return FFarmVisualFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFarmVisualFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmVisualFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FarmVisualFragment",
		sizeof(FFarmVisualFragment),
		alignof(FFarmVisualFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHarvestTimerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FHarvestTimerFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HarvestTimerFragment;
class UScriptStruct* FHarvestTimerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("HarvestTimerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FHarvestTimerFragment>()
{
	return FHarvestTimerFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHarvestTimerFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"HarvestTimerFragment",
		sizeof(FHarvestTimerFragment),
		alignof(FHarvestTimerFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHarvestTimerFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton, Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton;
	}
	void UFarmProcessorBase::StaticRegisterNativesUFarmProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmProcessorBase);
	UClass* Z_Construct_UClass_UFarmProcessorBase_NoRegister()
	{
		return UFarmProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UFarmProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmProcessorBase_Statics::ClassParams = {
		&UFarmProcessorBase::StaticClass,
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
		0x400030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmProcessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmProcessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton, Z_Construct_UClass_UFarmProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmProcessorBase>()
	{
		return UFarmProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmProcessorBase);
	UFarmProcessorBase::~UFarmProcessorBase() {}
	void UFarmWaterProcessor::StaticRegisterNativesUFarmWaterProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmWaterProcessor);
	UClass* Z_Construct_UClass_UFarmWaterProcessor_NoRegister()
	{
		return UFarmWaterProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UFarmWaterProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmWaterProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmWaterProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmWaterProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmWaterProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmWaterProcessor_Statics::ClassParams = {
		&UFarmWaterProcessor::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmWaterProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmWaterProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmWaterProcessor()
	{
		if (!Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton, Z_Construct_UClass_UFarmWaterProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmWaterProcessor>()
	{
		return UFarmWaterProcessor::StaticClass();
	}
	UFarmWaterProcessor::UFarmWaterProcessor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmWaterProcessor);
	UFarmWaterProcessor::~UFarmWaterProcessor() {}
	void UFarmHarvestTimerSystem_Flowers::StaticRegisterNativesUFarmHarvestTimerSystem_Flowers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSystem_Flowers);
	UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister()
	{
		return UFarmHarvestTimerSystem_Flowers::StaticClass();
	}
	struct Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSystem_Flowers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::ClassParams = {
		&UFarmHarvestTimerSystem_Flowers::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers()
	{
		if (!Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSystem_Flowers>()
	{
		return UFarmHarvestTimerSystem_Flowers::StaticClass();
	}
	UFarmHarvestTimerSystem_Flowers::UFarmHarvestTimerSystem_Flowers() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSystem_Flowers);
	UFarmHarvestTimerSystem_Flowers::~UFarmHarvestTimerSystem_Flowers() {}
	void UFarmHarvestTimerSystem_Crops::StaticRegisterNativesUFarmHarvestTimerSystem_Crops()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSystem_Crops);
	UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister()
	{
		return UFarmHarvestTimerSystem_Crops::StaticClass();
	}
	struct Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSystem_Crops>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::ClassParams = {
		&UFarmHarvestTimerSystem_Crops::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops()
	{
		if (!Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSystem_Crops>()
	{
		return UFarmHarvestTimerSystem_Crops::StaticClass();
	}
	UFarmHarvestTimerSystem_Crops::UFarmHarvestTimerSystem_Crops() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSystem_Crops);
	UFarmHarvestTimerSystem_Crops::~UFarmHarvestTimerSystem_Crops() {}
	void UFarmHarvestTimerExpired::StaticRegisterNativesUFarmHarvestTimerExpired()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerExpired);
	UClass* Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister()
	{
		return UFarmHarvestTimerExpired::StaticClass();
	}
	struct Z_Construct_UClass_UFarmHarvestTimerExpired_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerExpired>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::ClassParams = {
		&UFarmHarvestTimerExpired::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmHarvestTimerExpired()
	{
		if (!Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerExpired>()
	{
		return UFarmHarvestTimerExpired::StaticClass();
	}
	UFarmHarvestTimerExpired::UFarmHarvestTimerExpired() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerExpired);
	UFarmHarvestTimerExpired::~UFarmHarvestTimerExpired() {}
	void UFarmHarvestTimerSetIcon::StaticRegisterNativesUFarmHarvestTimerSetIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSetIcon);
	UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister()
	{
		return UFarmHarvestTimerSetIcon::StaticClass();
	}
	struct Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconISMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HarvestIconISMC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC = { "HarvestIconISMC", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFarmHarvestTimerSetIcon, HarvestIconISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSetIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::ClassParams = {
		&UFarmHarvestTimerSetIcon::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers),
		0,
		0x408030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon()
	{
		if (!Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSetIcon>()
	{
		return UFarmHarvestTimerSetIcon::StaticClass();
	}
	UFarmHarvestTimerSetIcon::UFarmHarvestTimerSetIcon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSetIcon);
	UFarmHarvestTimerSetIcon::~UFarmHarvestTimerSetIcon() {}
	void AMassEntityTestFarmPlot::StaticRegisterNativesAMassEntityTestFarmPlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassEntityTestFarmPlot);
	UClass* Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister()
	{
		return AMassEntityTestFarmPlot::StaticClass();
	}
	struct Z_Construct_UClass_AMassEntityTestFarmPlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestIconScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualDataTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataTable;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualDataISMCs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataISMCs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataISMCs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerFrameSystems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerFrameSystems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerFrameSystems;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerSecondSystems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerSecondSystems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerSecondSystems;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TestDataFlowerIndicies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestDataFlowerIndicies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestDataFlowerIndicies;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TestDataCropIndicies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestDataCropIndicies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestDataCropIndicies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualNearCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualNearCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualFarCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualFarCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconNearCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IconNearCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFarCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IconFarCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconISMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HarvestIconISMC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth = { "GridCellWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, GridCellWidth), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight = { "GridCellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, GridCellHeight), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale = { "HarvestIconScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, HarvestIconScale), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_Inner = { "VisualDataTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFarmVisualDataRow, METADATA_PARAMS(nullptr, 0) }; // 346188155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable = { "VisualDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualDataTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_MetaData)) }; // 346188155
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_Inner = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualDataISMCs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_Inner = { "PerFrameSystems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems = { "PerFrameSystems", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, PerFrameSystems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_Inner = { "PerSecondSystems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems = { "PerSecondSystems", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, PerSecondSystems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_Inner = { "TestDataFlowerIndicies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_MetaData[] = {
		{ "Category", "Farm" },
		{ "Comment", "// Indices into VisualDataTable for flowers\n" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
		{ "ToolTip", "Indices into VisualDataTable for flowers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies = { "TestDataFlowerIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, TestDataFlowerIndicies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_Inner = { "TestDataCropIndicies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_MetaData[] = {
		{ "Category", "Farm" },
		{ "Comment", "// Indices into VisualDataTable for crops\n" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
		{ "ToolTip", "Indices into VisualDataTable for crops" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies = { "TestDataCropIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, TestDataCropIndicies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance = { "VisualNearCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualNearCullDistance), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance = { "VisualFarCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualFarCullDistance), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance = { "IconNearCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, IconNearCullDistance), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance = { "IconFarCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, IconFarCullDistance), METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Farm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC = { "HarvestIconISMC", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassEntityTestFarmPlot, HarvestIconISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassEntityTestFarmPlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::ClassParams = {
		&AMassEntityTestFarmPlot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassEntityTestFarmPlot()
	{
		if (!Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton, Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton;
	}
	template<> MASSENTITYTESTSUITE_API UClass* StaticClass<AMassEntityTestFarmPlot>()
	{
		return AMassEntityTestFarmPlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassEntityTestFarmPlot);
	AMassEntityTestFarmPlot::~AMassEntityTestFarmPlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ScriptStructInfo[] = {
		{ FFarmVisualDataRow::StaticStruct, Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewStructOps, TEXT("FarmVisualDataRow"), &Z_Registration_Info_UScriptStruct_FarmVisualDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmVisualDataRow), 346188155U) },
		{ FFarmJustBecameReadyToHarvestTag::StaticStruct, Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::NewStructOps, TEXT("FarmJustBecameReadyToHarvestTag"), &Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmJustBecameReadyToHarvestTag), 3360687458U) },
		{ FFarmReadyToHarvestTag::StaticStruct, Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::NewStructOps, TEXT("FarmReadyToHarvestTag"), &Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmReadyToHarvestTag), 3042944427U) },
		{ FFarmGridCellData::StaticStruct, Z_Construct_UScriptStruct_FFarmGridCellData_Statics::NewStructOps, TEXT("FarmGridCellData"), &Z_Registration_Info_UScriptStruct_FarmGridCellData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmGridCellData), 4279090050U) },
		{ FFarmWaterFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::NewStructOps, TEXT("FarmWaterFragment"), &Z_Registration_Info_UScriptStruct_FarmWaterFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmWaterFragment), 2075157943U) },
		{ FFarmFlowerFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::NewStructOps, TEXT("FarmFlowerFragment"), &Z_Registration_Info_UScriptStruct_FarmFlowerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmFlowerFragment), 455480064U) },
		{ FFarmCropFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmCropFragment_Statics::NewStructOps, TEXT("FarmCropFragment"), &Z_Registration_Info_UScriptStruct_FarmCropFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmCropFragment), 3541493561U) },
		{ FFarmVisualFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::NewStructOps, TEXT("FarmVisualFragment"), &Z_Registration_Info_UScriptStruct_FarmVisualFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmVisualFragment), 2540832180U) },
		{ FHarvestTimerFragment::StaticStruct, Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::NewStructOps, TEXT("HarvestTimerFragment"), &Z_Registration_Info_UScriptStruct_HarvestTimerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHarvestTimerFragment), 639236883U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFarmProcessorBase, UFarmProcessorBase::StaticClass, TEXT("UFarmProcessorBase"), &Z_Registration_Info_UClass_UFarmProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmProcessorBase), 1418248523U) },
		{ Z_Construct_UClass_UFarmWaterProcessor, UFarmWaterProcessor::StaticClass, TEXT("UFarmWaterProcessor"), &Z_Registration_Info_UClass_UFarmWaterProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmWaterProcessor), 541127387U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers, UFarmHarvestTimerSystem_Flowers::StaticClass, TEXT("UFarmHarvestTimerSystem_Flowers"), &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSystem_Flowers), 2300754696U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSystem_Crops, UFarmHarvestTimerSystem_Crops::StaticClass, TEXT("UFarmHarvestTimerSystem_Crops"), &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSystem_Crops), 365410976U) },
		{ Z_Construct_UClass_UFarmHarvestTimerExpired, UFarmHarvestTimerExpired::StaticClass, TEXT("UFarmHarvestTimerExpired"), &Z_Registration_Info_UClass_UFarmHarvestTimerExpired, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerExpired), 916604734U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSetIcon, UFarmHarvestTimerSetIcon::StaticClass, TEXT("UFarmHarvestTimerSetIcon"), &Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSetIcon), 1818830394U) },
		{ Z_Construct_UClass_AMassEntityTestFarmPlot, AMassEntityTestFarmPlot::StaticClass, TEXT("AMassEntityTestFarmPlot"), &Z_Registration_Info_UClass_AMassEntityTestFarmPlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassEntityTestFarmPlot), 116086123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_3315217701(TEXT("/Script/MassEntityTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
