// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusGeneratedClassDefiner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusGeneratedClassDefiner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusGeneratedClassDefiner::StaticRegisterNativesUOptimusGeneratedClassDefiner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGeneratedClassDefiner);
	UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister()
	{
		return UOptimusGeneratedClassDefiner::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusGeneratedClassDefiner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusGeneratedClassDefiner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::ClassParams = {
		&UOptimusGeneratedClassDefiner::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner()
	{
		if (!Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.OuterSingleton, Z_Construct_UClass_UOptimusGeneratedClassDefiner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusGeneratedClassDefiner>()
	{
		return UOptimusGeneratedClassDefiner::StaticClass();
	}
	UOptimusGeneratedClassDefiner::UOptimusGeneratedClassDefiner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGeneratedClassDefiner);
	UOptimusGeneratedClassDefiner::~UOptimusGeneratedClassDefiner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusGeneratedClassDefiner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusGeneratedClassDefiner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGeneratedClassDefiner, UOptimusGeneratedClassDefiner::StaticClass, TEXT("UOptimusGeneratedClassDefiner"), &Z_Registration_Info_UClass_UOptimusGeneratedClassDefiner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGeneratedClassDefiner), 1377883780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusGeneratedClassDefiner_h_3229898639(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusGeneratedClassDefiner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusGeneratedClassDefiner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
