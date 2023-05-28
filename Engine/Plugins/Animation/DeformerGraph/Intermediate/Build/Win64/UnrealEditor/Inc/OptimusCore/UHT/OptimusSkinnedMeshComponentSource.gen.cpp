// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComponentSources/OptimusSkinnedMeshComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSkinnedMeshComponentSource() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSkinnedMeshComponentSource::StaticRegisterNativesUOptimusSkinnedMeshComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshComponentSource);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_NoRegister()
	{
		return UOptimusSkinnedMeshComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentSources/OptimusSkinnedMeshComponentSource.h" },
		{ "ModuleRelativePath", "Private/ComponentSources/OptimusSkinnedMeshComponentSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::ClassParams = {
		&UOptimusSkinnedMeshComponentSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshComponentSource>()
	{
		return UOptimusSkinnedMeshComponentSource::StaticClass();
	}
	UOptimusSkinnedMeshComponentSource::UOptimusSkinnedMeshComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshComponentSource);
	UOptimusSkinnedMeshComponentSource::~UOptimusSkinnedMeshComponentSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshComponentSource, UOptimusSkinnedMeshComponentSource::StaticClass, TEXT("UOptimusSkinnedMeshComponentSource"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshComponentSource), 918694811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_2181046913(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
