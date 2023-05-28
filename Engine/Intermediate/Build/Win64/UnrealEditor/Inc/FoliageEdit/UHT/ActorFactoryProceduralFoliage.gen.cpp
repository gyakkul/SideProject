// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ActorFactoryProceduralFoliage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryProceduralFoliage() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UActorFactoryProceduralFoliage::StaticRegisterNativesUActorFactoryProceduralFoliage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryProceduralFoliage);
	UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage_NoRegister()
	{
		return UActorFactoryProceduralFoliage::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryBoxVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactoryProceduralFoliage.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryProceduralFoliage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryProceduralFoliage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::ClassParams = {
		&UActorFactoryProceduralFoliage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryProceduralFoliage()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryProceduralFoliage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryProceduralFoliage.OuterSingleton, Z_Construct_UClass_UActorFactoryProceduralFoliage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryProceduralFoliage.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<UActorFactoryProceduralFoliage>()
	{
		return UActorFactoryProceduralFoliage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryProceduralFoliage);
	UActorFactoryProceduralFoliage::~UActorFactoryProceduralFoliage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryProceduralFoliage, UActorFactoryProceduralFoliage::StaticClass, TEXT("UActorFactoryProceduralFoliage"), &Z_Registration_Info_UClass_UActorFactoryProceduralFoliage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryProceduralFoliage), 3665567882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_3748836829(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Private_ActorFactoryProceduralFoliage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
