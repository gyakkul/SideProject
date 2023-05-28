// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTools/AssetDefinition_LevelSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LevelSequence() {}
// Cross Module References
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LevelSequence();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LevelSequence_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	void UAssetDefinition_LevelSequence::StaticRegisterNativesUAssetDefinition_LevelSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LevelSequence);
	UClass* Z_Construct_UClass_UAssetDefinition_LevelSequence_NoRegister()
	{
		return UAssetDefinition_LevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTools/AssetDefinition_LevelSequence.h" },
		{ "ModuleRelativePath", "Private/AssetTools/AssetDefinition_LevelSequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LevelSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::ClassParams = {
		&UAssetDefinition_LevelSequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LevelSequence()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LevelSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LevelSequence.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LevelSequence.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<UAssetDefinition_LevelSequence>()
	{
		return UAssetDefinition_LevelSequence::StaticClass();
	}
	UAssetDefinition_LevelSequence::UAssetDefinition_LevelSequence() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LevelSequence);
	UAssetDefinition_LevelSequence::~UAssetDefinition_LevelSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_AssetTools_AssetDefinition_LevelSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_AssetTools_AssetDefinition_LevelSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LevelSequence, UAssetDefinition_LevelSequence::StaticClass, TEXT("UAssetDefinition_LevelSequence"), &Z_Registration_Info_UClass_UAssetDefinition_LevelSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LevelSequence), 1623417713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_AssetTools_AssetDefinition_LevelSequence_h_3835703541(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_AssetTools_AssetDefinition_LevelSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_AssetTools_AssetDefinition_LevelSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
