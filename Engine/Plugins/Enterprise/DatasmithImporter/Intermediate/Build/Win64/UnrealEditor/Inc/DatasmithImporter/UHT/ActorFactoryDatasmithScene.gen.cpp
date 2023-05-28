// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryDatasmithScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryDatasmithScene() {}
// Cross Module References
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UActorFactoryDatasmithScene();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UActorFactoryDatasmithScene_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	void UActorFactoryDatasmithScene::StaticRegisterNativesUActorFactoryDatasmithScene()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryDatasmithScene);
	UClass* Z_Construct_UClass_UActorFactoryDatasmithScene_NoRegister()
	{
		return UActorFactoryDatasmithScene::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryDatasmithScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryDatasmithScene.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryDatasmithScene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryDatasmithScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::ClassParams = {
		&UActorFactoryDatasmithScene::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryDatasmithScene()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryDatasmithScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryDatasmithScene.OuterSingleton, Z_Construct_UClass_UActorFactoryDatasmithScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryDatasmithScene.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UActorFactoryDatasmithScene>()
	{
		return UActorFactoryDatasmithScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryDatasmithScene);
	UActorFactoryDatasmithScene::~UActorFactoryDatasmithScene() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryDatasmithScene, UActorFactoryDatasmithScene::StaticClass, TEXT("UActorFactoryDatasmithScene"), &Z_Registration_Info_UClass_UActorFactoryDatasmithScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryDatasmithScene), 3153070193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_4014878740(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
