// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/Asset/FleshAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleshAssetFactory() {}
// Cross Module References
	CHAOSFLESHEDITOR_API UClass* Z_Construct_UClass_UFleshAssetFactory();
	CHAOSFLESHEDITOR_API UClass* Z_Construct_UClass_UFleshAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEditor();
// End Cross Module References
	void UFleshAssetFactory::StaticRegisterNativesUFleshAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFleshAssetFactory);
	UClass* Z_Construct_UClass_UFleshAssetFactory_NoRegister()
	{
		return UFleshAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFleshAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFleshAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Factory for FleshAsset\n*/" },
		{ "IncludePath", "ChaosFlesh/Asset/FleshAssetFactory.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/Asset/FleshAssetFactory.h" },
		{ "ToolTip", "Factory for FleshAsset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFleshAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFleshAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFleshAssetFactory_Statics::ClassParams = {
		&UFleshAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFleshAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFleshAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UFleshAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFleshAssetFactory.OuterSingleton, Z_Construct_UClass_UFleshAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFleshAssetFactory.OuterSingleton;
	}
	template<> CHAOSFLESHEDITOR_API UClass* StaticClass<UFleshAssetFactory>()
	{
		return UFleshAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFleshAssetFactory);
	UFleshAssetFactory::~UFleshAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFleshAssetFactory, UFleshAssetFactory::StaticClass, TEXT("UFleshAssetFactory"), &Z_Registration_Info_UClass_UFleshAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFleshAssetFactory), 303488972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_888719101(TEXT("/Script/ChaosFleshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
