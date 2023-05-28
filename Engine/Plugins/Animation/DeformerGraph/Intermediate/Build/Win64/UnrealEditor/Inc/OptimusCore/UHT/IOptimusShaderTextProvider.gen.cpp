// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusShaderTextProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusShaderTextProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusShaderTextProvider::StaticRegisterNativesUOptimusShaderTextProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusShaderTextProvider);
	UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister()
	{
		return UOptimusShaderTextProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusShaderTextProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusShaderTextProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusShaderTextProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusShaderTextProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusShaderTextProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusShaderTextProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusShaderTextProvider_Statics::ClassParams = {
		&UOptimusShaderTextProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusShaderTextProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusShaderTextProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusShaderTextProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton, Z_Construct_UClass_UOptimusShaderTextProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusShaderTextProvider>()
	{
		return UOptimusShaderTextProvider::StaticClass();
	}
	UOptimusShaderTextProvider::UOptimusShaderTextProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusShaderTextProvider);
	UOptimusShaderTextProvider::~UOptimusShaderTextProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusShaderTextProvider, UOptimusShaderTextProvider::StaticClass, TEXT("UOptimusShaderTextProvider"), &Z_Registration_Info_UClass_UOptimusShaderTextProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusShaderTextProvider), 2799927964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_414909161(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
