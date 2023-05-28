// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GroundTruthDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundTruthDataFactory() {}
// Cross Module References
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_UGroundTruthDataFactory();
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_UGroundTruthDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FunctionalTestingEditor();
// End Cross Module References
	void UGroundTruthDataFactory::StaticRegisterNativesUGroundTruthDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroundTruthDataFactory);
	UClass* Z_Construct_UClass_UGroundTruthDataFactory_NoRegister()
	{
		return UGroundTruthDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGroundTruthDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroundTruthDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTestingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthDataFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroundTruthDataFactory.h" },
		{ "ModuleRelativePath", "Private/GroundTruthDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroundTruthDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundTruthDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroundTruthDataFactory_Statics::ClassParams = {
		&UGroundTruthDataFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroundTruthDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroundTruthDataFactory()
	{
		if (!Z_Registration_Info_UClass_UGroundTruthDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroundTruthDataFactory.OuterSingleton, Z_Construct_UClass_UGroundTruthDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroundTruthDataFactory.OuterSingleton;
	}
	template<> FUNCTIONALTESTINGEDITOR_API UClass* StaticClass<UGroundTruthDataFactory>()
	{
		return UGroundTruthDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundTruthDataFactory);
	UGroundTruthDataFactory::~UGroundTruthDataFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroundTruthDataFactory, UGroundTruthDataFactory::StaticClass, TEXT("UGroundTruthDataFactory"), &Z_Registration_Info_UClass_UGroundTruthDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroundTruthDataFactory), 615033447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_2241852153(TEXT("/Script/FunctionalTestingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
