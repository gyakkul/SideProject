// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FontFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFontFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFontFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFontFactory::StaticRegisterNativesUFontFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontFactory);
	UClass* Z_Construct_UClass_UFontFactory_NoRegister()
	{
		return UFontFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFontFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FontFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FontFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontFactory_Statics::ClassParams = {
		&UFontFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontFactory()
	{
		if (!Z_Registration_Info_UClass_UFontFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontFactory.OuterSingleton, Z_Construct_UClass_UFontFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFontFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFontFactory>()
	{
		return UFontFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFactory);
	UFontFactory::~UFontFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFontFactory, UFontFactory::StaticClass, TEXT("UFontFactory"), &Z_Registration_Info_UClass_UFontFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontFactory), 465280675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_3440323938(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
