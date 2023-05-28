// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryInteractiveFoliage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryInteractiveFoliage() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryInteractiveFoliage::StaticRegisterNativesUActorFactoryInteractiveFoliage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryInteractiveFoliage);
	UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister()
	{
		return UActorFactoryInteractiveFoliage::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryInteractiveFoliage.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryInteractiveFoliage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryInteractiveFoliage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::ClassParams = {
		&UActorFactoryInteractiveFoliage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryInteractiveFoliage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryInteractiveFoliage.OuterSingleton, Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryInteractiveFoliage.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryInteractiveFoliage>()
	{
		return UActorFactoryInteractiveFoliage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryInteractiveFoliage);
	UActorFactoryInteractiveFoliage::~UActorFactoryInteractiveFoliage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryInteractiveFoliage, UActorFactoryInteractiveFoliage::StaticClass, TEXT("UActorFactoryInteractiveFoliage"), &Z_Registration_Info_UClass_UActorFactoryInteractiveFoliage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryInteractiveFoliage), 1712766893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_70545141(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
