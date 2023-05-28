// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/SubsurfaceProfileFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsurfaceProfileFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_USubsurfaceProfileFactory();
	UNREALED_API UClass* Z_Construct_UClass_USubsurfaceProfileFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USubsurfaceProfileFactory::StaticRegisterNativesUSubsurfaceProfileFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubsurfaceProfileFactory);
	UClass* Z_Construct_UClass_USubsurfaceProfileFactory_NoRegister()
	{
		return USubsurfaceProfileFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubsurfaceProfileFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsurfaceProfileFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsurfaceProfileFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SubsurfaceProfileFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SubsurfaceProfileFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsurfaceProfileFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsurfaceProfileFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubsurfaceProfileFactory_Statics::ClassParams = {
		&USubsurfaceProfileFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubsurfaceProfileFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubsurfaceProfileFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsurfaceProfileFactory()
	{
		if (!Z_Registration_Info_UClass_USubsurfaceProfileFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubsurfaceProfileFactory.OuterSingleton, Z_Construct_UClass_USubsurfaceProfileFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubsurfaceProfileFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USubsurfaceProfileFactory>()
	{
		return USubsurfaceProfileFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsurfaceProfileFactory);
	USubsurfaceProfileFactory::~USubsurfaceProfileFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubsurfaceProfileFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubsurfaceProfileFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubsurfaceProfileFactory, USubsurfaceProfileFactory::StaticClass, TEXT("USubsurfaceProfileFactory"), &Z_Registration_Info_UClass_USubsurfaceProfileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubsurfaceProfileFactory), 625594963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubsurfaceProfileFactory_h_3034745646(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubsurfaceProfileFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubsurfaceProfileFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
