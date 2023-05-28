// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderNearbySpawnedActorSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderNearbySpawnedActorSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderNearbySpawnedActorSource::StaticRegisterNativesUTakeRecorderNearbySpawnedActorSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderNearbySpawnedActorSource);
	UClass* Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_NoRegister()
	{
		return UTakeRecorderNearbySpawnedActorSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proximity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Proximity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterSpawnedActors_MetaData[];
#endif
		static void NewProp_bFilterSpawnedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterSpawnedActors;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Actors" },
		{ "Comment", "/** A recording source that detects actors spawned close to the current camera, and captures them as spawnables */" },
		{ "IncludePath", "TakeRecorderNearbySpawnedActorSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderNearbySpawnedActorSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Nearby Spawned Actors" },
		{ "ToolTip", "A recording source that detects actors spawned close to the current camera, and captures them as spawnables" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_Proximity_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The proximity to the current camera that an actor must be spawned in order to be recorded as a spawnable. If 0, proximity is disregarded. */" },
		{ "DisplayName", "Spawn Proximity" },
		{ "ModuleRelativePath", "Private/TakeRecorderNearbySpawnedActorSource.h" },
		{ "ToolTip", "The proximity to the current camera that an actor must be spawned in order to be recorded as a spawnable. If 0, proximity is disregarded." },
		{ "units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_Proximity = { "Proximity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderNearbySpawnedActorSource, Proximity), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_Proximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_Proximity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Should we only record actors that pass the filter list?*/" },
		{ "ModuleRelativePath", "Private/TakeRecorderNearbySpawnedActorSource.h" },
		{ "ToolTip", "Should we only record actors that pass the filter list?" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors_SetBit(void* Obj)
	{
		((UTakeRecorderNearbySpawnedActorSource*)Obj)->bFilterSpawnedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors = { "bFilterSpawnedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderNearbySpawnedActorSource), &Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes_Inner = { "FilterTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** A type filter to apply to spawned objects */" },
		{ "EditCondition", "bFilterSpawnedActors" },
		{ "ModuleRelativePath", "Private/TakeRecorderNearbySpawnedActorSource.h" },
		{ "ToolTip", "A type filter to apply to spawned objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes = { "FilterTypes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderNearbySpawnedActorSource, FilterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_Proximity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_bFilterSpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::NewProp_FilterTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderNearbySpawnedActorSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::ClassParams = {
		&UTakeRecorderNearbySpawnedActorSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderNearbySpawnedActorSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderNearbySpawnedActorSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderNearbySpawnedActorSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderNearbySpawnedActorSource>()
	{
		return UTakeRecorderNearbySpawnedActorSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderNearbySpawnedActorSource);
	UTakeRecorderNearbySpawnedActorSource::~UTakeRecorderNearbySpawnedActorSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderNearbySpawnedActorSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderNearbySpawnedActorSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderNearbySpawnedActorSource, UTakeRecorderNearbySpawnedActorSource::StaticClass, TEXT("UTakeRecorderNearbySpawnedActorSource"), &Z_Registration_Info_UClass_UTakeRecorderNearbySpawnedActorSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderNearbySpawnedActorSource), 1346939072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderNearbySpawnedActorSource_h_2435242916(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderNearbySpawnedActorSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderNearbySpawnedActorSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
