// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySpotLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySpotLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySpotLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySpotLight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySpotLight::StaticRegisterNativesUActorFactorySpotLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySpotLight);
	UClass* Z_Construct_UClass_UActorFactorySpotLight_NoRegister()
	{
		return UActorFactorySpotLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySpotLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySpotLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySpotLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySpotLight_Statics::ClassParams = {
		&UActorFactorySpotLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySpotLight()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySpotLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySpotLight.OuterSingleton, Z_Construct_UClass_UActorFactorySpotLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySpotLight.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySpotLight>()
	{
		return UActorFactorySpotLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySpotLight);
	UActorFactorySpotLight::~UActorFactorySpotLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySpotLight, UActorFactorySpotLight::StaticClass, TEXT("UActorFactorySpotLight"), &Z_Registration_Info_UClass_UActorFactorySpotLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySpotLight), 791912536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_1391749055(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
