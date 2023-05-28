// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryDeferredDecal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryDeferredDecal() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDeferredDecal();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryDeferredDecal::StaticRegisterNativesUActorFactoryDeferredDecal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryDeferredDecal);
	UClass* Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister()
	{
		return UActorFactoryDeferredDecal::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryDeferredDecal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryDeferredDecal.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryDeferredDecal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryDeferredDecal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::ClassParams = {
		&UActorFactoryDeferredDecal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryDeferredDecal()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryDeferredDecal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryDeferredDecal.OuterSingleton, Z_Construct_UClass_UActorFactoryDeferredDecal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryDeferredDecal.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryDeferredDecal>()
	{
		return UActorFactoryDeferredDecal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryDeferredDecal);
	UActorFactoryDeferredDecal::~UActorFactoryDeferredDecal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryDeferredDecal, UActorFactoryDeferredDecal::StaticClass, TEXT("UActorFactoryDeferredDecal"), &Z_Registration_Info_UClass_UActorFactoryDeferredDecal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryDeferredDecal), 1108292104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_811380538(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
