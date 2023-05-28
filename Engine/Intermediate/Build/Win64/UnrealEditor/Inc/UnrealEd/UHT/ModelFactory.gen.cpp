// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ModelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UModelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UModelFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UModelFactory::StaticRegisterNativesUModelFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelFactory);
	UClass* Z_Construct_UClass_UModelFactory_NoRegister()
	{
		return UModelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UModelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/ModelFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ModelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelFactory_Statics::ClassParams = {
		&UModelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelFactory()
	{
		if (!Z_Registration_Info_UClass_UModelFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelFactory.OuterSingleton, Z_Construct_UClass_UModelFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UModelFactory>()
	{
		return UModelFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelFactory);
	UModelFactory::~UModelFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelFactory, UModelFactory::StaticClass, TEXT("UModelFactory"), &Z_Registration_Info_UClass_UModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelFactory), 8319228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_2662424528(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
