// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ProceduralFoliageSpawnerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawnerFactory() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UProceduralFoliageSpawnerFactory::StaticRegisterNativesUProceduralFoliageSpawnerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageSpawnerFactory);
	UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory_NoRegister()
	{
		return UProceduralFoliageSpawnerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralFoliageSpawnerFactory.h" },
		{ "ModuleRelativePath", "Private/ProceduralFoliageSpawnerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageSpawnerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::ClassParams = {
		&UProceduralFoliageSpawnerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageSpawnerFactory()
	{
		if (!Z_Registration_Info_UClass_UProceduralFoliageSpawnerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageSpawnerFactory.OuterSingleton, Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralFoliageSpawnerFactory.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<UProceduralFoliageSpawnerFactory>()
	{
		return UProceduralFoliageSpawnerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawnerFactory);
	UProceduralFoliageSpawnerFactory::~UProceduralFoliageSpawnerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageSpawnerFactory, UProceduralFoliageSpawnerFactory::StaticClass, TEXT("UProceduralFoliageSpawnerFactory"), &Z_Registration_Info_UClass_UProceduralFoliageSpawnerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageSpawnerFactory), 3070936596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_1821895276(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
