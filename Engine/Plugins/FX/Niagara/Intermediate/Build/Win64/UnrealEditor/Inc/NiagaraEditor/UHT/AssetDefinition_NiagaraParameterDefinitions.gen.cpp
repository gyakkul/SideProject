// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_NiagaraParameterDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NiagaraParameterDefinitions() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UAssetDefinition_NiagaraParameterDefinitions::StaticRegisterNativesUAssetDefinition_NiagaraParameterDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NiagaraParameterDefinitions);
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_NoRegister()
	{
		return UAssetDefinition_NiagaraParameterDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_NiagaraParameterDefinitions.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_NiagaraParameterDefinitions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NiagaraParameterDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::ClassParams = {
		&UAssetDefinition_NiagaraParameterDefinitions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NiagaraParameterDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NiagaraParameterDefinitions.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NiagaraParameterDefinitions.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UAssetDefinition_NiagaraParameterDefinitions>()
	{
		return UAssetDefinition_NiagaraParameterDefinitions::StaticClass();
	}
	UAssetDefinition_NiagaraParameterDefinitions::UAssetDefinition_NiagaraParameterDefinitions() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NiagaraParameterDefinitions);
	UAssetDefinition_NiagaraParameterDefinitions::~UAssetDefinition_NiagaraParameterDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraParameterDefinitions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraParameterDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NiagaraParameterDefinitions, UAssetDefinition_NiagaraParameterDefinitions::StaticClass, TEXT("UAssetDefinition_NiagaraParameterDefinitions"), &Z_Registration_Info_UClass_UAssetDefinition_NiagaraParameterDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NiagaraParameterDefinitions), 2152424726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraParameterDefinitions_h_2615265007(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraParameterDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraParameterDefinitions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
