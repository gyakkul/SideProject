// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusDataInterfaceProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusDataInterfaceProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusDataInterfaceProvider::StaticRegisterNativesUOptimusDataInterfaceProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDataInterfaceProvider);
	UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister()
	{
		return UOptimusDataInterfaceProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusDataInterfaceProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusDataInterfaceProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::ClassParams = {
		&UOptimusDataInterfaceProvider::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton, Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDataInterfaceProvider>()
	{
		return UOptimusDataInterfaceProvider::StaticClass();
	}
	UOptimusDataInterfaceProvider::UOptimusDataInterfaceProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDataInterfaceProvider);
	UOptimusDataInterfaceProvider::~UOptimusDataInterfaceProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDataInterfaceProvider, UOptimusDataInterfaceProvider::StaticClass, TEXT("UOptimusDataInterfaceProvider"), &Z_Registration_Info_UClass_UOptimusDataInterfaceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDataInterfaceProvider), 3536699185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_2862126676(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
