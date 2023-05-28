// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyCustomActor.h"
#include "WaterBodyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyCustomActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyCustom();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyCustom_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator();
// End Cross Module References
	void UDEPRECATED_CustomMeshGenerator::StaticRegisterNativesUDEPRECATED_CustomMeshGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_CustomMeshGenerator);
	UClass* Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister()
	{
		return UDEPRECATED_CustomMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "IncludePath", "WaterBodyCustomActor.h" },
		{ "ModuleRelativePath", "Public/WaterBodyCustomActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyCustomActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0014800000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_CustomMeshGenerator, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_CustomMeshGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::ClassParams = {
		&UDEPRECATED_CustomMeshGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::PropPointers),
		0,
		0x028802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_CustomMeshGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_CustomMeshGenerator.OuterSingleton, Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_CustomMeshGenerator.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UDEPRECATED_CustomMeshGenerator>()
	{
		return UDEPRECATED_CustomMeshGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_CustomMeshGenerator);
	UDEPRECATED_CustomMeshGenerator::~UDEPRECATED_CustomMeshGenerator() {}
	void AWaterBodyCustom::StaticRegisterNativesAWaterBodyCustom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyCustom);
	UClass* Z_Construct_UClass_AWaterBodyCustom_NoRegister()
	{
		return AWaterBodyCustom::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyCustom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "WaterBodyCustomActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyCustomActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyCustom_Statics::NewProp_CustomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyCustomActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyCustom_Statics::NewProp_CustomGenerator = { "CustomGenerator", nullptr, (EPropertyFlags)0x0024880820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyCustom, CustomGenerator_DEPRECATED), Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyCustom_Statics::NewProp_CustomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyCustom_Statics::NewProp_CustomGenerator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyCustom_Statics::NewProp_CustomGenerator,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyCustom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyCustom_Statics::ClassParams = {
		&AWaterBodyCustom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AWaterBodyCustom_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyCustom_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyCustom()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyCustom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyCustom.OuterSingleton, Z_Construct_UClass_AWaterBodyCustom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyCustom.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyCustom>()
	{
		return AWaterBodyCustom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyCustom);
	AWaterBodyCustom::~AWaterBodyCustom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_CustomMeshGenerator, UDEPRECATED_CustomMeshGenerator::StaticClass, TEXT("UDEPRECATED_CustomMeshGenerator"), &Z_Registration_Info_UClass_UDEPRECATED_CustomMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_CustomMeshGenerator), 1919218172U) },
		{ Z_Construct_UClass_AWaterBodyCustom, AWaterBodyCustom::StaticClass, TEXT("AWaterBodyCustom"), &Z_Registration_Info_UClass_AWaterBodyCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyCustom), 2056050694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_809768569(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyCustomActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
