// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageTile.h"
#include "ProceduralFoliageInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageTile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UProceduralFoliageTile::StaticRegisterNativesUProceduralFoliageTile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageTile);
	UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister()
	{
		return UProceduralFoliageTile::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FoliageSpawner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Procedurally determines where to spawn foliage meshes within a discrete area.\n *\x09Generally, a procedural foliage simulation as a whole is composed of multiple tiles.\n *\x09Tiles are able to overlap one another as well to create a seamless appearance.\n *\x09\n *\x09Note that the tile is not responsible for actually spawning any instances, it only determines where they should be placed.\n *\x09""Following a simulation, call ExtractDesiredInstances for information about where each instance should spawn.\n *\x09\n *\x09Note also that, barring any core changes to the ordering of TSet, foliage generation is deterministic \n *\x09(i.e. given the same inputs, the result of the simulation will always be the same).\n */" },
		{ "IncludePath", "ProceduralFoliageTile.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
		{ "ToolTip", "Procedurally determines where to spawn foliage meshes within a discrete area.\nGenerally, a procedural foliage simulation as a whole is composed of multiple tiles.\nTiles are able to overlap one another as well to create a seamless appearance.\n\nNote that the tile is not responsible for actually spawning any instances, it only determines where they should be placed.\nFollowing a simulation, call ExtractDesiredInstances for information about where each instance should spawn.\n\nNote also that, barring any core changes to the ordering of TSet, foliage generation is deterministic\n(i.e. given the same inputs, the result of the simulation will always be the same)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner = { "FoliageSpawner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageTile, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_Inner = { "InstancesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProceduralFoliageInstance, METADATA_PARAMS(nullptr, 0) }; // 923038879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray = { "InstancesArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageTile, InstancesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData)) }; // 923038879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageTile_Statics::ClassParams = {
		&UProceduralFoliageTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageTile()
	{
		if (!Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton, Z_Construct_UClass_UProceduralFoliageTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralFoliageTile.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageTile>()
	{
		return UProceduralFoliageTile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageTile);
	UProceduralFoliageTile::~UProceduralFoliageTile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageTile, UProceduralFoliageTile::StaticClass, TEXT("UProceduralFoliageTile"), &Z_Registration_Info_UClass_UProceduralFoliageTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageTile), 1663631609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_3964057592(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageTile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
