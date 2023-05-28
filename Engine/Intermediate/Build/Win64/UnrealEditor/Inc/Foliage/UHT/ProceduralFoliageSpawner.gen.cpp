// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageSpawner.h"
#include "FoliageTypeObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralFoliageSpawner::execSimulate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Simulate(Z_Param_NumSteps);
		P_NATIVE_END;
	}
	void UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner()
	{
		UClass* Class = UProceduralFoliageSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Simulate", &UProceduralFoliageSpawner::execSimulate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics
	{
		struct ProceduralFoliageSpawner_eventSimulate_Parms
		{
			int32 NumSteps;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralFoliageSpawner_eventSimulate_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "CPP_Default_NumSteps", "-1" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageSpawner, nullptr, "Simulate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::ProceduralFoliageSpawner_eventSimulate_Parms), Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageSpawner);
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister()
	{
		return UProceduralFoliageSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUniqueTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumUniqueTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumQuadTreeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumQuadTreeSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralFoliageSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate, "Simulate" }, // 445867862
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The seed used for generating the randomness of the simulation. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The seed used for generating the randomness of the simulation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, TileSize), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles = { "NumUniqueTiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, NumUniqueTiles), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log). */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize = { "MinimumQuadTreeSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, MinimumQuadTreeSize), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner = { "FoliageTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFoliageTypeObject, METADATA_PARAMS(nullptr, 0) }; // 849481103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The types of foliage to procedurally spawn. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The types of foliage to procedurally spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes = { "FoliageTypes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralFoliageSpawner, FoliageTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData)) }; // 849481103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams = {
		&UProceduralFoliageSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner()
	{
		if (!Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton, Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageSpawner>()
	{
		return UProceduralFoliageSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawner);
	UProceduralFoliageSpawner::~UProceduralFoliageSpawner() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UProceduralFoliageSpawner)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageSpawner, UProceduralFoliageSpawner::StaticClass, TEXT("UProceduralFoliageSpawner"), &Z_Registration_Info_UClass_UProceduralFoliageSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageSpawner), 1292816338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_777170170(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
