// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryVolume::StaticRegisterNativesUActorFactoryVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryVolume);
	UClass* Z_Construct_UClass_UActorFactoryVolume_NoRegister()
	{
		return UActorFactoryVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVolume_Statics::ClassParams = {
		&UActorFactoryVolume::StaticClass,
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
		0x000830ADu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryVolume>()
	{
		return UActorFactoryVolume::StaticClass();
	}
	UActorFactoryVolume::UActorFactoryVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVolume);
	UActorFactoryVolume::~UActorFactoryVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVolume, UActorFactoryVolume::StaticClass, TEXT("UActorFactoryVolume"), &Z_Registration_Info_UClass_UActorFactoryVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVolume), 1356747810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_3715700172(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
