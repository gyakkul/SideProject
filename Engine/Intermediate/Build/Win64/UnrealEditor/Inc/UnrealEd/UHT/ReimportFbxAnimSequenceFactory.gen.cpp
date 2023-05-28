// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportFbxAnimSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFbxAnimSequenceFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxAnimSequenceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxAnimSequenceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportFbxAnimSequenceFactory::StaticRegisterNativesUReimportFbxAnimSequenceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportFbxAnimSequenceFactory);
	UClass* Z_Construct_UClass_UReimportFbxAnimSequenceFactory_NoRegister()
	{
		return UReimportFbxAnimSequenceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFbxAnimSequenceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxAnimSequenceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFbxAnimSequenceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::ClassParams = {
		&UReimportFbxAnimSequenceFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFbxAnimSequenceFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportFbxAnimSequenceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportFbxAnimSequenceFactory.OuterSingleton, Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportFbxAnimSequenceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportFbxAnimSequenceFactory>()
	{
		return UReimportFbxAnimSequenceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFbxAnimSequenceFactory);
	UReimportFbxAnimSequenceFactory::~UReimportFbxAnimSequenceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportFbxAnimSequenceFactory, UReimportFbxAnimSequenceFactory::StaticClass, TEXT("UReimportFbxAnimSequenceFactory"), &Z_Registration_Info_UClass_UReimportFbxAnimSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportFbxAnimSequenceFactory), 618500023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_2010535188(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
