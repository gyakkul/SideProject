// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/InterchangeAnimSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeAnimSequenceFactory::StaticRegisterNativesUInterchangeAnimSequenceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimSequenceFactory);
	UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister()
	{
		return UInterchangeAnimSequenceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/InterchangeAnimSequenceFactory.h" },
		{ "ModuleRelativePath", "Public/Animation/InterchangeAnimSequenceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimSequenceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::ClassParams = {
		&UInterchangeAnimSequenceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton, Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAnimSequenceFactory>()
	{
		return UInterchangeAnimSequenceFactory::StaticClass();
	}
	UInterchangeAnimSequenceFactory::UInterchangeAnimSequenceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimSequenceFactory);
	UInterchangeAnimSequenceFactory::~UInterchangeAnimSequenceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimSequenceFactory, UInterchangeAnimSequenceFactory::StaticClass, TEXT("UInterchangeAnimSequenceFactory"), &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimSequenceFactory), 1392996471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_592391090(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
