// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Avoidance/MassNavigationObstacleTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationObstacleTrait() {}
// Cross Module References
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleTrait();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassNavigationObstacleTrait::StaticRegisterNativesUMassNavigationObstacleTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationObstacleTrait);
	UClass* Z_Construct_UClass_UMassNavigationObstacleTrait_NoRegister()
	{
		return UMassNavigationObstacleTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationObstacleTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Navigation Obstacle" },
		{ "IncludePath", "Avoidance/MassNavigationObstacleTrait.h" },
		{ "ModuleRelativePath", "Public/Avoidance/MassNavigationObstacleTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationObstacleTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::ClassParams = {
		&UMassNavigationObstacleTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationObstacleTrait()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationObstacleTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationObstacleTrait.OuterSingleton, Z_Construct_UClass_UMassNavigationObstacleTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationObstacleTrait.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassNavigationObstacleTrait>()
	{
		return UMassNavigationObstacleTrait::StaticClass();
	}
	UMassNavigationObstacleTrait::UMassNavigationObstacleTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationObstacleTrait);
	UMassNavigationObstacleTrait::~UMassNavigationObstacleTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassNavigationObstacleTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassNavigationObstacleTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassNavigationObstacleTrait, UMassNavigationObstacleTrait::StaticClass, TEXT("UMassNavigationObstacleTrait"), &Z_Registration_Info_UClass_UMassNavigationObstacleTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationObstacleTrait), 1482157584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassNavigationObstacleTrait_h_3656092594(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassNavigationObstacleTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassNavigationObstacleTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
