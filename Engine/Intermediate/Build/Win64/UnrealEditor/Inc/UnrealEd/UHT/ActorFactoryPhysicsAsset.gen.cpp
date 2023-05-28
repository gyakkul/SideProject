// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryPhysicsAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPhysicsAsset() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPhysicsAsset();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPhysicsAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPhysicsAsset::StaticRegisterNativesUActorFactoryPhysicsAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryPhysicsAsset);
	UClass* Z_Construct_UClass_UActorFactoryPhysicsAsset_NoRegister()
	{
		return UActorFactoryPhysicsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPhysicsAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPhysicsAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::ClassParams = {
		&UActorFactoryPhysicsAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPhysicsAsset()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryPhysicsAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryPhysicsAsset.OuterSingleton, Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryPhysicsAsset.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPhysicsAsset>()
	{
		return UActorFactoryPhysicsAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPhysicsAsset);
	UActorFactoryPhysicsAsset::~UActorFactoryPhysicsAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryPhysicsAsset, UActorFactoryPhysicsAsset::StaticClass, TEXT("UActorFactoryPhysicsAsset"), &Z_Registration_Info_UClass_UActorFactoryPhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryPhysicsAsset), 3657039146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_2996004149(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
