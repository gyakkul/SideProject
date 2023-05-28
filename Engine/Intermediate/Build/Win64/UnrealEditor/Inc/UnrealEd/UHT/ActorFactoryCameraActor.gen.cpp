// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryCameraActor() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCameraActor();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCameraActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryCameraActor::StaticRegisterNativesUActorFactoryCameraActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryCameraActor);
	UClass* Z_Construct_UClass_UActorFactoryCameraActor_NoRegister()
	{
		return UActorFactoryCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryCameraActor.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryCameraActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryCameraActor_Statics::ClassParams = {
		&UActorFactoryCameraActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryCameraActor()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryCameraActor.OuterSingleton, Z_Construct_UClass_UActorFactoryCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryCameraActor.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryCameraActor>()
	{
		return UActorFactoryCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryCameraActor);
	UActorFactoryCameraActor::~UActorFactoryCameraActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryCameraActor, UActorFactoryCameraActor::StaticClass, TEXT("UActorFactoryCameraActor"), &Z_Registration_Info_UClass_UActorFactoryCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryCameraActor), 3145278571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_3685165775(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
