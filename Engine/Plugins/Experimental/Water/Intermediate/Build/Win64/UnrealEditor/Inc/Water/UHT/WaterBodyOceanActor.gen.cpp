// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyOceanActor.h"
#include "WaterBodyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyOceanActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyOcean();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyOcean_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_OceanGenerator();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_OceanGenerator_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator();
	WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister();
// End Cross Module References
	void UDEPRECATED_OceanGenerator::StaticRegisterNativesUDEPRECATED_OceanGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_OceanGenerator);
	UClass* Z_Construct_UClass_UDEPRECATED_OceanGenerator_NoRegister()
	{
		return UDEPRECATED_OceanGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionBoxes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionHullSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHullSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionHullSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "IncludePath", "WaterBodyOceanActor.h" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes_Inner = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0014808000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_OceanGenerator, CollisionBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets_Inner = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOceanCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0014808000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_OceanGenerator, CollisionHullSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::NewProp_CollisionHullSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_OceanGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::ClassParams = {
		&UDEPRECATED_OceanGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::PropPointers),
		0,
		0x028802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_OceanGenerator()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_OceanGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_OceanGenerator.OuterSingleton, Z_Construct_UClass_UDEPRECATED_OceanGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_OceanGenerator.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UDEPRECATED_OceanGenerator>()
	{
		return UDEPRECATED_OceanGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_OceanGenerator);
	UDEPRECATED_OceanGenerator::~UDEPRECATED_OceanGenerator() {}
	void AWaterBodyOcean::StaticRegisterNativesAWaterBodyOcean()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyOcean);
	UClass* Z_Construct_UClass_AWaterBodyOcean_NoRegister()
	{
		return AWaterBodyOcean::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyOcean_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OceanGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionExtents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyOcean_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyOcean_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "WaterBodyOceanActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_OceanGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_OceanGenerator = { "OceanGenerator", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyOcean, OceanGenerator_DEPRECATED), Z_Construct_UClass_UDEPRECATED_OceanGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_OceanGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_OceanGenerator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_CollisionExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_CollisionExtents = { "CollisionExtents", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyOcean, CollisionExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_CollisionExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_CollisionExtents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyOcean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_OceanGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyOcean_Statics::NewProp_CollisionExtents,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyOcean_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyOcean>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyOcean_Statics::ClassParams = {
		&AWaterBodyOcean::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AWaterBodyOcean_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyOcean_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyOcean_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyOcean_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyOcean()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyOcean.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyOcean.OuterSingleton, Z_Construct_UClass_AWaterBodyOcean_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyOcean.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyOcean>()
	{
		return AWaterBodyOcean::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyOcean);
	AWaterBodyOcean::~AWaterBodyOcean() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_OceanGenerator, UDEPRECATED_OceanGenerator::StaticClass, TEXT("UDEPRECATED_OceanGenerator"), &Z_Registration_Info_UClass_UDEPRECATED_OceanGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_OceanGenerator), 3719309573U) },
		{ Z_Construct_UClass_AWaterBodyOcean, AWaterBodyOcean::StaticClass, TEXT("AWaterBodyOcean"), &Z_Registration_Info_UClass_AWaterBodyOcean, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyOcean), 47231910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanActor_h_1691764752(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
