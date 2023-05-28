// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Private/Factories/ActorFactoryLevelSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryLevelSequence() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryLevelSequence();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryLevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryLevelSequence::StaticRegisterNativesUActorFactoryLevelSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryLevelSequence);
	UClass* Z_Construct_UClass_UActorFactoryLevelSequence_NoRegister()
	{
		return UActorFactoryLevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryLevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryLevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryLevelSequence_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ActorFactoryLevelSequence.h" },
		{ "ModuleRelativePath", "Private/Factories/ActorFactoryLevelSequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryLevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryLevelSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryLevelSequence_Statics::ClassParams = {
		&UActorFactoryLevelSequence::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryLevelSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryLevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryLevelSequence()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryLevelSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryLevelSequence.OuterSingleton, Z_Construct_UClass_UActorFactoryLevelSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryLevelSequence.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryLevelSequence>()
	{
		return UActorFactoryLevelSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryLevelSequence);
	UActorFactoryLevelSequence::~UActorFactoryLevelSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryLevelSequence, UActorFactoryLevelSequence::StaticClass, TEXT("UActorFactoryLevelSequence"), &Z_Registration_Info_UClass_UActorFactoryLevelSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryLevelSequence), 1408885796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_2616123702(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
