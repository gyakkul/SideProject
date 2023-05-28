// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_HLODProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_HLODProxy() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_HLODProxy();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_HLODProxy_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_HLODProxy::StaticRegisterNativesUAssetDefinition_HLODProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_HLODProxy);
	UClass* Z_Construct_UClass_UAssetDefinition_HLODProxy_NoRegister()
	{
		return UAssetDefinition_HLODProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_HLODProxy.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_HLODProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_HLODProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::ClassParams = {
		&UAssetDefinition_HLODProxy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_HLODProxy()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_HLODProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_HLODProxy.OuterSingleton, Z_Construct_UClass_UAssetDefinition_HLODProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_HLODProxy.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_HLODProxy>()
	{
		return UAssetDefinition_HLODProxy::StaticClass();
	}
	UAssetDefinition_HLODProxy::UAssetDefinition_HLODProxy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_HLODProxy);
	UAssetDefinition_HLODProxy::~UAssetDefinition_HLODProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_HLODProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_HLODProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_HLODProxy, UAssetDefinition_HLODProxy::StaticClass, TEXT("UAssetDefinition_HLODProxy"), &Z_Registration_Info_UClass_UAssetDefinition_HLODProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_HLODProxy), 548043397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_HLODProxy_h_3201724927(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_HLODProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_HLODProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
