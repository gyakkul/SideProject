// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ObjectLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectLibraryFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UObjectLibraryFactory();
	UNREALED_API UClass* Z_Construct_UClass_UObjectLibraryFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UObjectLibraryFactory::StaticRegisterNativesUObjectLibraryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectLibraryFactory);
	UClass* Z_Construct_UClass_UObjectLibraryFactory_NoRegister()
	{
		return UObjectLibraryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UObjectLibraryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectLibraryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibraryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ObjectLibraryFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ObjectLibraryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectLibraryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectLibraryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectLibraryFactory_Statics::ClassParams = {
		&UObjectLibraryFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectLibraryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectLibraryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectLibraryFactory()
	{
		if (!Z_Registration_Info_UClass_UObjectLibraryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectLibraryFactory.OuterSingleton, Z_Construct_UClass_UObjectLibraryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectLibraryFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UObjectLibraryFactory>()
	{
		return UObjectLibraryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectLibraryFactory);
	UObjectLibraryFactory::~UObjectLibraryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectLibraryFactory, UObjectLibraryFactory::StaticClass, TEXT("UObjectLibraryFactory"), &Z_Registration_Info_UClass_UObjectLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectLibraryFactory), 1192820668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_1115055362(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
