// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_NiagaraEffectType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NiagaraEffectType() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEffectType();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UAssetDefinition_NiagaraEffectType::StaticRegisterNativesUAssetDefinition_NiagaraEffectType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NiagaraEffectType);
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_NoRegister()
	{
		return UAssetDefinition_NiagaraEffectType::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_NiagaraEffectType.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_NiagaraEffectType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NiagaraEffectType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::ClassParams = {
		&UAssetDefinition_NiagaraEffectType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEffectType()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NiagaraEffectType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NiagaraEffectType.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NiagaraEffectType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NiagaraEffectType.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UAssetDefinition_NiagaraEffectType>()
	{
		return UAssetDefinition_NiagaraEffectType::StaticClass();
	}
	UAssetDefinition_NiagaraEffectType::UAssetDefinition_NiagaraEffectType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NiagaraEffectType);
	UAssetDefinition_NiagaraEffectType::~UAssetDefinition_NiagaraEffectType() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEffectType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEffectType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NiagaraEffectType, UAssetDefinition_NiagaraEffectType::StaticClass, TEXT("UAssetDefinition_NiagaraEffectType"), &Z_Registration_Info_UClass_UAssetDefinition_NiagaraEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NiagaraEffectType), 1743766946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEffectType_h_2362467245(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEffectType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEffectType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
