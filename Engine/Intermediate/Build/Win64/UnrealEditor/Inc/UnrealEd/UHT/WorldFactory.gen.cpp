// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/WorldFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UWorldFactory();
	UNREALED_API UClass* Z_Construct_UClass_UWorldFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldFactory::StaticRegisterNativesUWorldFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldFactory);
	UClass* Z_Construct_UClass_UWorldFactory_NoRegister()
	{
		return UWorldFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWorldFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/WorldFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/WorldFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldFactory_Statics::ClassParams = {
		&UWorldFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldFactory()
	{
		if (!Z_Registration_Info_UClass_UWorldFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldFactory.OuterSingleton, Z_Construct_UClass_UWorldFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldFactory>()
	{
		return UWorldFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldFactory);
	UWorldFactory::~UWorldFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldFactory, UWorldFactory::StaticClass, TEXT("UWorldFactory"), &Z_Registration_Info_UClass_UWorldFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldFactory), 2628762455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_3574155471(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
