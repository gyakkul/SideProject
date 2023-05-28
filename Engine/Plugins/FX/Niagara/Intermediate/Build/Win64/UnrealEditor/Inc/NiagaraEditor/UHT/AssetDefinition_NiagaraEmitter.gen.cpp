// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_NiagaraEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NiagaraEmitter() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEmitter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UAssetDefinition_NiagaraEmitter::StaticRegisterNativesUAssetDefinition_NiagaraEmitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NiagaraEmitter);
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_NoRegister()
	{
		return UAssetDefinition_NiagaraEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_NiagaraEmitter.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_NiagaraEmitter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NiagaraEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::ClassParams = {
		&UAssetDefinition_NiagaraEmitter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEmitter()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NiagaraEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NiagaraEmitter.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NiagaraEmitter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UAssetDefinition_NiagaraEmitter>()
	{
		return UAssetDefinition_NiagaraEmitter::StaticClass();
	}
	UAssetDefinition_NiagaraEmitter::UAssetDefinition_NiagaraEmitter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NiagaraEmitter);
	UAssetDefinition_NiagaraEmitter::~UAssetDefinition_NiagaraEmitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NiagaraEmitter, UAssetDefinition_NiagaraEmitter::StaticClass, TEXT("UAssetDefinition_NiagaraEmitter"), &Z_Registration_Info_UClass_UAssetDefinition_NiagaraEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NiagaraEmitter), 3738537542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_4076828264(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
