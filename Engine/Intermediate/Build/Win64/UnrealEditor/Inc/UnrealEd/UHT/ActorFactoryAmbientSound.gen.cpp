// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAmbientSound() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAmbientSound();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAmbientSound_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryAmbientSound::StaticRegisterNativesUActorFactoryAmbientSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryAmbientSound);
	UClass* Z_Construct_UClass_UActorFactoryAmbientSound_NoRegister()
	{
		return UActorFactoryAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryAmbientSound.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAmbientSound_Statics::ClassParams = {
		&UActorFactoryAmbientSound::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAmbientSound()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAmbientSound.OuterSingleton, Z_Construct_UClass_UActorFactoryAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryAmbientSound.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryAmbientSound>()
	{
		return UActorFactoryAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAmbientSound);
	UActorFactoryAmbientSound::~UActorFactoryAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAmbientSound, UActorFactoryAmbientSound::StaticClass, TEXT("UActorFactoryAmbientSound"), &Z_Registration_Info_UClass_UActorFactoryAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAmbientSound), 2405521776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_2629173049(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
