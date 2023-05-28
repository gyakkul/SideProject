// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Random() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Random();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Random_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryTest_Random::StaticRegisterNativesUEnvQueryTest_Random()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Random);
	UClass* Z_Construct_UClass_UEnvQueryTest_Random_NoRegister()
	{
		return UEnvQueryTest_Random::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Random_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Random_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Random_Statics::Class_MetaDataParams[] = {
		{ "DeprecatedNode", "" },
		{ "DeprecationMessage", "This class is now deprecated, please use RunMode supporting random results instead." },
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Random.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Random.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Random_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Random>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Random_Statics::ClassParams = {
		&UEnvQueryTest_Random::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Random_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Random_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Random()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Random_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Random>()
	{
		return UEnvQueryTest_Random::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Random);
	UEnvQueryTest_Random::~UEnvQueryTest_Random() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Random, UEnvQueryTest_Random::StaticClass, TEXT("UEnvQueryTest_Random"), &Z_Registration_Info_UClass_UEnvQueryTest_Random, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Random), 3632235066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h_3663163228(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
