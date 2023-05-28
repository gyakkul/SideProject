// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/StructureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UStructureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UStructureFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UStructureFactory::StaticRegisterNativesUStructureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructureFactory);
	UClass* Z_Construct_UClass_UStructureFactory_NoRegister()
	{
		return UStructureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStructureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/StructureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/StructureFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructureFactory_Statics::ClassParams = {
		&UStructureFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStructureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructureFactory()
	{
		if (!Z_Registration_Info_UClass_UStructureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructureFactory.OuterSingleton, Z_Construct_UClass_UStructureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructureFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UStructureFactory>()
	{
		return UStructureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructureFactory);
	UStructureFactory::~UStructureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructureFactory, UStructureFactory::StaticClass, TEXT("UStructureFactory"), &Z_Registration_Info_UClass_UStructureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructureFactory), 2497239384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_576808281(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
