// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CompositeDataTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeDataTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCompositeDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCompositeDataTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompositeDataTableFactory::StaticRegisterNativesUCompositeDataTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeDataTableFactory);
	UClass* Z_Construct_UClass_UCompositeDataTableFactory_NoRegister()
	{
		return UCompositeDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/CompositeDataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CompositeDataTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeDataTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeDataTableFactory_Statics::ClassParams = {
		&UCompositeDataTableFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeDataTableFactory()
	{
		if (!Z_Registration_Info_UClass_UCompositeDataTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeDataTableFactory.OuterSingleton, Z_Construct_UClass_UCompositeDataTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeDataTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCompositeDataTableFactory>()
	{
		return UCompositeDataTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeDataTableFactory);
	UCompositeDataTableFactory::~UCompositeDataTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeDataTableFactory, UCompositeDataTableFactory::StaticClass, TEXT("UCompositeDataTableFactory"), &Z_Registration_Info_UClass_UCompositeDataTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeDataTableFactory), 2134822183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_659789577(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
