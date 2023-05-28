// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_NiagaraSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NiagaraSystem() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraSystem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraSystem_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UAssetDefinition_NiagaraSystem::StaticRegisterNativesUAssetDefinition_NiagaraSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NiagaraSystem);
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraSystem_NoRegister()
	{
		return UAssetDefinition_NiagaraSystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_NiagaraSystem.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_NiagaraSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NiagaraSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::ClassParams = {
		&UAssetDefinition_NiagaraSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraSystem()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NiagaraSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NiagaraSystem.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NiagaraSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NiagaraSystem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UAssetDefinition_NiagaraSystem>()
	{
		return UAssetDefinition_NiagaraSystem::StaticClass();
	}
	UAssetDefinition_NiagaraSystem::UAssetDefinition_NiagaraSystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NiagaraSystem);
	UAssetDefinition_NiagaraSystem::~UAssetDefinition_NiagaraSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NiagaraSystem, UAssetDefinition_NiagaraSystem::StaticClass, TEXT("UAssetDefinition_NiagaraSystem"), &Z_Registration_Info_UClass_UAssetDefinition_NiagaraSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NiagaraSystem), 2241858772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraSystem_h_4195489800(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
