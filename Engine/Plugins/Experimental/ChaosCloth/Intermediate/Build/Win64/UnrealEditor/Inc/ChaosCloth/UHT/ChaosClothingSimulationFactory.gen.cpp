// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCloth/ChaosClothingSimulationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationFactory() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	void UChaosClothingSimulationFactory::StaticRegisterNativesUChaosClothingSimulationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothingSimulationFactory);
	UClass* Z_Construct_UClass_UChaosClothingSimulationFactory_NoRegister()
	{
		return UChaosClothingSimulationFactory::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingSimulationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationFactory.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams = {
		&UChaosClothingSimulationFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingSimulationFactory()
	{
		if (!Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton, Z_Construct_UClass_UChaosClothingSimulationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothingSimulationFactory.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationFactory>()
	{
		return UChaosClothingSimulationFactory::StaticClass();
	}
	UChaosClothingSimulationFactory::UChaosClothingSimulationFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationFactory);
	UChaosClothingSimulationFactory::~UChaosClothingSimulationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothingSimulationFactory, UChaosClothingSimulationFactory::StaticClass, TEXT("UChaosClothingSimulationFactory"), &Z_Registration_Info_UClass_UChaosClothingSimulationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothingSimulationFactory), 3631813887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationFactory_h_3900018726(TEXT("/Script/ChaosCloth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
