// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithSceneFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithSceneFactory() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithSceneFactory();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithSceneFactory_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithSceneFactory::StaticRegisterNativesUInterchangeDatasmithSceneFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithSceneFactory);
	UClass* Z_Construct_UClass_UInterchangeDatasmithSceneFactory_NoRegister()
	{
		return UInterchangeDatasmithSceneFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithSceneFactory.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithSceneFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithSceneFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::ClassParams = {
		&UInterchangeDatasmithSceneFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithSceneFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithSceneFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithSceneFactory.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithSceneFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithSceneFactory.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithSceneFactory>()
	{
		return UInterchangeDatasmithSceneFactory::StaticClass();
	}
	UInterchangeDatasmithSceneFactory::UInterchangeDatasmithSceneFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithSceneFactory);
	UInterchangeDatasmithSceneFactory::~UInterchangeDatasmithSceneFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithSceneFactory, UInterchangeDatasmithSceneFactory::StaticClass, TEXT("UInterchangeDatasmithSceneFactory"), &Z_Registration_Info_UClass_UInterchangeDatasmithSceneFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithSceneFactory), 1818485625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneFactory_h_805319433(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
