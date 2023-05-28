// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusParameterBindingProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusParameterBindingProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusParameterBindingProvider::StaticRegisterNativesUOptimusParameterBindingProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusParameterBindingProvider);
	UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister()
	{
		return UOptimusParameterBindingProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusParameterBindingProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusParameterBindingProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusParameterBindingProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::ClassParams = {
		&UOptimusParameterBindingProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusParameterBindingProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton, Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusParameterBindingProvider>()
	{
		return UOptimusParameterBindingProvider::StaticClass();
	}
	UOptimusParameterBindingProvider::UOptimusParameterBindingProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusParameterBindingProvider);
	UOptimusParameterBindingProvider::~UOptimusParameterBindingProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusParameterBindingProvider, UOptimusParameterBindingProvider::StaticClass, TEXT("UOptimusParameterBindingProvider"), &Z_Registration_Info_UClass_UOptimusParameterBindingProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusParameterBindingProvider), 2207801996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_1482229253(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
