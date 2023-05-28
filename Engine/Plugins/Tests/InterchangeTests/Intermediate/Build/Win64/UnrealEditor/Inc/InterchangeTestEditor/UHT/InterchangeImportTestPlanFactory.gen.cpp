// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InterchangeImportTestPlanFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestPlanFactory() {}
// Cross Module References
	INTERCHANGETESTEDITOR_API UClass* Z_Construct_UClass_UInterchangeImportTestPlanFactory();
	INTERCHANGETESTEDITOR_API UClass* Z_Construct_UClass_UInterchangeImportTestPlanFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InterchangeTestEditor();
// End Cross Module References
	void UInterchangeImportTestPlanFactory::StaticRegisterNativesUInterchangeImportTestPlanFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestPlanFactory);
	UClass* Z_Construct_UClass_UInterchangeImportTestPlanFactory_NoRegister()
	{
		return UInterchangeImportTestPlanFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTestEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterchangeImportTestPlanFactory.h" },
		{ "ModuleRelativePath", "Private/InterchangeImportTestPlanFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestPlanFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::ClassParams = {
		&UInterchangeImportTestPlanFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestPlanFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestPlanFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestPlanFactory.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestPlanFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestPlanFactory.OuterSingleton;
	}
	template<> INTERCHANGETESTEDITOR_API UClass* StaticClass<UInterchangeImportTestPlanFactory>()
	{
		return UInterchangeImportTestPlanFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestPlanFactory);
	UInterchangeImportTestPlanFactory::~UInterchangeImportTestPlanFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTestEditor_Private_InterchangeImportTestPlanFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTestEditor_Private_InterchangeImportTestPlanFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestPlanFactory, UInterchangeImportTestPlanFactory::StaticClass, TEXT("UInterchangeImportTestPlanFactory"), &Z_Registration_Info_UClass_UInterchangeImportTestPlanFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestPlanFactory), 4048290296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTestEditor_Private_InterchangeImportTestPlanFactory_h_776916575(TEXT("/Script/InterchangeTestEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTestEditor_Private_InterchangeImportTestPlanFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTestEditor_Private_InterchangeImportTestPlanFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
