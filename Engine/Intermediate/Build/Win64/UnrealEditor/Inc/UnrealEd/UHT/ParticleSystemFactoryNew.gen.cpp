// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ParticleSystemFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UParticleSystemFactoryNew::StaticRegisterNativesUParticleSystemFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemFactoryNew);
	UClass* Z_Construct_UClass_UParticleSystemFactoryNew_NoRegister()
	{
		return UParticleSystemFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ParticleSystemFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/ParticleSystemFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemFactoryNew_Statics::ClassParams = {
		&UParticleSystemFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UParticleSystemFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemFactoryNew.OuterSingleton, Z_Construct_UClass_UParticleSystemFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSystemFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UParticleSystemFactoryNew>()
	{
		return UParticleSystemFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemFactoryNew);
	UParticleSystemFactoryNew::~UParticleSystemFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleSystemFactoryNew, UParticleSystemFactoryNew::StaticClass, TEXT("UParticleSystemFactoryNew"), &Z_Registration_Info_UClass_UParticleSystemFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemFactoryNew), 4212716457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_1491039355(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
