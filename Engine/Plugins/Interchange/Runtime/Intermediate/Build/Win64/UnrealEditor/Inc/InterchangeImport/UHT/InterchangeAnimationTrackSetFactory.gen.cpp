// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/InterchangeAnimationTrackSetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationTrackSetFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeAnimationTrackSetFactory::StaticRegisterNativesUInterchangeAnimationTrackSetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackSetFactory);
	UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_NoRegister()
	{
		return UInterchangeAnimationTrackSetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/InterchangeAnimationTrackSetFactory.h" },
		{ "ModuleRelativePath", "Public/Animation/InterchangeAnimationTrackSetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackSetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::ClassParams = {
		&UInterchangeAnimationTrackSetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactory.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackSetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAnimationTrackSetFactory>()
	{
		return UInterchangeAnimationTrackSetFactory::StaticClass();
	}
	UInterchangeAnimationTrackSetFactory::UInterchangeAnimationTrackSetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackSetFactory);
	UInterchangeAnimationTrackSetFactory::~UInterchangeAnimationTrackSetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationTrackSetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationTrackSetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationTrackSetFactory, UInterchangeAnimationTrackSetFactory::StaticClass, TEXT("UInterchangeAnimationTrackSetFactory"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackSetFactory), 2401091296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationTrackSetFactory_h_3173087009(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationTrackSetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationTrackSetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
