// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AssetTypeActions/AssetDefinition_SoundBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SoundBase() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundBase();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_SoundBase::StaticRegisterNativesUAssetDefinition_SoundBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SoundBase);
	UClass* Z_Construct_UClass_UAssetDefinition_SoundBase_NoRegister()
	{
		return UAssetDefinition_SoundBase::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SoundBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_SoundBase.h" },
		{ "ModuleRelativePath", "Public/AssetTypeActions/AssetDefinition_SoundBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SoundBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::ClassParams = {
		&UAssetDefinition_SoundBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SoundBase()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SoundBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SoundBase.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SoundBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SoundBase.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_SoundBase>()
	{
		return UAssetDefinition_SoundBase::StaticClass();
	}
	UAssetDefinition_SoundBase::UAssetDefinition_SoundBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SoundBase);
	UAssetDefinition_SoundBase::~UAssetDefinition_SoundBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SoundBase, UAssetDefinition_SoundBase::StaticClass, TEXT("UAssetDefinition_SoundBase"), &Z_Registration_Info_UClass_UAssetDefinition_SoundBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SoundBase), 1509503307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_3861387548(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
