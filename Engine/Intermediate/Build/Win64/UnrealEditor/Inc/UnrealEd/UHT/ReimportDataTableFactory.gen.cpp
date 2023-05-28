// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportDataTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportDataTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportDataTableFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportDataTableFactory::StaticRegisterNativesUReimportDataTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportDataTableFactory);
	UClass* Z_Construct_UClass_UReimportDataTableFactory_NoRegister()
	{
		return UReimportDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSVImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportDataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportDataTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportDataTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportDataTableFactory_Statics::ClassParams = {
		&UReimportDataTableFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportDataTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportDataTableFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportDataTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportDataTableFactory.OuterSingleton, Z_Construct_UClass_UReimportDataTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportDataTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportDataTableFactory>()
	{
		return UReimportDataTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportDataTableFactory);
	UReimportDataTableFactory::~UReimportDataTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportDataTableFactory, UReimportDataTableFactory::StaticClass, TEXT("UReimportDataTableFactory"), &Z_Registration_Info_UClass_UReimportDataTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportDataTableFactory), 3659497705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_2988668407(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
