// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVectorParticleParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorParticleParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParticleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionVectorParticleParameter::StaticRegisterNativesUDistributionVectorParticleParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorParticleParameter);
	UClass* Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister()
	{
		return UDistributionVectorParticleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorParticleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVectorParameterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorParticleParameter.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParticleParameter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorParticleParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::ClassParams = {
		&UDistributionVectorParticleParameter::StaticClass,
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
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorParticleParameter()
	{
		if (!Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton, Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorParticleParameter>()
	{
		return UDistributionVectorParticleParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorParticleParameter);
	UDistributionVectorParticleParameter::~UDistributionVectorParticleParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorParticleParameter, UDistributionVectorParticleParameter::StaticClass, TEXT("UDistributionVectorParticleParameter"), &Z_Registration_Info_UClass_UDistributionVectorParticleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorParticleParameter), 3679863394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_2159286820(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
