// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationPathGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPathGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavigationPathGenerator::StaticRegisterNativesUNavigationPathGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationPathGenerator);
	UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister()
	{
		return UNavigationPathGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationPathGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationPathGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavigationPathGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationPathGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationPathGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams = {
		&UNavigationPathGenerator::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationPathGenerator()
	{
		if (!Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton, Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationPathGenerator>()
	{
		return UNavigationPathGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPathGenerator);
	UNavigationPathGenerator::~UNavigationPathGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationPathGenerator, UNavigationPathGenerator::StaticClass, TEXT("UNavigationPathGenerator"), &Z_Registration_Info_UClass_UNavigationPathGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationPathGenerator), 914904498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_3282334595(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
