// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReimportHairStrandsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportHairStrandsFactory() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UHairStrandsFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UReimportHairStrandsFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UReimportHairStrandsFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UReimportHairStrandsFactory::StaticRegisterNativesUReimportHairStrandsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportHairStrandsFactory);
	UClass* Z_Construct_UClass_UReimportHairStrandsFactory_NoRegister()
	{
		return UReimportHairStrandsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportHairStrandsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportHairStrandsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHairStrandsFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportHairStrandsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ReimportHairStrandsFactory.h" },
		{ "ModuleRelativePath", "Public/ReimportHairStrandsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportHairStrandsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportHairStrandsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportHairStrandsFactory_Statics::ClassParams = {
		&UReimportHairStrandsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportHairStrandsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportHairStrandsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportHairStrandsFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportHairStrandsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportHairStrandsFactory.OuterSingleton, Z_Construct_UClass_UReimportHairStrandsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportHairStrandsFactory.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UReimportHairStrandsFactory>()
	{
		return UReimportHairStrandsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportHairStrandsFactory);
	UReimportHairStrandsFactory::~UReimportHairStrandsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportHairStrandsFactory, UReimportHairStrandsFactory::StaticClass, TEXT("UReimportHairStrandsFactory"), &Z_Registration_Info_UClass_UReimportHairStrandsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportHairStrandsFactory), 2414412719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_1034053163(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_ReimportHairStrandsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
