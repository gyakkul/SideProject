// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryVectorFieldVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVectorFieldVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryVectorFieldVolume::StaticRegisterNativesUActorFactoryVectorFieldVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryVectorFieldVolume);
	UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister()
	{
		return UActorFactoryVectorFieldVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryVectorFieldVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryVectorFieldVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVectorFieldVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::ClassParams = {
		&UActorFactoryVectorFieldVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryVectorFieldVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVectorFieldVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryVectorFieldVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryVectorFieldVolume>()
	{
		return UActorFactoryVectorFieldVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVectorFieldVolume);
	UActorFactoryVectorFieldVolume::~UActorFactoryVectorFieldVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVectorFieldVolume, UActorFactoryVectorFieldVolume::StaticClass, TEXT("UActorFactoryVectorFieldVolume"), &Z_Registration_Info_UClass_UActorFactoryVectorFieldVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVectorFieldVolume), 3409532342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_1820110860(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
