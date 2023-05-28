// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_AssetTypeActionsProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AssetTypeActionsProxy() {}
// Cross Module References
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	void UAssetDefinition_AssetTypeActionsProxy::StaticRegisterNativesUAssetDefinition_AssetTypeActionsProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AssetTypeActionsProxy);
	UClass* Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_NoRegister()
	{
		return UAssetDefinition_AssetTypeActionsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_AssetTypeActionsProxy.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_AssetTypeActionsProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AssetTypeActionsProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::ClassParams = {
		&UAssetDefinition_AssetTypeActionsProxy::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AssetTypeActionsProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AssetTypeActionsProxy.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AssetTypeActionsProxy.OuterSingleton;
	}
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetDefinition_AssetTypeActionsProxy>()
	{
		return UAssetDefinition_AssetTypeActionsProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AssetTypeActionsProxy);
	UAssetDefinition_AssetTypeActionsProxy::~UAssetDefinition_AssetTypeActionsProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Private_AssetDefinition_AssetTypeActionsProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Private_AssetDefinition_AssetTypeActionsProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AssetTypeActionsProxy, UAssetDefinition_AssetTypeActionsProxy::StaticClass, TEXT("UAssetDefinition_AssetTypeActionsProxy"), &Z_Registration_Info_UClass_UAssetDefinition_AssetTypeActionsProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AssetTypeActionsProxy), 1191134280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Private_AssetDefinition_AssetTypeActionsProxy_h_30338234(TEXT("/Script/AssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Private_AssetDefinition_AssetTypeActionsProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Private_AssetDefinition_AssetTypeActionsProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
