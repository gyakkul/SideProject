// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySkyLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySkyLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyLight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySkyLight::StaticRegisterNativesUActorFactorySkyLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySkyLight);
	UClass* Z_Construct_UClass_UActorFactorySkyLight_NoRegister()
	{
		return UActorFactorySkyLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySkyLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySkyLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySkyLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySkyLight_Statics::ClassParams = {
		&UActorFactorySkyLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySkyLight()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySkyLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySkyLight.OuterSingleton, Z_Construct_UClass_UActorFactorySkyLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySkyLight.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySkyLight>()
	{
		return UActorFactorySkyLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySkyLight);
	UActorFactorySkyLight::~UActorFactorySkyLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySkyLight, UActorFactorySkyLight::StaticClass, TEXT("UActorFactorySkyLight"), &Z_Registration_Info_UClass_UActorFactorySkyLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySkyLight), 731036272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_3095566692(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
