// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LandscapeGrassTypeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassTypeFactory() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void ULandscapeGrassTypeFactory::StaticRegisterNativesULandscapeGrassTypeFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeGrassTypeFactory);
	UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory_NoRegister()
	{
		return ULandscapeGrassTypeFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGrassTypeFactory.h" },
		{ "ModuleRelativePath", "Private/LandscapeGrassTypeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassTypeFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::ClassParams = {
		&ULandscapeGrassTypeFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGrassTypeFactory()
	{
		if (!Z_Registration_Info_UClass_ULandscapeGrassTypeFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeGrassTypeFactory.OuterSingleton, Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeGrassTypeFactory.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<ULandscapeGrassTypeFactory>()
	{
		return ULandscapeGrassTypeFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassTypeFactory);
	ULandscapeGrassTypeFactory::~ULandscapeGrassTypeFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeGrassTypeFactory, ULandscapeGrassTypeFactory::StaticClass, TEXT("ULandscapeGrassTypeFactory"), &Z_Registration_Info_UClass_ULandscapeGrassTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeGrassTypeFactory), 142845462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_2297799727(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
