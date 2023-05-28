// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySphereVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySphereVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySphereVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySphereVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySphereVolume::StaticRegisterNativesUActorFactorySphereVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySphereVolume);
	UClass* Z_Construct_UClass_UActorFactorySphereVolume_NoRegister()
	{
		return UActorFactorySphereVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySphereVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySphereVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySphereVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySphereVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySphereVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySphereVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySphereVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySphereVolume_Statics::ClassParams = {
		&UActorFactorySphereVolume::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySphereVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySphereVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySphereVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySphereVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySphereVolume.OuterSingleton, Z_Construct_UClass_UActorFactorySphereVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySphereVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySphereVolume>()
	{
		return UActorFactorySphereVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySphereVolume);
	UActorFactorySphereVolume::~UActorFactorySphereVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySphereVolume, UActorFactorySphereVolume::StaticClass, TEXT("UActorFactorySphereVolume"), &Z_Registration_Info_UClass_UActorFactorySphereVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySphereVolume), 2502511712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_2266591641(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
