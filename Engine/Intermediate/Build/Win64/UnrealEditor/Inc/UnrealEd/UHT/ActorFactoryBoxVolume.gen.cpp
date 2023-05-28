// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryBoxVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryBoxVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryBoxVolume::StaticRegisterNativesUActorFactoryBoxVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryBoxVolume);
	UClass* Z_Construct_UClass_UActorFactoryBoxVolume_NoRegister()
	{
		return UActorFactoryBoxVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryBoxVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryBoxVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryBoxVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryBoxVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryBoxVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryBoxVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryBoxVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryBoxVolume_Statics::ClassParams = {
		&UActorFactoryBoxVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryBoxVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryBoxVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryBoxVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryBoxVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryBoxVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryBoxVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryBoxVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryBoxVolume>()
	{
		return UActorFactoryBoxVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryBoxVolume);
	UActorFactoryBoxVolume::~UActorFactoryBoxVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryBoxVolume, UActorFactoryBoxVolume::StaticClass, TEXT("UActorFactoryBoxVolume"), &Z_Registration_Info_UClass_UActorFactoryBoxVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryBoxVolume), 633381285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_273264598(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
