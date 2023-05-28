// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySkyAtmosphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySkyAtmosphere() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyAtmosphere();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyAtmosphere_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySkyAtmosphere::StaticRegisterNativesUActorFactorySkyAtmosphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySkyAtmosphere);
	UClass* Z_Construct_UClass_UActorFactorySkyAtmosphere_NoRegister()
	{
		return UActorFactorySkyAtmosphere::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySkyAtmosphere.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySkyAtmosphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySkyAtmosphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::ClassParams = {
		&UActorFactorySkyAtmosphere::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySkyAtmosphere()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySkyAtmosphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySkyAtmosphere.OuterSingleton, Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySkyAtmosphere.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySkyAtmosphere>()
	{
		return UActorFactorySkyAtmosphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySkyAtmosphere);
	UActorFactorySkyAtmosphere::~UActorFactorySkyAtmosphere() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySkyAtmosphere, UActorFactorySkyAtmosphere::StaticClass, TEXT("UActorFactorySkyAtmosphere"), &Z_Registration_Info_UClass_UActorFactorySkyAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySkyAtmosphere), 3178767142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_3120473331(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
