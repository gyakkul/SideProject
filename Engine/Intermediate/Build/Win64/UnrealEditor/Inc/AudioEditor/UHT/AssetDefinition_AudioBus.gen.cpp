// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTypeActions/AssetDefinition_AudioBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AudioBus() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_AudioBus();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_AudioBus_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_AudioBus::StaticRegisterNativesUAssetDefinition_AudioBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AudioBus);
	UClass* Z_Construct_UClass_UAssetDefinition_AudioBus_NoRegister()
	{
		return UAssetDefinition_AudioBus::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AudioBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_AudioBus.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_AudioBus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AudioBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::ClassParams = {
		&UAssetDefinition_AudioBus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AudioBus()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AudioBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AudioBus.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AudioBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AudioBus.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_AudioBus>()
	{
		return UAssetDefinition_AudioBus::StaticClass();
	}
	UAssetDefinition_AudioBus::UAssetDefinition_AudioBus() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AudioBus);
	UAssetDefinition_AudioBus::~UAssetDefinition_AudioBus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AudioBus, UAssetDefinition_AudioBus::StaticClass, TEXT("UAssetDefinition_AudioBus"), &Z_Registration_Info_UClass_UAssetDefinition_AudioBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AudioBus), 3562180332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_3839055152(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_AudioBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
