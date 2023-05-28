// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComponentSources/OptimusSkeletalMeshComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSkeletalMeshComponentSource() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSkeletalMeshComponentSource::StaticRegisterNativesUOptimusSkeletalMeshComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletalMeshComponentSource);
	UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister()
	{
		return UOptimusSkeletalMeshComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusSkinnedMeshComponentSource,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentSources/OptimusSkeletalMeshComponentSource.h" },
		{ "ModuleRelativePath", "Private/ComponentSources/OptimusSkeletalMeshComponentSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletalMeshComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::ClassParams = {
		&UOptimusSkeletalMeshComponentSource::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkeletalMeshComponentSource>()
	{
		return UOptimusSkeletalMeshComponentSource::StaticClass();
	}
	UOptimusSkeletalMeshComponentSource::UOptimusSkeletalMeshComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletalMeshComponentSource);
	UOptimusSkeletalMeshComponentSource::~UOptimusSkeletalMeshComponentSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkeletalMeshComponentSource, UOptimusSkeletalMeshComponentSource::StaticClass, TEXT("UOptimusSkeletalMeshComponentSource"), &Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletalMeshComponentSource), 795017637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_3917817384(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
