// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetFactory() {}
// Cross Module References
	CLOTHINGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UClothingAssetFactory();
	CLOTHINGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UClothingAssetFactory_NoRegister();
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemEditor();
// End Cross Module References
	void UClothingAssetFactory::StaticRegisterNativesUClothingAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetFactory);
	UClass* Z_Construct_UClass_UClothingAssetFactory_NoRegister()
	{
		return UClothingAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ClothingAssetFactory.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetFactory_Statics::ClassParams = {
		&UClothingAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetFactory.OuterSingleton, Z_Construct_UClass_UClothingAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetFactory.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMEDITOR_API UClass* StaticClass<UClothingAssetFactory>()
	{
		return UClothingAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetFactory);
	UClothingAssetFactory::~UClothingAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetFactory, UClothingAssetFactory::StaticClass, TEXT("UClothingAssetFactory"), &Z_Registration_Info_UClass_UClothingAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetFactory), 414056937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_2077601279(TEXT("/Script/ClothingSystemEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditor_Public_ClothingAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
