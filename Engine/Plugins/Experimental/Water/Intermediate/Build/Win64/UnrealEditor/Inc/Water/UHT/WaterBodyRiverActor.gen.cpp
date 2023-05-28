// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyRiverActor.h"
#include "WaterBodyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyRiverActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyRiver();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyRiver_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_RiverGenerator();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_RiverGenerator_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator();
// End Cross Module References
	void UDEPRECATED_RiverGenerator::StaticRegisterNativesUDEPRECATED_RiverGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RiverGenerator);
	UClass* Z_Construct_UClass_UDEPRECATED_RiverGenerator_NoRegister()
	{
		return UDEPRECATED_RiverGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "IncludePath", "WaterBodyRiverActor.h" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents_Inner = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0014808000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_RiverGenerator, SplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::NewProp_SplineMeshComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RiverGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::ClassParams = {
		&UDEPRECATED_RiverGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::PropPointers),
		0,
		0x028802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RiverGenerator()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RiverGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RiverGenerator.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RiverGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RiverGenerator.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UDEPRECATED_RiverGenerator>()
	{
		return UDEPRECATED_RiverGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RiverGenerator);
	UDEPRECATED_RiverGenerator::~UDEPRECATED_RiverGenerator() {}
	void AWaterBodyRiver::StaticRegisterNativesAWaterBodyRiver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyRiver);
	UClass* Z_Construct_UClass_AWaterBodyRiver_NoRegister()
	{
		return AWaterBodyRiver::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyRiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RiverGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeTransitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeTransitionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeTransitionMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OceanTransitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanTransitionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OceanTransitionMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyRiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "WaterBodyRiverActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_RiverGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_RiverGenerator = { "RiverGenerator", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyRiver, RiverGenerator_DEPRECATED), Z_Construct_UClass_UDEPRECATED_RiverGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_RiverGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_RiverGenerator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMaterial_MetaData[] = {
		{ "Comment", "/** Material used when a river is overlapping a lake. */" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
		{ "ToolTip", "Material used when a river is overlapping a lake." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMaterial = { "LakeTransitionMaterial", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyRiver, LakeTransitionMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMID = { "LakeTransitionMID", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyRiver, LakeTransitionMID_DEPRECATED), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMaterial_MetaData[] = {
		{ "Comment", "/** This is the material used when a river is overlapping the ocean. */" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
		{ "ToolTip", "This is the material used when a river is overlapping the ocean." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMaterial = { "OceanTransitionMaterial", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyRiver, OceanTransitionMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyRiverActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMID = { "OceanTransitionMID", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyRiver, OceanTransitionMID_DEPRECATED), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyRiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_RiverGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_LakeTransitionMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyRiver_Statics::NewProp_OceanTransitionMID,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyRiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyRiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyRiver_Statics::ClassParams = {
		&AWaterBodyRiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AWaterBodyRiver_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyRiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyRiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyRiver()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyRiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyRiver.OuterSingleton, Z_Construct_UClass_AWaterBodyRiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyRiver.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyRiver>()
	{
		return AWaterBodyRiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyRiver);
	AWaterBodyRiver::~AWaterBodyRiver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_RiverGenerator, UDEPRECATED_RiverGenerator::StaticClass, TEXT("UDEPRECATED_RiverGenerator"), &Z_Registration_Info_UClass_UDEPRECATED_RiverGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RiverGenerator), 3106651289U) },
		{ Z_Construct_UClass_AWaterBodyRiver, AWaterBodyRiver::StaticClass, TEXT("AWaterBodyRiver"), &Z_Registration_Info_UClass_AWaterBodyRiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyRiver), 2222088005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverActor_h_352689784(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
