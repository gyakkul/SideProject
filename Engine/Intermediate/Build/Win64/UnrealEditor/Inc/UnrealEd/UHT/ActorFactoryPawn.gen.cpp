// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPawn() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPawn();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPawn::StaticRegisterNativesUActorFactoryPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryPawn);
	UClass* Z_Construct_UClass_UActorFactoryPawn_NoRegister()
	{
		return UActorFactoryPawn::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryEmptyActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPawn.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPawn_Statics::ClassParams = {
		&UActorFactoryPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPawn()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryPawn.OuterSingleton, Z_Construct_UClass_UActorFactoryPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryPawn.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPawn>()
	{
		return UActorFactoryPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPawn);
	UActorFactoryPawn::~UActorFactoryPawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryPawn, UActorFactoryPawn::StaticClass, TEXT("UActorFactoryPawn"), &Z_Registration_Info_UClass_UActorFactoryPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryPawn), 357011247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_3914147194(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
