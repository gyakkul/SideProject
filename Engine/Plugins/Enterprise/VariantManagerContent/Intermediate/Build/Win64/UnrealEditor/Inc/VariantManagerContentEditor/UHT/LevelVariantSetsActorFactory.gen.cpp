// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelVariantSetsActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContentEditor();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_ULevelVariantSetsActorFactory();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_ULevelVariantSetsActorFactory_NoRegister();
// End Cross Module References
	void ULevelVariantSetsActorFactory::StaticRegisterNativesULevelVariantSetsActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSetsActorFactory);
	UClass* Z_Construct_UClass_ULevelVariantSetsActorFactory_NoRegister()
	{
		return ULevelVariantSetsActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContentEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LevelVariantSetsActorFactory.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSetsActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::ClassParams = {
		&ULevelVariantSetsActorFactory::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSetsActorFactory()
	{
		if (!Z_Registration_Info_UClass_ULevelVariantSetsActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSetsActorFactory.OuterSingleton, Z_Construct_UClass_ULevelVariantSetsActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelVariantSetsActorFactory.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<ULevelVariantSetsActorFactory>()
	{
		return ULevelVariantSetsActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSetsActorFactory);
	ULevelVariantSetsActorFactory::~ULevelVariantSetsActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSetsActorFactory, ULevelVariantSetsActorFactory::StaticClass, TEXT("ULevelVariantSetsActorFactory"), &Z_Registration_Info_UClass_ULevelVariantSetsActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSetsActorFactory), 2987615787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_3270252131(TEXT("/Script/VariantManagerContentEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_LevelVariantSetsActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
