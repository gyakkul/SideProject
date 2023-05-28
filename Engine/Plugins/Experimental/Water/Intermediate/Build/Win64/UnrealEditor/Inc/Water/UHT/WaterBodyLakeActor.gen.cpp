// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyLakeActor.h"
#include "WaterBodyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyLakeActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyLake();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyLake_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_LakeGenerator();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator();
	WATER_API UClass* Z_Construct_UClass_ULakeCollisionComponent_NoRegister();
// End Cross Module References
	void UDEPRECATED_LakeGenerator::StaticRegisterNativesUDEPRECATED_LakeGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_LakeGenerator);
	UClass* Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister()
	{
		return UDEPRECATED_LakeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeCollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeCollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "IncludePath", "WaterBodyLakeActor.h" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeMeshComp = { "LakeMeshComp", nullptr, (EPropertyFlags)0x0014800000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_LakeGenerator, LakeMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollisionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollisionComp = { "LakeCollisionComp", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_LakeGenerator, LakeCollisionComp_DEPRECATED), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollisionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollision = { "LakeCollision", nullptr, (EPropertyFlags)0x0014800000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_LakeGenerator, LakeCollision), Z_Construct_UClass_ULakeCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::NewProp_LakeCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_LakeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::ClassParams = {
		&UDEPRECATED_LakeGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::PropPointers),
		0,
		0x028802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_LakeGenerator()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_LakeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_LakeGenerator.OuterSingleton, Z_Construct_UClass_UDEPRECATED_LakeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_LakeGenerator.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UDEPRECATED_LakeGenerator>()
	{
		return UDEPRECATED_LakeGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_LakeGenerator);
	UDEPRECATED_LakeGenerator::~UDEPRECATED_LakeGenerator() {}
	void AWaterBodyLake::StaticRegisterNativesAWaterBodyLake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyLake);
	UClass* Z_Construct_UClass_AWaterBodyLake_NoRegister()
	{
		return AWaterBodyLake::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyLake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyLake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyLake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "WaterBodyLakeActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyLake_Statics::NewProp_LakeGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyLakeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyLake_Statics::NewProp_LakeGenerator = { "LakeGenerator", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyLake, LakeGenerator_DEPRECATED), Z_Construct_UClass_UDEPRECATED_LakeGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyLake_Statics::NewProp_LakeGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyLake_Statics::NewProp_LakeGenerator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyLake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyLake_Statics::NewProp_LakeGenerator,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyLake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyLake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyLake_Statics::ClassParams = {
		&AWaterBodyLake::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AWaterBodyLake_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyLake_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyLake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyLake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyLake()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyLake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyLake.OuterSingleton, Z_Construct_UClass_AWaterBodyLake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyLake.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyLake>()
	{
		return AWaterBodyLake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyLake);
	AWaterBodyLake::~AWaterBodyLake() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_LakeGenerator, UDEPRECATED_LakeGenerator::StaticClass, TEXT("UDEPRECATED_LakeGenerator"), &Z_Registration_Info_UClass_UDEPRECATED_LakeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_LakeGenerator), 1920459506U) },
		{ Z_Construct_UClass_AWaterBodyLake, AWaterBodyLake::StaticClass, TEXT("AWaterBodyLake"), &Z_Registration_Info_UClass_AWaterBodyLake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyLake), 1288677082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_2391355984(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
