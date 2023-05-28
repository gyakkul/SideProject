// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/SceneImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USceneImportFactory::StaticRegisterNativesUSceneImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneImportFactory);
	UClass* Z_Construct_UClass_USceneImportFactory_NoRegister()
	{
		return USceneImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_USceneImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Base class for all factories that import objects into a scene (e.g in a level)\n */" },
		{ "IncludePath", "Factories/SceneImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SceneImportFactory.h" },
		{ "ToolTip", "* Base class for all factories that import objects into a scene (e.g in a level)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneImportFactory_Statics::ClassParams = {
		&USceneImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneImportFactory()
	{
		if (!Z_Registration_Info_UClass_USceneImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneImportFactory.OuterSingleton, Z_Construct_UClass_USceneImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneImportFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USceneImportFactory>()
	{
		return USceneImportFactory::StaticClass();
	}
	USceneImportFactory::USceneImportFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneImportFactory);
	USceneImportFactory::~USceneImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneImportFactory, USceneImportFactory::StaticClass, TEXT("USceneImportFactory"), &Z_Registration_Info_UClass_USceneImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneImportFactory), 140043051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_697164361(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
