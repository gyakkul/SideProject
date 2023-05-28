// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PackageFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPackageFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPackageFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPackageFactory::StaticRegisterNativesUPackageFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackageFactory);
	UClass* Z_Construct_UClass_UPackageFactory_NoRegister()
	{
		return UPackageFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPackageFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/PackageFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PackageFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackageFactory_Statics::ClassParams = {
		&UPackageFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageFactory()
	{
		if (!Z_Registration_Info_UClass_UPackageFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackageFactory.OuterSingleton, Z_Construct_UClass_UPackageFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPackageFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPackageFactory>()
	{
		return UPackageFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageFactory);
	UPackageFactory::~UPackageFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPackageFactory, UPackageFactory::StaticClass, TEXT("UPackageFactory"), &Z_Registration_Info_UClass_UPackageFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackageFactory), 4178888528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_2356153964(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
