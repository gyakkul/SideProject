// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/LevelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_ULevelFactory();
	UNREALED_API UClass* Z_Construct_UClass_ULevelFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULevelFactory::StaticRegisterNativesULevelFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelFactory);
	UClass* Z_Construct_UClass_ULevelFactory_NoRegister()
	{
		return ULevelFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/LevelFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/LevelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelFactory_Statics::ClassParams = {
		&ULevelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelFactory()
	{
		if (!Z_Registration_Info_UClass_ULevelFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelFactory.OuterSingleton, Z_Construct_UClass_ULevelFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelFactory>()
	{
		return ULevelFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelFactory);
	ULevelFactory::~ULevelFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelFactory, ULevelFactory::StaticClass, TEXT("ULevelFactory"), &Z_Registration_Info_UClass_ULevelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelFactory), 1273538564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_2922855906(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
