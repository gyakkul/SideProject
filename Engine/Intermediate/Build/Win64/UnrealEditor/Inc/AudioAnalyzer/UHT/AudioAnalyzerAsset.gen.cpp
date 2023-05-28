// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzerAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerAsset() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References
	void UAudioAnalyzerAssetBase::StaticRegisterNativesUAudioAnalyzerAssetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerAssetBase);
	UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister()
	{
		return UAudioAnalyzerAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioAnalyzerAssetBase\n *\n * UAudioAnalyzerAssetBase provides the base interface for controlling asset actions within the editor.\n */" },
		{ "IncludePath", "AudioAnalyzerAsset.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerAsset.h" },
		{ "ToolTip", "UAudioAnalyzerAssetBase\n\nUAudioAnalyzerAssetBase provides the base interface for controlling asset actions within the editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerAssetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::ClassParams = {
		&UAudioAnalyzerAssetBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase()
	{
		if (!Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton;
	}
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerAssetBase>()
	{
		return UAudioAnalyzerAssetBase::StaticClass();
	}
	UAudioAnalyzerAssetBase::UAudioAnalyzerAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerAssetBase);
	UAudioAnalyzerAssetBase::~UAudioAnalyzerAssetBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerAssetBase, UAudioAnalyzerAssetBase::StaticClass, TEXT("UAudioAnalyzerAssetBase"), &Z_Registration_Info_UClass_UAudioAnalyzerAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerAssetBase), 1241008830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_3874368105(TEXT("/Script/AudioAnalyzer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
