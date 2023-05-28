// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportTextureFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReimportTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportTextureFactory::StaticRegisterNativesUReimportTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportTextureFactory);
	UClass* Z_Construct_UClass_UReimportTextureFactory_NoRegister()
	{
		return UReimportTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pOriginalTex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_pOriginalTex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "LightMap DitherMipMaps LODGroup Object" },
		{ "IncludePath", "Factories/ReimportTextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportTextureFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/ReimportTextureFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex = { "pOriginalTex", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReimportTextureFactory, pOriginalTex), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportTextureFactory_Statics::NewProp_pOriginalTex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportTextureFactory_Statics::ClassParams = {
		&UReimportTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportTextureFactory.OuterSingleton, Z_Construct_UClass_UReimportTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportTextureFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportTextureFactory>()
	{
		return UReimportTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportTextureFactory);
	UReimportTextureFactory::~UReimportTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportTextureFactory, UReimportTextureFactory::StaticClass, TEXT("UReimportTextureFactory"), &Z_Registration_Info_UClass_UReimportTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportTextureFactory), 1491016288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_2245262217(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
