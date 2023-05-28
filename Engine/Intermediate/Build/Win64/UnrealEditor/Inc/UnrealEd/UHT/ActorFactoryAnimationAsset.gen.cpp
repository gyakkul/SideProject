// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryAnimationAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAnimationAsset() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAnimationAsset();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkeletalMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryAnimationAsset::StaticRegisterNativesUActorFactoryAnimationAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryAnimationAsset);
	UClass* Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister()
	{
		return UActorFactoryAnimationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAnimationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactorySkeletalMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryAnimationAsset.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryAnimationAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAnimationAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::ClassParams = {
		&UActorFactoryAnimationAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAnimationAsset()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryAnimationAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAnimationAsset.OuterSingleton, Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryAnimationAsset.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryAnimationAsset>()
	{
		return UActorFactoryAnimationAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAnimationAsset);
	UActorFactoryAnimationAsset::~UActorFactoryAnimationAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAnimationAsset, UActorFactoryAnimationAsset::StaticClass, TEXT("UActorFactoryAnimationAsset"), &Z_Registration_Info_UClass_UActorFactoryAnimationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAnimationAsset), 2851480186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_1253819404(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
