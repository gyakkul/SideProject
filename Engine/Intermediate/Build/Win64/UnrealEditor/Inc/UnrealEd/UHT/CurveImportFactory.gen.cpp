// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CurveImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveImportFactory::StaticRegisterNativesUCurveImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveImportFactory);
	UClass* Z_Construct_UClass_UCurveImportFactory_NoRegister()
	{
		return UCurveImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CurveImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveImportFactory_Statics::ClassParams = {
		&UCurveImportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveImportFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveImportFactory.OuterSingleton, Z_Construct_UClass_UCurveImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveImportFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveImportFactory>()
	{
		return UCurveImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveImportFactory);
	UCurveImportFactory::~UCurveImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveImportFactory, UCurveImportFactory::StaticClass, TEXT("UCurveImportFactory"), &Z_Registration_Info_UClass_UCurveImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveImportFactory), 3756564154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_914656391(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
