// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryCylinderVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryCylinderVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCylinderVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryCylinderVolume::StaticRegisterNativesUActorFactoryCylinderVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryCylinderVolume);
	UClass* Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister()
	{
		return UActorFactoryCylinderVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryCylinderVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryCylinderVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryCylinderVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryCylinderVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::ClassParams = {
		&UActorFactoryCylinderVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryCylinderVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryCylinderVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryCylinderVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryCylinderVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryCylinderVolume>()
	{
		return UActorFactoryCylinderVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryCylinderVolume);
	UActorFactoryCylinderVolume::~UActorFactoryCylinderVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryCylinderVolume, UActorFactoryCylinderVolume::StaticClass, TEXT("UActorFactoryCylinderVolume"), &Z_Registration_Info_UClass_UActorFactoryCylinderVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryCylinderVolume), 1848390961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_804100456(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
