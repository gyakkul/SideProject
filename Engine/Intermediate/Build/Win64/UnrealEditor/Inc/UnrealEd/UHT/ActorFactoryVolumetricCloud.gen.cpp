// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryVolumetricCloud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVolumetricCloud() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolumetricCloud();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolumetricCloud_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryVolumetricCloud::StaticRegisterNativesUActorFactoryVolumetricCloud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryVolumetricCloud);
	UClass* Z_Construct_UClass_UActorFactoryVolumetricCloud_NoRegister()
	{
		return UActorFactoryVolumetricCloud::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryVolumetricCloud.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryVolumetricCloud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVolumetricCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::ClassParams = {
		&UActorFactoryVolumetricCloud::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVolumetricCloud()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryVolumetricCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVolumetricCloud.OuterSingleton, Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryVolumetricCloud.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryVolumetricCloud>()
	{
		return UActorFactoryVolumetricCloud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVolumetricCloud);
	UActorFactoryVolumetricCloud::~UActorFactoryVolumetricCloud() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVolumetricCloud, UActorFactoryVolumetricCloud::StaticClass, TEXT("UActorFactoryVolumetricCloud"), &Z_Registration_Info_UClass_UActorFactoryVolumetricCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVolumetricCloud), 2892400187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_3691088925(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
