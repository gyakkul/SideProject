// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportCurveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportCurveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportCurveFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportCurveFactory::StaticRegisterNativesUReimportCurveFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportCurveFactory);
	UClass* Z_Construct_UClass_UReimportCurveFactory_NoRegister()
	{
		return UReimportCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSVImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportCurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportCurveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportCurveFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportCurveFactory_Statics::ClassParams = {
		&UReimportCurveFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportCurveFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportCurveFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportCurveFactory.OuterSingleton, Z_Construct_UClass_UReimportCurveFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportCurveFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportCurveFactory>()
	{
		return UReimportCurveFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportCurveFactory);
	UReimportCurveFactory::~UReimportCurveFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportCurveFactory, UReimportCurveFactory::StaticClass, TEXT("UReimportCurveFactory"), &Z_Registration_Info_UClass_UReimportCurveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportCurveFactory), 3589566696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_3468336599(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
