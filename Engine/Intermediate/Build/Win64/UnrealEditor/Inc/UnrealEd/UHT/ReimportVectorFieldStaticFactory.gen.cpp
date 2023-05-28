// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportVectorFieldStaticFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportVectorFieldStaticFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReimportVectorFieldStaticFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportVectorFieldStaticFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UVectorFieldStaticFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportVectorFieldStaticFactory::StaticRegisterNativesUReimportVectorFieldStaticFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportVectorFieldStaticFactory);
	UClass* Z_Construct_UClass_UReimportVectorFieldStaticFactory_NoRegister()
	{
		return UReimportVectorFieldStaticFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVectorFieldStaticFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/ReimportVectorFieldStaticFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportVectorFieldStaticFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportVectorFieldStaticFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::ClassParams = {
		&UReimportVectorFieldStaticFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportVectorFieldStaticFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportVectorFieldStaticFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportVectorFieldStaticFactory.OuterSingleton, Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportVectorFieldStaticFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportVectorFieldStaticFactory>()
	{
		return UReimportVectorFieldStaticFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportVectorFieldStaticFactory);
	UReimportVectorFieldStaticFactory::~UReimportVectorFieldStaticFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportVectorFieldStaticFactory, UReimportVectorFieldStaticFactory::StaticClass, TEXT("UReimportVectorFieldStaticFactory"), &Z_Registration_Info_UClass_UReimportVectorFieldStaticFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportVectorFieldStaticFactory), 294440988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_765693469(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
