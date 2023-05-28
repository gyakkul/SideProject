// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_NiagaraScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NiagaraScript() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraScript();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraScript_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UAssetDefinition_NiagaraScript::StaticRegisterNativesUAssetDefinition_NiagaraScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NiagaraScript);
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraScript_NoRegister()
	{
		return UAssetDefinition_NiagaraScript::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_NiagaraScript.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_NiagaraScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NiagaraScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::ClassParams = {
		&UAssetDefinition_NiagaraScript::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraScript()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NiagaraScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NiagaraScript.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NiagaraScript.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UAssetDefinition_NiagaraScript>()
	{
		return UAssetDefinition_NiagaraScript::StaticClass();
	}
	UAssetDefinition_NiagaraScript::UAssetDefinition_NiagaraScript() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NiagaraScript);
	UAssetDefinition_NiagaraScript::~UAssetDefinition_NiagaraScript() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NiagaraScript, UAssetDefinition_NiagaraScript::StaticClass, TEXT("UAssetDefinition_NiagaraScript"), &Z_Registration_Info_UClass_UAssetDefinition_NiagaraScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NiagaraScript), 1199908762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_607894675(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
