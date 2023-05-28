// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LevelInstanceActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceActorFactory() {}
// Cross Module References
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceActorFactory();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_LevelInstanceEditor();
// End Cross Module References
	void ULevelInstanceActorFactory::StaticRegisterNativesULevelInstanceActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceActorFactory);
	UClass* Z_Construct_UClass_ULevelInstanceActorFactory_NoRegister()
	{
		return ULevelInstanceActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelInstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LevelInstanceActorFactory.h" },
		{ "ModuleRelativePath", "Private/LevelInstanceActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceActorFactory_Statics::ClassParams = {
		&ULevelInstanceActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceActorFactory()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceActorFactory.OuterSingleton, Z_Construct_UClass_ULevelInstanceActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceActorFactory.OuterSingleton;
	}
	template<> LEVELINSTANCEEDITOR_API UClass* StaticClass<ULevelInstanceActorFactory>()
	{
		return ULevelInstanceActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceActorFactory);
	ULevelInstanceActorFactory::~ULevelInstanceActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceActorFactory, ULevelInstanceActorFactory::StaticClass, TEXT("ULevelInstanceActorFactory"), &Z_Registration_Info_UClass_ULevelInstanceActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceActorFactory), 829325389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_40908278(TEXT("/Script/LevelInstanceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
