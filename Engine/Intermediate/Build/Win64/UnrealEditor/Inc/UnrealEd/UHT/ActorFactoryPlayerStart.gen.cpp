// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryPlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPlayerStart() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlayerStart();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlayerStart_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPlayerStart::StaticRegisterNativesUActorFactoryPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryPlayerStart);
	UClass* Z_Construct_UClass_UActorFactoryPlayerStart_NoRegister()
	{
		return UActorFactoryPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPlayerStart.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPlayerStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPlayerStart_Statics::ClassParams = {
		&UActorFactoryPlayerStart::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPlayerStart()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryPlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryPlayerStart.OuterSingleton, Z_Construct_UClass_UActorFactoryPlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryPlayerStart.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPlayerStart>()
	{
		return UActorFactoryPlayerStart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPlayerStart);
	UActorFactoryPlayerStart::~UActorFactoryPlayerStart() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryPlayerStart, UActorFactoryPlayerStart::StaticClass, TEXT("UActorFactoryPlayerStart"), &Z_Registration_Info_UClass_UActorFactoryPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryPlayerStart), 131291945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_904394105(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
